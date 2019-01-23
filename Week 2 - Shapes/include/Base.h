#pragma once

#include <SFML/Graphics.hpp>

/*! A base class */
class Shape : public sf::Drawable 
{
protected:
	sf::Vector2f m_Position;
	sf::VertexArray m_Vertices;
public:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const = 0;
};