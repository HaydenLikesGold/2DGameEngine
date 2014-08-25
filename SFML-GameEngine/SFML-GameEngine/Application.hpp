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

class Application
{

public:
            Application(int width, int height, std::string windowName);
            ~Application();
    void    launch();
    
private:
    void    update();
    void    render();
    
    sf::RenderWindow    mWindow;
};

#endif /* defined(__SFML_GameEngine__Application__) */
