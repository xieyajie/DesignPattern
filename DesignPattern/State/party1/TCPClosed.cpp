//
//  TCPClosed.cpp
//  StatePattern
//
//  Created by XieYajie on 3/18/16.
//  Copyright © 2016 XieYajie. All rights reserved.
//

#include "TCPClosed.hpp"
#include "TCPEstablished.hpp"
#include "TCPListen.hpp"

namespace patterns {
    
TCPClosed* TCPClosed::_state = 0;
    
TCPState* TCPClosed::Instance()
{
    if (_state == 0) {
        _state = new TCPClosed();
    }
    
    return _state;
}
    
void TCPClosed::activeOpen(TCPConnection* t)
{
    changeState(t, TCPEstablished::Instance());
}

void TCPClosed::passiveOpen(TCPConnection* t)
{
    changeState(t, TCPListen::Instance());
}
    
}
