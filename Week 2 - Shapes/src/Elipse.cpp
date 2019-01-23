#include "Elipse.h"

Elipse::Elipse()
{

}
Elipse::Elipse(sf::Vector2f position)
{
	m_Position = position;

	m_Radius = 35.0f;
	iNumPoints = 60;

	m_Vertices.setPrimitiveType(sf::TriangleFan);
	m_Vertices.resize(iNumPoints + 2); //!< +2 becuase 1 point the center point of the fan and the other is the started point of the Elipse
	float ft = 0.0f; //!< orign
	float fdetlat = 6.28319 / (float)(iNumPoints - 2);
	float fx, fy;

	m_Vertices[0].position = m_Position;

	for (int i = 1; i < iNumPoints + 1; i++)
	{
		fx = cos(ft) * m_Radius;
		fy = sin(ft) * m_Radius*2; 
		ft = ft + fdetlat;
		m_Vertices[i] = sf::Vector2f(m_Position.x + fx, m_Position.y + fy);
	}
	m_Vertices[iNumPoints + 1].position = m_Vertices[1].position; //!< This is calaculating the position of the last point to make it a full elipse
}
void Elipse::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(m_Vertices);
}