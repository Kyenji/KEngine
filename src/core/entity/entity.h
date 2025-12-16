#ifndef ENTITY_H
#define ENTITY_H

#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Vector2.hpp>

class Entity {
public:
    Entity(float size1, float size2, float posX, float posY, sf::Color color = sf::Color::White);

    void draw(sf::RenderWindow& window);
    void setColor(sf::Color color);

private:
    sf::RectangleShape entity;
};

#endif