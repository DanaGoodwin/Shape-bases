#pragma once

#include <SFML/Graphics.hpp>
#include "Base.h"

/*A rectangle class*/
class Elipse : public Shape
{
private:
	float m_Radius;
	int iNumPoints;
public:
	Elipse();
	Elipse(sf::Vector2f position);
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};
