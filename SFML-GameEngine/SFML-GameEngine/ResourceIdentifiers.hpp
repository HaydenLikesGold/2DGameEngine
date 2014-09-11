//
//  ResourceIdentifiers.hpp
//  SFML-GameEngine
//
//  Created by Hayden Goldstien on 9/10/14.
//  Copyright (c) 2014 HaydenGoldstien. All rights reserved.
//

#ifndef SFML_GameEngine_ResourceIdentifiers_hpp
#define SFML_GameEngine_ResourceIdentifiers_hpp

#include "ResourceManager.hpp"

namespace Textures
{
    enum ID
    {
        
    };
}

typedef ResourceManager<sf::Texture, Textures::ID> textureManager;

#endif
