//
//  Application.cpp
//  SFML-GameEngine
//
//  Created by Hayden Goldstien on 8/20/14.
//  Copyright (c) 2014 HaydenGoldstien. All rights reserved.
//

#include "Application.hpp"

Application::Application():
mWindow(sf::VideoMode(1024,768), "SFML-GameEngine", sf::Style::Close)
{
    mWindow.setFramerateLimit(60);
}

void Application::launch()
{
    while (mWindow.isOpen())
    {
        update();
        render();
    }
}

void Application::update()
{
    
}

void Application::render()
{
    //mWindow.clear();
    //mWindow.display();
}
