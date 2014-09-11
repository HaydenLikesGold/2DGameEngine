//
//  Application.h
//  SFML-GameEngine
//
//  Created by Hayden Goldstien on 8/20/14.
//  Copyright (c) 2014 HaydenGoldstien. All rights reserved.
//

#ifndef __SFML_GameEngine__Application__
#define __SFML_GameEngine__Application__

#include <SFML/graphics.hpp>

#include "ResourceManager.hpp"
#include "ResourceIdentifiers.hpp"
#include "ResourcePath.hpp"

class Application
{

public:
            Application(int width, int height, std::string windowName);
            ~Application();
    void    launch();
    
private:
    void    update(sf::Time deltaTime);
    void    render();
    
    void    processInput();
    
    void    loadResources();
    
private:
    static const sf::Time   TimePerFrame;
    sf::RenderWindow        mWindow;
    
    //Resource Pools
    TextureManager          mTextures;
};

#endif /* defined(__SFML_GameEngine__Application__) */
