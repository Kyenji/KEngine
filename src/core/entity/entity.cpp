#include "entity.h"
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

Entity::Entity(float size1, float size2, float posX, float posY, sf::Color color) {
    entity.setSize({size1, size2});
    entity.setPosition({posX, posY});
    entity.setFillColor(color);
}

void Entity::draw(sf::RenderWindow& window) {
    window.draw(entity);
}

void Entity::setColor(sf::Color color) {
    entity.setFillColor(color);
}