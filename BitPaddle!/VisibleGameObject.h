//
//  VisibleGameObject.h
//  BitPaddle
//
//  Created by Anarchy on 5/9/13.
//  Copyright (c) 2013 Tim O'Brien. All rights reserved.
//

#ifndef __BitPaddle__VisibleGameObject__
#define __BitPaddle__VisibleGameObject__

#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

class VisibleGameObject
{
public:
    VisibleGameObject();
    virtual ~VisibleGameObject();
    
    virtual void Load(std::string filename);
    virtual void Draw(sf::RenderWindow &window);
    virtual void Update(float elapsedTime);
    
    virtual void SetPosition(float x, float y);
    virtual sf::Vector2f GetPosition() const;
    virtual bool IsLoaded() const;
    
    virtual float GetWidth() const;
    virtual float GetHeight() const;
    
    virtual sf::Rect<float> GetBoundingRect() const;
    
protected:
    sf::Sprite &GetSprite();
    
private:
    sf::Sprite _sprite;
    sf::Texture _image;
    std::string _filename;
    bool _isLoaded;
    
};


#endif /* defined(__BitPaddle__VisibleGameObject__) */
