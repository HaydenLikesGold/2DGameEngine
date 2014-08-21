#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

#include "Application.hpp"

int main(int, char const**)
{
    try
    {
        Application app;
        app.launch();
    } catch (std::exception& ex)
    {
        std::cout<<"\nEXCEPTION: "<< ex.what() << std::endl;
    }
    return EXIT_SUCCESS;
}
