//
//  NetworkTrafficCapture.h
//  NetworkTrafficCaptureManager
//
//  Created by ophat on 10/9/15.
//  Copyright (c) 2015 ophat. All rights reserved.
//

#include <pcap.h>
#import <Foundation/Foundation.h>

@interface NetworkTrafficCapture : NSObject{
    pcap_t   *              mHandle1;
    pcap_t   *              mHandle2;
    
    NSString *              mUsedInterfaceHandle1;
    NSString *              mUsedInterfaceHandle2;
    
    NSString *              mMyUrl;
    NSString *              mMyPushUrl;
    
    NSTimer *               mSchedule;

    NSMutableArray *        mInfos;
    
    NSString *              mSavePath;
}


@property (nonatomic,assign) pcap_t * mHandle1;
@property (nonatomic,assign) pcap_t * mHandle2;

@property (nonatomic,copy) NSString * mUsedInterfaceHandle1;
@property (nonatomic,copy) NSString * mUsedInterfaceHandle2;

@property (nonatomic,copy) NSString * mMyUrl;
@property (nonatomic,copy) NSString * mMyPushUrl;

@property (nonatomic,assign) NSTimer * mSchedule;

@property (atomic,retain) NSMutableArray * mInfos;

@property (nonatomic,copy) NSString * mSavePath;

- (void) startNetworkCapture;
- (void) stopNetworkCapture;

@end
