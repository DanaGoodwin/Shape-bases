#pragma once

#include <SFML/Graphics.hpp>
#include "Base.h"

/*A rectangle class*/
class Line : public Shape
{
private:
	float m_Halfextents;
public:
	Line();
	Line(sf::Vector2f position, float halfextents);
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};
