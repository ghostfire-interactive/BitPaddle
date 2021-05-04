//
//  AIPaddle.h
//  BitPaddle!
//
//  Created by Anarchy on 5/19/13.
//  Copyright (c) 2013 Tim O'Brien. All rights reserved.
//

#ifndef __BitPaddle___AIPaddle__
#define __BitPaddle___AIPaddle__

#include <iostream>
#include "visiblegameobject.h"
class AIPaddle :
public VisibleGameObject
{
public:
    AIPaddle(void);
    ~AIPaddle(void);
    
    void Update(float elapsedTime);
    void Draw(sf::RenderWindow& rw);
    
    float GetVelocity() const;
    
private:
    float _velocity;  // -- left ++ right
    float _maxVelocity;
};
#endif /* defined(__BitPaddle___AIPaddle__) */
