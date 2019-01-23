#include "Triangle.h"

Triangle::Triangle()
{

}
Triangle::Triangle(sf::Vector2f position, float halfextents)
{
	
	m_Vertices.resize(3); //!< The number of points in the shape

	m_Position = position;

	m_Vertices.setPrimitiveType(sf::Triangles);

	m_Vertices[0].position = m_Position; //!< Getting intial postion of shape.
	m_Vertices[1].position = sf::Vector2f(m_Position.x + halfextents, m_Position.x); //!< Intial position + halfextents = new position for new line to start
	m_Vertices[2].position = sf::Vector2f(m_Position.x, m_Position.x + halfextents); //!< The new point last created + halfextent = complete Square as its back at the inital position.
}
void Triangle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(m_Vertices);
}