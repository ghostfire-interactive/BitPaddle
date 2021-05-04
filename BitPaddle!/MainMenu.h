//
//  MainMenu.h
//  BitPaddle
//
//  Created by Anarchy on 5/9/13.
//  Copyright (c) 2013 Tim O'Brien. All rights reserved.
//

#ifndef __BitPaddle__MainMenu__
#define __BitPaddle__MainMenu__

#include <iostream>
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include <list>

class MainMenu
{
    
public:
    enum MenuResult{ Nothing, Exit, Play };
    
    struct MenuItem //since this is POD, using a struct
    {
    public:
        sf::Rect<int> rect;     //templated code!
        MenuResult action;
    };
    
    MenuResult Show(sf::RenderWindow &window);
    
private:
    MenuResult GetMenuResponse(sf::RenderWindow &window);
    MenuResult HandleClick(int x, int y);
    std::list<MenuItem> _menuItems;
};

#endif /* defined(__BitPaddle__MainMenu__) */
