//
//  StateStack.h
//  SFML-GameEngine
//
//  Created by Hayden Goldstien on 9/12/14.
//  Copyright (c) 2014 HaydenGoldstien. All rights reserved.
//

#ifndef __SFML_GameEngine__StateStack__
#define __SFML_GameEngine__StateStack__

#include "State.hpp"

class State;

class StateStack : private sf::NonCopyable
{
    struct Context
    {
        Context(sf::RenderWindow& window, TextureManager& textures);
        
        sf::RenderWindow*	window;
        TextureManager*		textures;
    };
    
    public:
    StateStack(Context context);
    
    private:
    
};

#endif /* defined(__SFML_GameEngine__StateStack__) */
