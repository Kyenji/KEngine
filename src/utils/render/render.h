#ifndef DRAW_H
#define DRAW_H

#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

class Renderer {
public:
    explicit Renderer(sf::RenderWindow& window) : window(window) {}

    void drawObject(const sf::Drawable& object) const;

private:
    sf::RenderWindow& window;
};

#endif