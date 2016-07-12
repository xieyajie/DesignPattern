//
//  TCPState.cpp
//  StatePattern
//
//  Created by XieYajie on 3/18/16.
//  Copyright © 2016 XieYajie. All rights reserved.
//

#include "TCPState.hpp"
#include "TCPConnection.hpp"

namespace patterns {
    
void TCPState::transmit(TCPConnection *connection, TCPOctetStream *stream)
{
    
}

//主动打开
void TCPState::activeOpen(TCPConnection *t)
{
    
}

//被动打开
void TCPState::passiveOpen(TCPConnection *t)
{
    
}

//关闭
void TCPState::close(TCPConnection *t)
{
    
}

//同步
void TCPState::synchronize(TCPConnection *t)
{
    
}

//确认
void TCPState::acknowledge(TCPConnection *t)
{
    
}

//发送
void TCPState::send(TCPConnection *t)
{
    
}

void TCPState::changeState(TCPConnection *connection, TCPState *state)
{
    connection->changeState(state);
}
    
}
