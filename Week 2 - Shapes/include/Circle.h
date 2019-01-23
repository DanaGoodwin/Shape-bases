#pragma once

#include <SFML/Graphics.hpp>
#include "Base.h"

/*! A Circle Class*/
class Circle : public Shape
{
private:
	float m_Radius;
	int iNumPoints;
public:
	Circle(sf::Vector2f position);
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

