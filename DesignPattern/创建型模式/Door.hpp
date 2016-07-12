//
//  Door.hpp
//  DesignPattern
//
//  Created by XieYajie on 7/5/16.
//  Copyright © 2016 dxstudio. All rights reserved.
//

#ifndef Door_hpp
#define Door_hpp

#include <stdio.h>
#include "Room.hpp"

namespace patterns
{
    
    class Door : public MapSite
{
    
public:
    Door(Room* room1=0, Room* room2=0) { }
    
    Room* OtherSideFrom(Room*) { return nullptr; }
    
    virtual void Enter() { }
    
private:
    Room* _room1;
    Room* _room2;
    bool _isOpen;
    
};
    
}

#endif /* Door_hpp */
