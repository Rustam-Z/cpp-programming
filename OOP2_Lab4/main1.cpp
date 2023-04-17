#include <iostream>
#include <string>

using namespace std;

class DayTime
{
private:
	int hour, minute, second;

public:
	DayTime()
	{
		hour = 0;
		minute = 0;
		second = 0;
	}

	DayTime(int h, int m, int s)
	{
		hour = h;
		minute = m;
		second = s;
	}
	int getHour() const
	{
		return hour;
	}
	int getMinute() const
	{
		return minute;
	}
	int getSecond() const
	{
		return second;
	}

	void DisplayTime()
	{
		cout << "HH: " << hour << endl
			 << "MM: " << minute << endl
			 << "SS: " << second << endl;
	}
	int asSeconds() const
	{
		return (3600 * hour + 60 * minute + second);
	}

	friend void operator<<(ostream &out, DayTime &h);
	friend void operator>>(istream &in, DayTime &h);
	friend void operator++(DayTime &MainDayTime);
	friend void operator--(DayTime &MainDayTime2);
};

void operator>>(istream &in, DayTime &h)
{
	cout << "Input hours ( 0 , 24 ): ";
	in >> h.hour;

	cout << "Input minutes (0 , 60 ): ";
	in >> h.minute;

	cout << "Input seconds ( 0 ,60 ): ";
	in >> h.second;
}

void operator<<(ostream &out, DayTime &h)
{
	out << "HH: " << h.hour << endl
		<< "MM: " << h.minute << endl
		<< "SS: " << h.second << endl;
}
void operator++(DayTime &MainDayTime)
{
	MainDayTime.second++;
	if (MainDayTime.second >= 60)
	{
		MainDayTime.second = 0;
		MainDayTime.minute++;
	}
	if (MainDayTime.minute >= 60)
	{
		MainDayTime.minute = 0;
		MainDayTime.hour++;
	}
}
void operator--(DayTime &MainDayTime2)
{
	MainDayTime2.minute--;
	if (MainDayTime2.minute < 0)
	{
		MainDayTime2.minute = 59;
		MainDayTime2.hour--;
	}
}

// Class 'Dollar' for the program 2
class Dollar
{
private:
	float currency, mktrate, offrate;

public:
	Dollar()
	{
		currency = 100;
		mktrate = 9000;
		offrate = 7000;
	}
	float getDollar()
	{
		cout << endl
			 << "Currency: " << endl;
		return currency;
	}
	float getMarketSoums()
	{
		cout << "Markent currency: " << endl;
		return currency * mktrate;
	}
	float getofficialSoums()
	{
		cout << "Official currency:" << endl;
		return currency * offrate;
	}
	void setRates()
	{
		cout << "Enter current market rate: " << endl;
		cin >> mktrate;
		cout << "Enter current official rate: " << endl;
		cin >> offrate;
	}
	friend void operator<<(ostream &output, Dollar &p);
};

void operator<<(ostream &output, Dollar &p)
{
	output << "Details of a dollar " << endl;
	output << "Currency is " << p.currency << endl
		   << "Market rate is " << p.mktrate << endl;
	output << "Official rate is " << p.offrate << endl;
}

void showChoicesforMainMenu();
void showChoicesforMainMenu2();

int main()
{
	int choice;
	DayTime t2(25, 0, 0);
	int hour, minute, second;
	do
	{
		showChoicesforMainMenu();
		cin >> choice;
		switch (choice)
		{
			// for program 1
		case 1:
		{
			system("cls");
			int choice2;

			DayTime h1(10, 10, 10);
			DayTime h2;
			cin >> h2;

			showChoicesforMainMenu2();

			do
			{
				cin >> choice2;
				switch (choice2)
				{
				case 1:
					cout << h2;
					cout << endl
						 << endl;
					cout << "Enter your choice: ";
					break;
				case 2:
					cout << h2.asSeconds() << endl;
					cout << "Enter your choice: ";
					break;
				case 3:
					++h2;
					h2.DisplayTime();
					cout << h2.asSeconds();
					cout << endl
						 << endl;
					cout << "Enter your choice: ";
					break;
				case 4:
					--h2;
					h2.DisplayTime();
					cout << endl
						 << endl;
					cout << "Enter your choice: ";
					break;
				case 5:
					system("cls");
					main();
					break;
				default:
					system("cls");
					cout << "Invalid input! Try again." << endl;
				}

			} while (choice2 != 5);
			break;
		}
			// for program 2
		case 2:
		{
			system("cls");
			cout << "\t[2] Currency converter" << endl;
			Dollar money;
			cout << money.getDollar() << endl;
			cout << money.getMarketSoums() << endl;
			cout << money.getofficialSoums() << endl
				 << endl;
			money.setRates();
			cout << money.getDollar() << endl;
			cout << money.getMarketSoums() << endl;
			cout << money.getofficialSoums() << endl;
			cout << "Overloading: " << endl
				 << endl;

			cout << money;
		}
		break;

		case 3:
		{
		}
		break;

		default:
			cout << "Invalid input! Try again." << endl;
		}
	} while (choice != 3);

	return 0;
}

void showChoicesforMainMenu()
{

	cout << endl
		 << endl;
	cout << "\t\t\t   M A I N  M E N U" << endl;
	cout << "\t\t\t1: Day Time " << endl;
	cout << "\t\t\t2: Dollar & Soums" << endl;
	cout << "\t\t\t3: Exit " << endl;
	cout << "\t\t\tEnter your choice : ";
}

void showChoicesforMainMenu2()
{
	cout << "\t[1] First program" << endl;
	cout << "\t\t\t   M A I N  M E N U 2" << endl;
	cout << "\t\t\t1. To Display Time." << endl;
	cout << "\t\t\t2. To Display Time in Seconds." << endl;
	cout << "\t\t\t3. To Increment seconds." << endl;
	cout << "\t\t\t4. To decrements minutes." << endl;
	cout << "\t\t\t5. Exit." << endl;
	cout << "\t\t\tEnter your choice : ";
}