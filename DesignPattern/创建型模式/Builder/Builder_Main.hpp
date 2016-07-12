//
//  Builder_Main.hpp
//  DesignPattern
//
//  Created by XieYajie on 7/12/16.
//  Copyright © 2016 dxstudio. All rights reserved.
//

#ifndef Builder_Main_hpp
#define Builder_Main_hpp

#include <stdio.h>

#include "StandardMazeBuilder.hpp"
#include "CountingMazeBuilder.hpp"

namespace patterns
{
    void setup() {
        Maze* maze;
        BuilderMazeGame game;
        StandardMazeBuilder builder;
        
        game.CreateMaze(builder);
        maze = builder.GetMaze();
    }
    
    void setupCountingMaze() {
        CountingMazeBuilder builder;
        
        BuilderMazeGame game;
        game.CreateMaze(builder);
        
        int rooms;
        int doors;
        builder.GetCounts(rooms, doors);
        
        std::cout << "The maze has "
        << rooms << " rooms and "
        << doors << " doors" << std::endl;
    }
}

#endif /* Builder_Main_hpp */
