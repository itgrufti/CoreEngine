#include "CoreDialog.h"
#include <iostream>
#include <SFML\Graphics.hpp>


CCoreDialog::CCoreDialog()
{
}

string CCoreDialog::promt(string windowTitle, string message)
{
	sf::RenderWindow window(sf::VideoMode(400, 200), windowTitle);
	sf::Texture texture;
	if (!texture.loadFromFile("dialogBackground.png"))
	{
		cout << "could not load BackGround, Original message: " << message << endl;
	}
	sf::Sprite sprite;
	sprite.setTexture(texture);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(sprite);
		window.display();
	}
	return "haha";
}


CCoreDialog::~CCoreDialog()
{
}
