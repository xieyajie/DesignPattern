//
//  MazeBuilder.hpp
//  DesignPattern
//
//  Created by XieYajie on 7/8/16.
//  Copyright © 2016 dxstudio. All rights reserved.
//

#ifndef MazeBuilder_hpp
#define MazeBuilder_hpp

#include <stdio.h>

#include "Maze.hpp"

namespace patterns
{
    
// 不定义为纯虚函数是便于派生类只重定义感兴趣的方法
class MazeBuilder
{
public:
    // 创建迷宫
    virtual void BuildMaze() { }
    // 创建一个特定房间号的房间
    virtual void BuildRoom(int room) { }
    // 创建在有号码的房间之间的门
    virtual void BuildDoor(int roomFrom, int roomTo) { }
    
    // 返回创建好的迷宫
    virtual Maze* GetMaze() { return 0; }
    
protected:
    MazeBuilder();
    
private:
    
};
    
}

#endif /* MazeBuilder_hpp */
