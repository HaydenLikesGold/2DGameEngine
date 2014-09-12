//
//  State.h
//  SFML-GameEngine
//
//  Created by Hayden Goldstien on 9/12/14.
//  Copyright (c) 2014 HaydenGoldstien. All rights reserved.
//

#ifndef __SFML_GameEngine__State__
#define __SFML_GameEngine__State__

#include <memory>
#include <SFML/window.hpp>

#include "ResourceIdentifiers.hpp"
#include "StateStack.hpp"

class StateStack;

class State
{
    public:
        typedef std::unique_ptr<State> Ptr;
        struct Context
        {
            Context(sf::RenderWindow& window, TextureManager& textures);
            
            sf::RenderWindow*	window;
            TextureManager*		textures;
        };
        
    public:
        State(StateStack& stack, Context context);
        ~State();
        
    private:
    
};
#endif /* defined(__SFML_GameEngine__State__) */
