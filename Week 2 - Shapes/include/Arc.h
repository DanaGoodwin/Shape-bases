#pragma once

#include <SFML/Graphics.hpp>
#include "Base.h"

/*A rectangle class*/
class Arc : public Shape
{
private:
	float m_Radius;
	int iNumPoints;
	int iNumAngle;
public:
	Arc();
	Arc(sf::Vector2f position);
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};
