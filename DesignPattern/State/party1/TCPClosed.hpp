//
//  TCPClosed.hpp
//  StatePattern
//
//  Created by XieYajie on 3/18/16.
//  Copyright © 2016 XieYajie. All rights reserved.
//

#ifndef TCPClosed_hpp
#define TCPClosed_hpp

#include <stdio.h>
#include "TCPState.hpp"

//关闭
namespace patterns {
    
class TCPClosed : public TCPState
{
public:
    static TCPState* Instance();
    
    //主动打开
    virtual void activeOpen(TCPConnection*);
    //被动开放
    virtual void passiveOpen(TCPConnection*);
    
private:
    static TCPClosed* _state;
};
    
}

#endif /* TCPClosed_hpp */
