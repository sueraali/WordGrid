//
//  Tile.h
//  WordGridTests
//
//  Created by admin on 12-12-02.
//  Copyright (c) 2012 Debreuil Digital Works. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface Tile : NSObject

@property (nonatomic, readonly) NSString *letter;
@property (nonatomic, readonly) NSString *displayLetter;
@property (nonatomic) CGPoint currentIndex;
@property (nonatomic) CGPoint targetIndex;
@property (nonatomic) Boolean isSelectable;
@property (nonatomic) Boolean isSelected;


-(id) initWithLetter:(NSString *) letter;
- (Boolean) isEmptyTile;
-(NSComparisonResult) compareFromBottomRight:(Tile *)otherObject;

+(Tile *)emptyTile;

@end