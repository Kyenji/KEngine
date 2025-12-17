#include "core/entity/entity.h"
#include "utils/render/render.h"
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/VideoMode.hpp>

int main() {
    sf::RenderWindow window(
        sf::VideoMode({800, 600}),
        "KEngine"
    );

    while (window.isOpen()) {
        while (auto event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }

        window.clear(sf::Color::Black); // Clear the window with black color to start drawing a new frame
        window.display(); // Display the rendered frame on screen
    }

    return 0;
}