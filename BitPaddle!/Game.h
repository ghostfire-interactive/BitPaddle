//
//  Game.h
//  BitPaddle
//
//  Created by Anarchy on 5/9/13.
//  Copyright (c) 2013 Tim O'Brien. All rights reserved.
//

#ifndef __BitPaddle__Game__
#define __BitPaddle__Game__

#include <iostream>
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include "splashScreen.h"
#include "MainMenu.h"
#include "VisibleGameObject.h"
#include "PlayerPaddle.h"
#include "GameObjectManager.h"
#include "GameBall.h"
#include "SFMLSoundProvider.h"
#include "ServiceLocator.h"
#include "IAudioProvider.h"
#include "AIPaddle.h"

//yes, this class is static.  I needed a global interface, and if Game
//fails to intialize, there is NO way to recover.

class Game
{
public:
	static void Start();
	static sf::RenderWindow& GetWindow();
	const static sf::Event& GetInput();
    const static GameObjectManager &GetGameObjectManger();
    
	const static int SCREEN_WIDTH = 1024;
	const static int SCREEN_HEIGHT = 768;
    
private:
	static bool IsExiting();
	static void GameLoop();
	
	static void ShowSplashScreen();
	static void ShowMenu();
    
	enum GameState { Uninitialized, ShowingSplash, Paused,
        ShowingMenu, Playing, Exiting };
    
	static GameState _gameState;
	static sf::RenderWindow _mainWindow;
	
	static GameObjectManager _gameObjectManager;
};

#endif /* defined(__BitPaddle__Game__) */