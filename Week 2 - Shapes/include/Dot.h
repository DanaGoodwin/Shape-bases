#pragma once

#include <SFML/Graphics.hpp>
#include "Base.h"

class Dot : public Shape
{
public:
	Dot();
	Dot(sf::Vector2f position);
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};
