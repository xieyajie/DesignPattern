//
//  TCPEstablished.hpp
//  StatePattern
//
//  Created by XieYajie on 3/18/16.
//  Copyright © 2016 XieYajie. All rights reserved.
//

#ifndef TCPEstablished_hpp
#define TCPEstablished_hpp

#include <stdio.h>

#include "TCPState.hpp"

//已建立
namespace patterns {
    
//class TCPOctetStream;
class TCPEstablished : public TCPState
{
public:
    static TCPState* Instance();
    
    virtual void transmit(TCPConnection*, void*);
    virtual void close(TCPConnection*);
private:
    static TCPEstablished* _state;
};
    
}

#endif /* TCPEstablished_hpp */
