//
//  EnchantedMazeFactory.hpp
//  DesignPattern
//
//  Created by XieYajie on 7/8/16.
//  Copyright © 2016 dxstudio. All rights reserved.
//

#ifndef EnchantedMazeFactory_hpp
#define EnchantedMazeFactory_hpp

#include <stdio.h>

#include "MazeFactory.hpp"
#include "EnchantedRoom.hpp"
#include "DoorNeedingSpell.hpp"

namespace patterns
{
    
class EnchantedMazeFactory: public MazeFactory {
public:
    EnchantedMazeFactory() { }
    
    virtual Room* MakeRoom(int n) const
    {
        return new EnchantedRoom(n, CastSpell());
    }
    
    virtual Door* MakeDoor(Room* r1, Room* r2) const
    {
        return new DoorNeedingSpell(r1, r2);
    }
    
protected:
    Spell* CastSpell() const {
        return new Spell();
    }
    
private:
    
};
}

#endif /* EnchantedMazeFactory_hpp */
