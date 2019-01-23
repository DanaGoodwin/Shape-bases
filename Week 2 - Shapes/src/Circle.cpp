#include "Base.h"
#include "Circle.H"

Circle::Circle(sf::Vector2f position)
{
	m_Position = position;

	m_Radius = 35.0f;
	iNumPoints = 60;

	m_Vertices.setPrimitiveType(sf::TriangleFan);
	m_Vertices.resize(iNumPoints + 2);
	float ft = 0.0f;
	float fdetlat = 6.28319 / (float)(iNumPoints - 2);
	float fx, fy;

	m_Vertices[0].position = m_Position;

	for (int i = 1; i < iNumPoints + 1; i++)
	{
		fx = cos(ft) * m_Radius;
		fy = sin(ft) * m_Radius;
		ft = ft + fdetlat;
		m_Vertices[i] = sf::Vector2f(m_Position.x + fx, m_Position.y + fy);
	}
	m_Vertices[iNumPoints + 1].position = m_Vertices[1].position;

}

void Circle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(m_Vertices);
}