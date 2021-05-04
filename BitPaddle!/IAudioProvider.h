//
//  IAudioProvider.h
//  BitPaddle!
//
//  Created by Anarchy on 5/19/13.
//  Copyright (c) 2013 Tim O'Brien. All rights reserved.
//

#ifndef BitPaddle__IAudioProvider_h
#define BitPaddle__IAudioProvider_h
#include "SFML/Audio.hpp"

class IAudioProvider
{
public:
    virtual ~IAudioProvider() {}
    virtual void PlaySound(std::string filename) = 0;
    virtual void PlaySong(std::string filename, bool looping) = 0;
    virtual void StopAllSounds() = 0;
    
    virtual bool IsSoundPlaying() = 0;
    virtual bool IsSongPlaying() = 0;
};

#endif
