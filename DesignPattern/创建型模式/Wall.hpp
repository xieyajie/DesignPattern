//
//  Wall.hpp
//  DesignPattern
//
//  Created by XieYajie on 7/5/16.
//  Copyright © 2016 dxstudio. All rights reserved.
//

#ifndef Wall_hpp
#define Wall_hpp

#include <stdio.h>

#include "MapSite.hpp"

namespace patterns
{
    
    class Wall : public MapSite
{
    
public:
    Wall() { }
    
    virtual void Enter() { }
    
private:
    
};
    
}

#endif /* Wall_hpp */
