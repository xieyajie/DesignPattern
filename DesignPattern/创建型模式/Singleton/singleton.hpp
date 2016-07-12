//
//  singleton.hpp
//  DesignPattern
//
//  Created by XieYajie on 4/18/16.
//  Copyright © 2016 dxstudio. All rights reserved.
//

#ifndef singleton_hpp
#define singleton_hpp

#include <stdio.h>

namespace patterns {
    
class Singleton
{
public:
    static Singleton* Instance();
    
protected:
    Singleton();
    
private:
    static Singleton* _instance;
    
};
    
}

#endif /* singleton_hpp */
