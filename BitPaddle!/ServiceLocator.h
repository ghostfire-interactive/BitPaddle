//
//  ServiceLocator.h
//  BitPaddle!
//
//  Created by Anarchy on 5/19/13.
//  Copyright (c) 2013 Tim O'Brien. All rights reserved.
//

#ifndef __BitPaddle___ServiceLocator__
#define __BitPaddle___ServiceLocator__

#include <iostream>
#include "SFML/Audio.hpp"
#include "IAudioProvider.h"

class ServiceLocator
{
public:
    static IAudioProvider* GetAudio()  { return _audioProvider; } const
    
    static void RegisterServiceLocator(IAudioProvider *provider)
    {
        _audioProvider = provider;
    }
    
private:
    static IAudioProvider * _audioProvider;
    
};

#endif /* defined(__BitPaddle___ServiceLocator__) */
