#include "Arc.h"

Arc::Arc()
{

}
Arc::Arc(sf::Vector2f position)
{

	m_Position = position;

	m_Radius = 35.0f;
	iNumPoints = 40; 
	iNumAngle = 60; //!< This is the angle of the Arc

	m_Vertices.setPrimitiveType(sf::TriangleFan);
	m_Vertices.resize(iNumPoints + 2);
	float ft = 0.0f;
	float fdetlat = 6.28319 / (float)(iNumAngle - 2);
	float fx, fy;

	m_Vertices[0].position = m_Position;

	for (int i = 1; i < iNumPoints + 1; i++)
	{
		fx = cos(ft) * m_Radius;
		fy = sin(ft) * m_Radius;
		ft = ft + fdetlat;
		m_Vertices[i] = sf::Vector2f(m_Position.x + fx, m_Position.y + fy);
	}
	m_Vertices[iNumPoints + 1].position = m_Vertices[0].position;
}
void Arc::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(m_Vertices);
}