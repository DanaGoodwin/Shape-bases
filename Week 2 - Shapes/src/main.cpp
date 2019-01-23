//P17171343

/*! \mainpage Lab 2 - Shapes
*
* This program gives you a basic SFML winow in which to draw your shapes.
*
* The classes and files you use are up to you.  
*
* This software froms the basis of your submission for lab book 1
*/

/*! \file main.cpp
* \brief Main file for the application
*
* Contains the entry point of the application 
*/

#include "SFML/Graphics.hpp"

#include "Base.h"
#include "Square.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Dot.h"
#include "Line.h"
#include "Triangle.h"
#include "Elipse.h"
#include "Arc.h"


int main() //!< Entry point for the application
{
	sf::RenderWindow window(sf::VideoMode(1024, 800), "Lab Book 1 - Shapes");
	window.setFramerateLimit(60);

	// Instaniate any classes here
	
	Square square(sf::Vector2f(90, 90), 100); //!< Square class.
	Rectangle rectangle(sf::Vector2f(200, 200), 60); //!< Rectangle class.
	Circle circle(sf::Vector2f(300, 300)); //!< Circle class.
	Dot dot(sf::Vector2f(350, 350)); //!< Dot class
	Elipse elipse(sf::Vector2f(400, 400)); //!< Elipse class
	Arc arc(sf::Vector2f(500, 500)); //!<  Arc class
	Line line(sf::Vector2f(700, 700), 100); //!< Line class
	Triangle triangle(sf::Vector2f(550, 550), 100); //!< Triangle class

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		window.clear();

		// Do your drawing here
		
		window.draw(square); //!< Sqaure shape drawn.
		window.draw(rectangle); //!< Rectnagle shape drawn.
		window.draw(circle);//!< Circle shape drawn.
		window.draw(dot); //!< Dot shape drawn
		window.draw(elipse); //!< Elipse shape drawn
		window.draw(arc); //!< Arc shape is drawn
		window.draw(line); //!< Line shape is drawn
		window.draw(triangle); //!< Triangle shape is drawn.

		window.display();
	}
}
