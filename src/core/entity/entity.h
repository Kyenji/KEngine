#ifndef ENTITY_H
#define ENTITY_H

#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Vector2.hpp>

class Entity {
public:
    Entity(float width, float height, float posX, float posY, sf::Color color = sf::Color::White);

    void setColor(sf::Color color);
    
    const sf::Drawable& drawable() const;

private:
    sf::RectangleShape entity;
};

#endif