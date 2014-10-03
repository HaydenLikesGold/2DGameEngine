//
//  State.cpp
//  SFML-GameEngine
//
//  Created by Hayden Goldstien on 9/12/14.
//  Copyright (c) 2014 HaydenGoldstien. All rights reserved.
//

#include "State.hpp"

StateStack::Context::Context(sf::RenderWindow& window, TextureManager& textures)
: window(&window)
, textures(&textures)
{
}
