//
//  MazeGame1.hpp
//  DesignPattern
//
//  Created by XieYajie on 7/8/16.
//  Copyright © 2016 dxstudio. All rights reserved.
//

#ifndef AFMazeGame_hpp
#define AFMazeGame_hpp

#include <stdio.h>

#include "Maze.hpp"
#include "MazeFactory.hpp"

namespace patterns
{
    
class AFMazeGame {
    
public:
    virtual Maze* CreateMaze(MazeFactory& factory)
    {
        Maze* aMaze = factory.MakeMaze();
        Room* r1 = factory.MakeRoom(1);
        Room* r2 = factory.MakeRoom(2);
        Door* aDoor = factory.MakeDoor(r1, r2);
        
        aMaze->AddRoom(r1);
        aMaze->AddRoom(r2);
        
        r1->setSide(North, factory.MakeWall());
        r1->setSide(East, aDoor);
        r1->setSide(South, factory.MakeWall());
        r1->setSide(West, factory.MakeWall());
        
        r2->setSide(North, factory.MakeWall());
        r2->setSide(East, factory.MakeWall());
        r2->setSide(South, factory.MakeWall());
        r2->setSide(West, aDoor);
        
        return aMaze;
    }
    
private:
    
};
    
}

#endif /* AFMazeGame_hpp */
