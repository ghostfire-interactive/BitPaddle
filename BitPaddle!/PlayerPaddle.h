//
//  PlayerPaddle.h
//  BitPaddle
//
//  Created by Anarchy on 5/9/13.
//  Copyright (c) 2013 Tim O'Brien. All rights reserved.
//

#ifndef __BitPaddle__PlayerPaddle__
#define __BitPaddle__PlayerPaddle__

#include <iostream>
#include "VisibleGameObject.h"

class PlayerPaddle:
public VisibleGameObject
{
public:
    PlayerPaddle();
    ~PlayerPaddle();
    
    void Update(float elapsedTime);
    void Draw(sf::RenderWindow &rw);
    
    float GetVelocity() const;
    
private:
    float _velocity; //-- left ++ right
    float _maxVelocity;
};


#endif /* defined(__BitPaddle__PlayerPaddle__) */
