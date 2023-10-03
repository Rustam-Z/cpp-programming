#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void welcome();
void instructions();
void record();
void incorrectChoice();
void lostgame();
void win();



//game initial settings 
bool game = false;
const int width = 50;
const int height = 20;

//variable for snake position and fruit position and also score 
int x, y, fx, fy, score;
// tails array

int tx[100], ty[100];
int nt;


enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
Direction dir;



//Initial values when game start
void Init() {
	game = true;
	dir = STOP;
	x = width / 2;
	y = height / 2;
	fx = rand() % width;
	fy = rand() % height;
	score = 0;
	tx[100] = {};
	ty[100] = {};

}

//Creating a map container where snake and fruit appears 
void Map() {
	system("cls");
	SetConsoleTextAttribute(hConsole, 180);
	for (int i = 0; i < width + 2; i++)
		cout << "#";
	cout << endl;

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0)
				cout << "#";
			if (i == y && j == x)
				cout << "O";
			else if (i == fy && j == fx)
				cout << "X";
			else
			{
				bool print = false;
				for (int k = 0; k < nt; k++) {
					if (tx[k] == j && ty[k] == i)
					{
						cout << "o";
						print = true;
					}

				}
				if (!print)
					cout << " ";
			}

			if (j == width - 1)
				cout << "#";
		}
		cout << endl;
	}

	for (int i = 0; i < width + 2; i++)
		cout << "#";
	cout << endl;
	cout << "Score is " << score << endl;

}
// managing input of keyboard to control snake
void Input() {
	if (_kbhit())
	{
		switch (_getch())
		{
		case 'a':
			dir = LEFT;
			break;
		case 'd':
			dir = RIGHT;
			break;
		case 'w':
			dir = UP;
			break;
		case 's':
			dir = DOWN;
			break;
		case 'x':
			game = false;
			break;
		case 'r':
			dir = STOP;
			welcome();
		default:
			break;
	}

	}
}
// logic how snake should grow in size and when game stops
void Logic() {

	int prevx = tx[0];
	int prevy = ty[0];
	int prev2x, prev2y;
	tx[0] = x;
	ty[0] = y;
	for (int i = 1; i < nt; i++) {
		prev2x = tx[i];
		prev2y = ty[i];
		tx[i] = prevx;
		ty[i] = prevy;
		prevx = prev2x;
		prevy = prev2y;
	}



	switch (dir)
	{
	case UP:
		y--;
		break;
	case DOWN:
		y++;
		break;
	case LEFT:
		x--;
		break;
	case RIGHT:
		x++;
		break;

	default:
		break;
	}
	if (x >= width) x = 0; else if (x < 0) x = width - 1;
	if (y >= height) y = 0; else if (y < 0) y = height - 1;

	for (int i = 0; i < nt; i++) {
		if (tx[i] == x && ty[i] == y) {
			lostgame();
		}

	}

	if (x == fx && y == fy) {
		score += 1;
		nt++;
		fx = rand() % width;
		fy = rand() % height;
	}
}
//condition when a player wins
void win() {
	if (score == 100) {
		system("cls");
		cout << endl << endl << endl << endl << endl;
		cout << "                               ";
		cout << "Congratulations you won the game " << endl;
		cout << endl;
		cout << "                               ";
		cout << "To go back please enter any key" << endl;
		char back;
		cin >> back;
		if (back) {
			welcome();
			game = false;
		}
	}
}
//starting game
void startGame() {
	Init();
	while (game) {
		Map();
		Input();
		Logic();
		win();
		Sleep(10);
	}
}

void welcome() {
	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl;
	cout << "                               ";
	cout << "Welcome to the snake game!" << endl;
	cout << "                               " << "1. If you want to start game press 1" << endl;
	cout << "                               " << "2. To see instruction press 2" << endl;
	cout << "                               " << "3. To see record press 3" << endl;
	char choice;
	cin >> choice;
	switch (choice) {
	case '1':
		system("cls");
		startGame();
	case '2':
		instructions();
	case '3':
		record();
	default:
		incorrectChoice();
	}
}

void instructions() {
	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl;
	cout << "                               ";
	cout << "Welcome to the snake game!" << endl;
	cout << endl;
	cout << "                               " << "Here are instructions" << endl;
	cout << "                               " << "1. If you reach current record you won the game" << endl;
	cout << endl;
	cout << "                               " << "2. When you grow up in size you cannot touch yourself, " << endl << "                               " << "if you touch you will lose the game" << endl;
	cout << endl;
	cout << "                               " << "3. When you grow up in size you cannot touch yourself," << endl << "                               " << "if you move backwards when you body is backward" << endl << "                               " << "you automatically lose the game" << endl;
	cout << endl;
	char back;
	cout << "                               " << "To go back press any key" << endl;
	cin >> back;
	if (back) welcome();
}

void record() {
	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl;
	cout << "                               ";
	cout << "Welcome to the snake game!" << endl;
	cout << endl;
	cout << "                               " << "Current record is 100" << endl;
	cout << endl;
	cout << "                               " << "If you reach 100 you will win the game" << endl;
	char back;
	cout << endl;
	cout << "                               " << "To go back press any key" << endl;
	cin >> back;
	if (back) welcome();
}

void incorrectChoice() {
	cout << "Please try again next time" << endl;
	cout << endl;
	char back;
	cout << "To go back press any key" << endl;
	cin >> back;
	if (back) welcome();
}
void lostgame() {
	game = false;
	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl;
	cout << "                               ";
	cout << "Sorry you lost the game " << endl;
	cout << "                               " << "Your score was " << score << endl;
	cout << "                               ";
	cout << "To to back press any button" << endl;
	char back;
	cin >> back;
	if (back) {
		game = false;
		welcome();
	}

}

int main() {
	SetConsoleTextAttribute(hConsole, 116);
	welcome();
	return 0;
}
