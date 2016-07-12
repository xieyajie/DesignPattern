//
//  MazeFactory.hpp
//  DesignPattern
//
//  Created by XieYajie on 7/5/16.
//  Copyright © 2016 dxstudio. All rights reserved.
//

#ifndef MazeFactory_hpp
#define MazeFactory_hpp

#include <stdio.h>
#include "Maze.hpp"
#include "Wall.hpp"
#include "Room.hpp"
#include "Door.hpp"

namespace patterns
{
    
class MazeFactory
{
    
public:
    MazeFactory();
    
    virtual Maze* MakeMaze() const
    {
        return new Maze();
    }
    
    virtual Wall* MakeWall() const
    {
        return new Wall();
    }
    
    virtual Room* MakeRoom(int n) const
    {
        return new Room(n);
    }
    
    virtual Door* MakeDoor(Room* room1, Room* room2) const
    {
        return new Door(room1, room2);
    }
    
private:
    
};
    
}

#endif /* MazeFactory_hpp */
