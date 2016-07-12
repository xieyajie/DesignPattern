//
//  BombedMazeFactory.hpp
//  DesignPattern
//
//  Created by XieYajie on 7/8/16.
//  Copyright © 2016 dxstudio. All rights reserved.
//

#ifndef BombedMazeFactory_hpp
#define BombedMazeFactory_hpp

#include <stdio.h>

#include "MazeFactory.hpp"
#include "BombedWall.hpp"
#include "RoomWithABomb.hpp"

namespace patterns
{
    
class BombedMazeFactory: public MazeFactory
{
public:
    
    Wall* MakeWall() const
    {
        return new BombedWall;
    }
    
    Room* MakeRoom(int n) const
    {
        return new RoomWithABomb(n);
    }
    
private:
    
};
    
}

#endif /* BombedMazeFactory_hpp */
