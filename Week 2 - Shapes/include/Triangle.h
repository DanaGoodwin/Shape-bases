#pragma once

#include <SFML/Graphics.hpp>
#include "Base.h"

/*A rectangle class*/
class Triangle : public Shape
{
private:

public:
	Triangle();
	Triangle(sf::Vector2f position, float halfextents);
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};
