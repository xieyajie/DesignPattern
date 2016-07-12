//
//  Room.hpp
//  DesignPattern
//
//  Created by XieYajie on 7/5/16.
//  Copyright © 2016 dxstudio. All rights reserved.
//

#ifndef Room_hpp
#define Room_hpp

#include <stdio.h>
#include "MapSite.hpp"

namespace patterns
{
   
// 房间的东南西北
enum Direction {
    North,
    South,
    East,
    West
};
    
class Room : public MapSite
{
    
public:
    Room(int roomNum) { }
    
    MapSite* GetSide(Direction) const { return nullptr; }
    
    void setSide(Direction, MapSite* ) { }
    
    virtual void Enter() { }
    
private:
    
};
    
}

#endif /* Room_hpp */
