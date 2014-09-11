//
//  Application.cpp
//  SFML-GameEngine
//
//  Created by Hayden Goldstien on 8/20/14.
//  Copyright (c) 2014 HaydenGoldstien. All rights reserved.
//

#include "Application.hpp"

const sf::Time Application::TimePerFrame = sf::seconds(1.f/60.f);

Application::Application(int width, int height, std::string windowName)
:mWindow(sf::VideoMode(width, height), windowName, sf::Style::Close)
, mTextures()
{
    mWindow.setKeyRepeatEnabled(false);
    mWindow.setFramerateLimit(60);
    
    loadResources();
    
}

Application::~Application(){
    
}

void Application::launch()
{
    sf::Clock clock;
    sf::Time timeSinceLastUpdate = sf::Time::Zero;
    
    while (mWindow.isOpen())
    {
        sf::Time deltaTime = clock.restart();
        timeSinceLastUpdate += deltaTime;
        while (timeSinceLastUpdate > TimePerFrame)
        {
            timeSinceLastUpdate -= TimePerFrame;
            
            processInput();
            update(TimePerFrame);
        }
        render();
    }
}

void Application::loadResources()
{
    mTextures.load(Textures::Test, resourcePath()+"autumn.png");
}

void Application::update(sf::Time deltaTime)
{
    
}

void Application::render()
{
    mWindow.clear();
    mWindow.display();
}

void Application::processInput()
{
    sf::Event event;
    while (mWindow.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            mWindow.close();
    }
}