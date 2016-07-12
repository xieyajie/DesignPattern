//
//  TCPEstablished.cpp
//  StatePattern
//
//  Created by XieYajie on 3/18/16.
//  Copyright © 2016 XieYajie. All rights reserved.
//

#include "TCPEstablished.hpp"
#include "TCPConnection.hpp"
#include "TCPListen.hpp"

namespace patterns {
    
TCPEstablished* TCPEstablished::_state = 0;
    
TCPState* TCPEstablished::Instance()
{
    if (_state == 0) {
        _state = new TCPEstablished();
    }
    
    return _state;
}
    
void TCPEstablished::transmit(TCPConnection* t, void* o)
{
    t->processOctet(o);
}

void TCPEstablished::close(TCPConnection* t)
{
    changeState(t, TCPListen::Instance());
}
    
}
