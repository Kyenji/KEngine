#include "render.h"

void Renderer::drawObject(const sf::Drawable& object) const {
    window.draw(object);
}