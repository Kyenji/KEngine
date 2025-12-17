#include "entity.h"
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

Entity::Entity(float width, float height, float posX, float posY, sf::Color color) 
    : entity({width, height})
{
    entity.setPosition({posX, posY});
    entity.setFillColor(color);
}

void Entity::setColor(sf::Color color) {
    entity.setFillColor(color);
}

const sf::Drawable& Entity::drawable() const {
    return entity;
}