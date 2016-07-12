//
//  TCPConnection.cpp
//  StatePattern
//
//  Created by XieYajie on 3/18/16.
//  Copyright © 2016 XieYajie. All rights reserved.
//

#include "TCPConnection.hpp"

#include "TCPEstablished.hpp"
#include "TCPListen.hpp"
#include "TCPClosed.hpp"

namespace patterns {
    
TCPConnection::TCPConnection()
{
    _state = TCPClosed::Instance();
}
    
void TCPConnection::changeState(TCPState* state)
{
    _state = state;
}
    
//主动打开
void TCPConnection::activeOpen()
{
    _state->activeOpen(this);
}

//被动打开
void TCPConnection::passiveOpen()
{
    _state->passiveOpen(this);
}

//关闭
void TCPConnection::close()
{
    _state->close(this);
}

//发送
void TCPConnection::send()
{
    _state->send(this);
}

//承认
void TCPConnection::acknowledge()
{
    _state->activeOpen(this);
}

//同步
void TCPConnection::synchronize()
{
    _state->synchronize(this);
}
    
void TCPConnection::processOctet(void *stream)
{
    
}
    
}
