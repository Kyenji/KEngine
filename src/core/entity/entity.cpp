#include "entity.h"
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

Entity::Entity(float width, float height, float posX, float posY, sf::Color color) {
    entity.setSize({width, height});
    entity.setPosition({posX, posY});
    entity.setFillColor(color);
}

void Entity::draw(sf::RenderWindow& window) {
    window.draw(entity);
}

void Entity::setColor(sf::Color color) {
    entity.setFillColor(color);
}