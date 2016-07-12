//
//  DoorNeedingSpell.hpp
//  DesignPattern
//
//  Created by XieYajie on 7/8/16.
//  Copyright © 2016 dxstudio. All rights reserved.
//

#ifndef DoorNeedingSpell_hpp
#define DoorNeedingSpell_hpp

#include <stdio.h>
#include "Door.hpp"
#include "Room.hpp"

namespace patterns
{
    
class DoorNeedingSpell: public Door
{
public:
    DoorNeedingSpell(Room*, Room*) {
    }
    
};
    
}

#endif /* DoorNeedingSpell_hpp */
