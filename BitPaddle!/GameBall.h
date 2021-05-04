//
//  GameBall.h
//  BitPaddle!
//
//  Created by Anarchy on 5/9/13.
//  Copyright (c) 2013 Tim O'Brien. All rights reserved.
//

#ifndef __BitPaddle___GameBall__
#define __BitPaddle___GameBall__

#include "game.h"
#include <iostream>
#include <cassert>
#include "VisibleGameObject.h"
#include "SFML/Graphics.hpp"

class GameBall :
public VisibleGameObject
{
public:
	GameBall();
	virtual ~GameBall();
	void Update(float);
    
private:
	float _velocity;
	float _angle;
	float _elapsedTimeSinceStart;
	bool _runYet;
    
	float LinearVelocityX(float angle);
	float LinearVelocityY(float angle);
};


#endif /* defined(__BitPaddle___GameBall__) */
