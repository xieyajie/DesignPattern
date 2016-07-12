//
//  TCPState.hpp
//  StatePattern
//
//  Created by XieYajie on 3/18/16.
//  Copyright © 2016 XieYajie. All rights reserved.
//

#ifndef TCPState_hpp
#define TCPState_hpp

#include <stdio.h>

namespace patterns {
    
class TCPOctetStream;
class TCPConnection;
class TCPState
{
public:
    //传输
    virtual void transmit(TCPConnection *connection, TCPOctetStream *stream);
    //主动打开
    virtual void activeOpen(TCPConnection *);
    //被动打开
    virtual void passiveOpen(TCPConnection *);
    //关闭
    virtual void close(TCPConnection *);
    //同步
    virtual void synchronize(TCPConnection *);
    //确认
    virtual void acknowledge(TCPConnection *);
    //发送
    virtual void send(TCPConnection *);
protected:
    void changeState(TCPConnection *connection, TCPState *state);
private:
    
};
    
}

#endif /* TCPState_hpp */
