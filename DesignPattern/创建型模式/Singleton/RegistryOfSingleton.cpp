//
//  RegistryOfSingleton.cpp
//  DesignPattern
//
//  Created by XieYajie on 4/19/16.
//  Copyright © 2016 dxstudio. All rights reserved.
//

#include "RegistryOfSingleton.hpp"

namespace patterns {
    
RegistryOfSingleton* RegistryOfSingleton::_instance = 0;
    
void RegistryOfSingleton::Register(const std::string& name, RegistryOfSingleton* singleton)
{
    if (singleton && !name.empty()) {
        _registry[name] = singleton;
    }
}

RegistryOfSingleton* RegistryOfSingleton::Instance()
{
    if (_instance == 0) {
        std::string name = "单件的名字";
        _instance = Lookup(name);
    }
    
    return _instance;
}
    
//RegistryOfSingleton::RegistryOfSingleton()
//{
//    Instance();
//}

RegistryOfSingleton* RegistryOfSingleton::Lookup(const std::string& name)
{
    std::map<std::string, RegistryOfSingleton*>::iterator item;
    item = _registry.find(name);
    if (item == _registry.end()) {
        return 0;
    }
    else{
        return item->second;
    }
}
    
}
