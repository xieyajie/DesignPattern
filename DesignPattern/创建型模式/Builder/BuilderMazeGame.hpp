//
//  BuilderMazeGame.hpp
//  DesignPattern
//
//  Created by XieYajie on 7/11/16.
//  Copyright © 2016 dxstudio. All rights reserved.
//

#ifndef BuilderMazeGame_hpp
#define BuilderMazeGame_hpp

#include <stdio.h>

#include "MazeBuilder.hpp"
#include "Maze.hpp"

namespace patterns {
    
class BuilderMazeGame {
public:
    Maze* CreateMaze(MazeBuilder& builder) {
        builder.BuilderMaze();
        
        builder.BuildRoom(1);
        builder.BuildRoom(2);
        builder.BuildDoor(1, 2);
        
        return builder.GetMaze();
    }
    
    Maze* CreateComplexMaze(MazeBuilder& builder) {
        builder.BuildRoom(1);
        // ...
        builder.BuildRoom(1001);
        
        return builder.GetMaze();
    }
    
private:
    
};
    
}

#endif /* BuilderMazeGame_hpp */
