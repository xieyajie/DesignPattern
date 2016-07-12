//
//  CountingMazeBuilder.hpp
//  DesignPattern
//
//  Created by XieYajie on 7/12/16.
//  Copyright © 2016 dxstudio. All rights reserved.
//

#ifndef CountingMazeBuilder_hpp
#define CountingMazeBuilder_hpp

#include <stdio.h>

#include "MazeBuilder.hpp"

namespace patterns
{
// 不创建迷宫，负责对已被创建的不同种类的构件进行计数
class CountingMazeBuilder: public MazeBuilder {
public:
    CountingMazeBuilder() {
        _doors = 0;
        _roomes = 0;
    }
    
    virtual void BuildMaze();
    virtual void BuildRoom(int n) {
        _roomes++;
    }
    
    virtual void BuildDoor(int n1, int n2) {
        _doors++;
    }
    
    virtual void AddWall(int n, Direction direction);
    
    void GetCounts(int& rooms, int& doors) const {
        rooms = _roomes;
        doors = _doors;
    }
    
private:
    int _doors;
    int _roomes;
    
};
    
}

#endif /* CountingMazeBuilder_hpp */
