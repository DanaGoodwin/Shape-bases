#include "Line.h"

Line::Line()
{

}
Line::Line(sf::Vector2f position, float halfextents)
{

	m_Vertices.resize(2); //!< The number of points in the shape is 2

	m_Position = position;
	m_Halfextents = halfextents;

	m_Vertices.setPrimitiveType(sf::Lines);

	m_Vertices[0].position = m_Position; //!< Get the intial postion
	m_Vertices[1].position = sf::Vector2f(m_Position.x + halfextents, m_Position.x); //!< Calculate the new point by adding halfextents to the old position.
	
}
void Line::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(m_Vertices);
}