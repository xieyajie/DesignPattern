//
//  RegistryOfSingleton.hpp
//  DesignPattern
//
//  Created by XieYajie on 4/19/16.
//  Copyright © 2016 dxstudio. All rights reserved.
//

#ifndef RegistryOfSingleton_hpp
#define RegistryOfSingleton_hpp

#include <stdio.h>
#include <string>
#include <map>

namespace patterns {
    
class RegistryOfSingleton
{
public:
    static void Register(const std::string& name, RegistryOfSingleton* singleton);
    static RegistryOfSingleton* Instance();
    
protected:
//    RegistryOfSingleton();
    static RegistryOfSingleton* Lookup(const std::string& name);
    
private:
    static RegistryOfSingleton* _instance;
    static std::map<std::string, RegistryOfSingleton*> _registry;
};
    
}

#endif /* RegistryOfSingleton_hpp */
