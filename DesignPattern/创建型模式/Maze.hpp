//
//  Maze.hpp
//  DesignPattern
//
//  Created by XieYajie on 7/5/16.
//  Copyright © 2016 dxstudio. All rights reserved.
//

#ifndef Maze_hpp
#define Maze_hpp

#include <stdio.h>
#include "Room.hpp"

namespace patterns
{
    
class Maze
{
    
public:
    Maze() { }
    
    void AddRoom(Room*) { }
    
    Room* RoomNo(int) const {
        return nullptr;
    }
    
private:
    
};
    
}

#endif /* Maze_hpp */
