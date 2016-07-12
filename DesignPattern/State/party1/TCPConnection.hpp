//
//  TCPConnection.hpp
//  StatePattern
//
//  Created by XieYajie on 3/18/16.
//  Copyright © 2016 XieYajie. All rights reserved.
//

#ifndef TCPConnection_hpp
#define TCPConnection_hpp

#include <stdio.h>

namespace patterns {
    
//class TCPOctetStream;
class TCPState;
class TCPConnection
{
public:
    TCPConnection();
    
    //主动打开
    void activeOpen();
    //被动打开
    void passiveOpen();
    //关闭
    void close();
    //发送
    void send();
    //确认
    void acknowledge();
    //同步
    void synchronize();
    
    void processOctet(void *stream);
private:
    friend class TCPState;
    void changeState(TCPState *state);
private:
    TCPState *_state;
};
    
}

#endif /* TCPConnection_hpp */
