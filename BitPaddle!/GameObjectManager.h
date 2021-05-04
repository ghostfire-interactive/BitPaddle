//
//  GameObjectManager.h
//  BitPaddle
//
//  Created by Anarchy on 5/9/13.
//  Copyright (c) 2013 Tim O'Brien. All rights reserved.
//

#ifndef __BitPaddle__GameObjectManager__
#define __BitPaddle__GameObjectManager__

#include <iostream>
#include "VisibleGameObject.h"

class GameObjectManager
{
public:
    GameObjectManager();
    ~GameObjectManager();
    
    void Add(std::string name, VisibleGameObject *gameObject);
    void Remove(std::string name);
    int GetObjectCount() const;
    VisibleGameObject *Get(std::string name) const;
    
    void DrawAll(sf::RenderWindow &renderWindow);
    void UpdateAll();
    
private:
    std::map<std::string, VisibleGameObject*> _gameObjects;
    
    sf::Clock clock;
    
    struct GameObjectDeallocator
    {
        void operator() (const std::pair<std::string, VisibleGameObject*> &p) const
        {
            delete p.second;
        }
    };
};
#endif /* defined(__BitPaddle__GameObjectManager__) */
