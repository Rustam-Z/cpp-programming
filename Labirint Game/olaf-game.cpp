#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <conio.h>
#include <ctime>

using namespace std;

//Calculators
int k;

// Logical Calculations
int Rand, Case_1 = 0, Case_2 = 0, x, Turn_1, Turn_2, TURN_1, TURN_2;

//Window style
sf::RenderWindow window(sf::VideoMode(1000, 650), "OLAF Game", sf::Style::Close | sf::Style::Resize);


//identifires of Game
sf::RectangleShape MainMenu(sf::Vector2f(1000.0f, 650.0f));
sf::RectangleShape Developers(sf::Vector2f(1000.0f, 650.0f));
sf::RectangleShape Help(sf::Vector2f(1000.0f, 650.0f));
sf::RectangleShape Quit(sf::Vector2f(1000.0f, 650.0f));
sf::RectangleShape Loading_1(sf::Vector2f(1000.0f, 650.0f));
sf::RectangleShape Loading_2(sf::Vector2f(1000.0f, 650.0f));
sf::RectangleShape Loading_3(sf::Vector2f(1000.0f, 650.0f));
sf::RectangleShape Map(sf::Vector2f(1000.0f, 650.0f));
sf::RectangleShape Player(sf::Vector2f(45.0f, 30.0f));

//Music
//sf::SoundBuffer Rington; sf::Sound sound_Rington;
//sf::SoundBuffer BackMusic; sf::Sound sound_BackMusic;

//Functions
void F_MainMenu();
void F_Help();
void F_Developers();
void F_Quit();
void F_Start();
void F_Logic();
void F_Map();


void F_MainMenu() {
	window.clear(sf::Color::White);
	window.draw(MainMenu);
	window.display();

	//Start Game
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Numpad1)) {
		//sound_Rington.play(); 
		F_Start();
	}
	//Help Desck
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Numpad2)) {
		//sound_Rington.play(); 
		F_Help();
	}
	//Developers 
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Numpad3)) {
		//sound_Rington.play();
		F_Developers();
	}
	//Quit
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Numpad4)) {
		//sound_Rington.play();
		F_Quit();
	}
}


void F_Help() {
	window.clear(sf::Color::White);
	window.draw(Help);
	window.display();

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
	{
		//sound_Rington.play();
		F_MainMenu();
	}
	else { F_Help(); }
}

void F_Developers() {
	window.clear(sf::Color::White);
	window.draw(Developers);
	window.display();

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape)) {
		//sound_Rington.play(); F_MainMenu();
	}
	else { F_Developers(); }
}

void F_Quit() {
	window.clear(sf::Color::White);
	window.draw(Quit);
	window.display();

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Numpad2)) {
		//sound_Rington.play(); 
		F_MainMenu();
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Numpad1))
	{
		//sound_Rington.play();
		system("pause");
		window.close();
	}
	else { F_Quit(); }
}


void F_Start() {

	F_Map();
	if ((x % 2 == 0) && sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Space)) {
		//sound_Rington.play();
		window.clear();
		window.display();
		Sleep(0700); Sleep(0700); Sleep(0700);
		x++;
		F_Logic();
		F_Start();
	}
	else if (x % 2 == 1) {
		//sound_Rington.play();
		window.clear();
		window.display();
		Sleep(0700); Sleep(0700); Sleep(0700);
		x++;
		F_Logic();
		F_Start();
	}
	else F_Start();
}


void F_Loading() {
	for (int i = 1; i <= 12; i++) {

		window.clear(sf::Color::White);
		if (i == 1 || i == 4 || i == 7 || i == 10) window.draw(Loading_1);
		if (i == 2 || i == 5 || i == 8 || i == 11) window.draw(Loading_2);
		if (i == 3 || i == 6 || i == 9 || i == 12) window.draw(Loading_3);
		window.display();
		Sleep(0700);
	}

}

//main part
int main()
{
	k = 0;
	//Identifiers Picture 
	sf::Texture TextMainMenu; TextMainMenu.loadFromFile("Main_Menu.jpg"); MainMenu.setTexture(&TextMainMenu);
	sf::Texture TextHelp; TextHelp.loadFromFile("Help.jpg"); Help.setTexture(&TextHelp);
	sf::Texture TextDevelopers; TextDevelopers.loadFromFile("Developers.jpg"); Developers.setTexture(&TextDevelopers);
	sf::Texture TextQuit; TextQuit.loadFromFile("Quit_Main.jpg"); Quit.setTexture(&TextQuit);
	sf::Texture TextLoading1; TextLoading1.loadFromFile("Loading1.jpg"); Loading_1.setTexture(&TextLoading1);
	sf::Texture TextLoading2; TextLoading2.loadFromFile("Loading2.jpg"); Loading_2.setTexture(&TextLoading2);
	sf::Texture TextLoading3; TextLoading3.loadFromFile("Loading3.jpg"); Loading_3.setTexture(&TextLoading3);
	sf::Texture TextMap; TextMap.loadFromFile("Map.png"); Map.setTexture(&TextMap);
	sf::Texture TextPlayer_1; TextPlayer_1.loadFromFile("Player.png"); Player.setTexture(&TextPlayer_1);

	// Musics 
	//if (!Rington.loadFromFile("Rington.wav")) { cout << "ERROR" << endl; } sound_Rington.setBuffer(Rington);
	//if (!BackMusic.loadFromFile("BackMusic.wav")) { cout << "ERROR" << endl; } sound_BackMusic.setBuffer(BackMusic);

	//Starting point
	while (window.isOpen())
	{

		sf::Event evnt;
		while (window.pollEvent(evnt))
		{
			switch (evnt.type) {
			case sf::Event::Closed: window.close();
				break;
			case sf::Event::Resized:;
				break;
			}
		}
		//Others


		// Outputs
		if (k == 0) {// sound_BackMusic.play();
		F_Loading(); k++; }
		//k = 1;
		if (k == 1) { F_MainMenu(); }
	}

	return 0;
}
