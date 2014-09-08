//
//  Application.cpp
//  SFML-GameEngine
//
//  Created by Hayden Goldstien on 8/20/14.
//  Copyright (c) 2014 HaydenGoldstien. All rights reserved.
//

#include "Application.hpp"

Application::Application(int width, int height, std::string windowName):
mWindow(sf::VideoMode(width, height), windowName, sf::Style::Close)
{
    mWindow.setFramerateLimit(60);
    
}

Application::~Application(){
    
}

void Application::launch()
{
    while (mWindow.isOpen())
    {
        sf::Event event;
        while (mWindow.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                mWindow.close();
        }
        
        update();
        render();
    }
}

void Application::update()
{
    
}

void Application::render()
{
    mWindow.clear();
    mWindow.display();
}
