//
//  playerSingleton.h
//  
//
//  Created by Juniorchen on 14-3-18.
//
//

@interface playerSingleton : NSObject

/**
 * gets singleton object.
 * @return singleton
 */
+ (playerSingleton*)sharedInstance;

@end
