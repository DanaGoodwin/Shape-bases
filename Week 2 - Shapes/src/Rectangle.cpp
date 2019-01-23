#include "Rectangle.h"

Rectangle::Rectangle()
{

}

Rectangle::Rectangle(sf::Vector2f position, float halfextents)
{
	m_Position = position;
	m_Halfextents = halfextents;

	m_Vertices.resize(4); //!< The number of points in the shape.
	m_Vertices.setPrimitiveType(sf::Quads);

	m_Vertices[0].position = m_Position; //!< Get the intial position
	m_Vertices[1].position = sf::Vector2f(m_Position.x + (halfextents*2), m_Position.x); //!< Add the doubled halfextents to the inital position to make the new point.
	m_Vertices[2].position = sf::Vector2f(m_Position.x + (halfextents*2), m_Position.x + halfextents); //!< Add the doubled halfextents to the new point just created to get the two new corners.
	m_Vertices[3].position = sf::Vector2f(m_Position.x, m_Position.x + halfextents); //!< The last corner created in the line above needs the half extents adding to it to reach the intial position.
}

void Rectangle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(m_Vertices);
}