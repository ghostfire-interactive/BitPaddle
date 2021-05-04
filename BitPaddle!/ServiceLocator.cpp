//
//  ServiceLocator.cpp
//  BitPaddle!
//
//  Created by Anarchy on 5/19/13.
//  Copyright (c) 2013 Tim O'Brien. All rights reserved.
//

#include "ServiceLocator.h"
#include "SFML/Audio.hpp"

IAudioProvider* ServiceLocator::_audioProvider = NULL;
