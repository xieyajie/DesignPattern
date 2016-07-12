//
//  singleton.cpp
//  DesignPattern
//
//  Created by XieYajie on 4/18/16.
//  Copyright © 2016 dxstudio. All rights reserved.
//

#include "singleton.hpp"

namespace patterns {
    
Singleton* Singleton::_instance = 0;
    
Singleton* Singleton::Instance()
{
    if (_instance == 0) {
        _instance = new Singleton();
    }
    
    return _instance;
}
    
Singleton::Singleton()
{
    Instance();
}
    
}
