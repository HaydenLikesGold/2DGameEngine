#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

#include "Application.hpp"

int main(int, char const**)
{
    int width = 1024;
    int height = 720;
    std::string windowName = "SFML - GameEngine";
    
    try
    {
        Application app(width, height, windowName);
        app.launch();
    } catch (std::exception& ex)
    {
        std::cout<<"\nEXCEPTION: "<< ex.what() << std::endl;
    }
    return EXIT_SUCCESS;
}
