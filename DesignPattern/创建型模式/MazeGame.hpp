//
//  MazeGame.hpp
//  DesignPattern
//
//  Created by XieYajie on 7/8/16.
//  Copyright © 2016 dxstudio. All rights reserved.
//

#ifndef MazeGame_hpp
#define MazeGame_hpp

#include <stdio.h>

namespace patterns
{
    
class Maze;
    
class MazeGame {
    
public:
    Maze* CreateMaze()
    {
        Maze* aMaze = new Maze;
        Room* r1 = new Room(1);
        Room* r2 = new Room(2);
        Door* theDoor = new Door(r1, r2);
        
        aMaze->AddRoom(r1);
        aMaze->AddRoom(r2);
        
        r1->setSide(North, new Wall);
        r1->setSide(East, theDoor);
        r1->setSide(South, new Wall);
        r1->setSide(West, new Wall);
        
        r2->setSide(North, new Wall);
        r2->setSide(East, new Wall);
        r2->setSide(South, new Wall);
        r2->setSide(West, theDoor);
        
        return aMaze;
    }
    
private:
    
};
    
}

#endif /* MazeGame_hpp */
