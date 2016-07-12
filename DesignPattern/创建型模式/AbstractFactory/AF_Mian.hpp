//
//  AF_Mian.hpp
//  DesignPattern
//
//  Created by XieYajie on 7/8/16.
//  Copyright © 2016 dxstudio. All rights reserved.
//

#ifndef AF_Mian_hpp
#define AF_Mian_hpp

#include <stdio.h>

#include "AFMazeGame.hpp"

#include "EnchantedMazeFactory.hpp"
#include "BombedMazeFactory.hpp"

namespace patterns
{
    
void setup() {
    AFMazeGame* game;
    
    EnchantedMazeFactory* enchantedFactory;
    game.CreateMaze(enchantedFactory);
    
//    BombedMazeFactory* bombedFactory;
//    game.CreateMaze(bombedFactory);
}
    
}

#endif /* AF_Mian_hpp */
