#ifndef DRAW_H
#define DRAW_H

#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

void drawEntity(sf::RenderWindow& window, const sf::Drawable& object);

#endif