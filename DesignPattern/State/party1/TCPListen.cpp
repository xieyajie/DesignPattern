//
//  TCPListen.cpp
//  StatePattern
//
//  Created by XieYajie on 3/18/16.
//  Copyright © 2016 XieYajie. All rights reserved.
//

#include "TCPListen.hpp"
#include "TCPEstablished.hpp"

namespace patterns {
    
TCPListen* TCPListen::_state = 0;
    
TCPState* TCPListen::Instance()
{
    if (_state == 0) {
        _state = new TCPListen();
    }
    
    return _state;
}
    
void TCPListen::send(TCPConnection* t)
{
    changeState(t, TCPEstablished::Instance());
}
    
}