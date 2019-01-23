#include "Dot.h"

Dot::Dot()
{

}
Dot::Dot(sf::Vector2f position)
{
	m_Vertices.setPrimitiveType(sf::Points);
	m_Vertices.resize(1);
	
	m_Position = position;

	m_Vertices[0].position = position;
}
void Dot::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(m_Vertices);
}