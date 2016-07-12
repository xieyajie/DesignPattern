//
//  TCPConnection2.hpp
//  StatePattern
//
//  Created by XieYajie on 3/29/16.
//  Copyright © 2016 XieYajie. All rights reserved.
//

#ifndef TCPConnection2_hpp
#define TCPConnection2_hpp

#include <stdio.h>

namespace patterns {
    
class TCPConnection2
{
    typedef enum{
        TCPStateEstablished = 0,
        TCPStateListen,
        TCPStateClosed,
    }TCPState;
    
    
};
    
}

#endif /* TCPConnection2_hpp */
