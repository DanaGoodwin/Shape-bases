#pragma once

#include <SFML/Graphics.hpp>
#include "Base.h"

/*! A square class*/
class Square : public Shape
{
private:
	float m_Halfextents; //!< Half of the height and width of the square on the screen.
public:
	Square();
	Square(sf::Vector2f position, float halfextents);
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};