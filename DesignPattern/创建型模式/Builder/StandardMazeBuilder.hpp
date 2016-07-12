//
//  StandardMazeBuilder.hpp
//  DesignPattern
//
//  Created by XieYajie on 7/12/16.
//  Copyright © 2016 dxstudio. All rights reserved.
//

#ifndef StandardMazeBuilder_hpp
#define StandardMazeBuilder_hpp

#include <stdio.h>

#include "MazeBuilder.hpp"

namespace patterns
{
class StandardMazeBuilder: public MazeBuilder {
public:
    StandardMazeBuilder() { _currentMaze = 0; }
    
    virtual void BuildMaze() {
        _currentMaze = new Maze;
    }
    
    virtual void BuildRoom(int n) {
        if (!_currentMaze->RoomNo(n)) {
            Room* room = new Room(n);
            _currentMaze->AddRoom(room);
            
            room->SetSide(North, new Wall);
            room->SetSide(South, new Wall);
            room->SetSide(East, new Wall);
            room->SetSide(West, new Wall);
        }
    }
    
    virtual void BuildDoor(int n1, int n2) {
        Room* r1 = _currentMaze.RoomNo(n1);
        Room* r2 = _currentMaze.RoomNo(n2);
        Door* d = new Door(r1, r2);
        
        r1->SetSide(CommonWall(r1, r2), d);
        r2->SetSide(CommonWall(r2, r1), d);
    }
    
    virtual Maze* getMaze() {
        return _currentMaze;
    }
    
private:
    // 功能性操作，决定两个房间之间的公共墙壁的方位
    Direction CommonWall(Room*, Room*);
    Maze* _currentMaze;
    
};
}

#endif /* StandardMazeBuilder_hpp */
