//
//  TCPListen.hpp
//  StatePattern
//
//  Created by XieYajie on 3/18/16.
//  Copyright © 2016 XieYajie. All rights reserved.
//

#ifndef TCPListen_hpp
#define TCPListen_hpp

#include <stdio.h>
#include "TCPState.hpp"

//监听
namespace patterns {
    
class TCPListen : public TCPState
{
public:
    static TCPState* Instance();
    
    virtual void send(TCPConnection*);
    
private:
    static TCPListen* _state;
};
    
}

#endif /* TCPListen_hpp */
