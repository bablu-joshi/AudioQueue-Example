//
//  AudioManager.h
//  AQueue
//
//  Created by BABLU JOSHI on 1/15/15.
//  Copyright (c) 2015 aaa. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AudioToolbox/AudioQueue.h>
#import <AudioToolbox/AudioFile.h>


#define NUM_BUFFERS 3

typedef struct
{
    AudioStreamBasicDescription  dataFormat;
    AudioQueueRef                queue;
    AudioQueueBufferRef          buffers[NUM_BUFFERS];
    AudioFileID                  audioFile;
    SInt64                       currentPacket;
    bool                         recording;
} RecordState;



@interface AudioManager : NSObject
{
    RecordState recordState;
    CFURLRef fileURL;
}
- (void)recordPressed:(id)sender;
- (void)startRecording;
- (void)stopRecording;
-(id)initWithFileName:(NSString *)fileName;
@end
