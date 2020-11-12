#include <iostream>
#include <string>

using namespace std;

// Program #1
class Person {
private:
	string name;
	int age;

public:
	Person() { // default constructor
		age = 17;
		name = "Rustam";
	}
	Person( int x ) { 
		age = x;
		name = "Rustam";	
	}
	void Display() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
};

// Program #2
 class Records {
 private:
	 string name;
	 float salary;
	 string date_of_birth;

 public:
	 Records() {
		 name = "Rustam";
		 salary = 1234;
		 date_of_birth = "12.34.5678";
	 }
	 Records(string name1, float salary1, string date_of_birth1) {
		 name = name1;
		 salary = salary1;
		 date_of_birth = date_of_birth1;
	 }
	 void Display() {
		 cout << endl;
		 cout << "Name: " << name << endl;
		 cout << "Salary: " << salary <<endl;
		 cout << "Date of Birth: "<< date_of_birth <<endl;
		}
	 void alert_name() {
		 cout << "New name: ";
		 cin >> name;
	 }
	 void alert_salary() {
		 cout << "New salary: ";
		 cin >> salary;
	 }
	 void alert_date() {
		 cout << "New Date of Birth: ";
		 cin >> date_of_birth;
	 }

 };

 // Program #3
 class Account
 {
 public:
	 Account() {
		 cout << "Object is being Created" << endl;
		 name = "Rustam";
		 number = "123456789";
		 balance = 12345;
	 }
	 ~Account() {
		 cout << "Object is being Deleted" << endl;
	 }
	 void Display() {
		 cout << "Name: " << name << endl << "Number: " << number << endl << "Balance: " << balance << endl;
	 }
 private:
	 string name;
	 string number;
	 float balance;	
 };
 
 // Program #4
 class Rectangle {
 private:
	 double height;
	 double width;
 public:
	 Rectangle() {
		 height = 5;
		 width = 5;
	 }

	 Rectangle(double height2, double width2) {
		 height = height2;
		 width = width2;
	 }
	 void setHeight(double a) {
		 height = a;
	 }
	 double getHeight() {
		 return height;
	 }
	 void setWidth(double b) {
		 width= b;
	 }
	 double getWidht() {
		 return width;
	 }
	 double getArea() {
		 return width * height;
	 }
	 double getPerimeter() {
		 return 2 * (width + height);
	 }

 };




 void main_menu_view() {
	cout << "Main menu: \n";
	cout << "[1] Person's info\n";
	cout << "[2] Records\n";
	cout << "[3] Account\n";
	cout << "[4] Triangle\n";
	cout << "[0] Exit\n";
	cout << "Your Choice: ";
}
int main() {

	string user_choise;
	main_menu_view();
	cin >> user_choise;

	// main_menu_validation_check
		if (user_choise == "1") {
			system("cls");
			int x;
			cout << "Input Age: ";
			cin >> x;
			Person person1, person2(x);
			person1.Display();
			cout << endl;
			person2.Display();
		}
		else if (user_choise == "2") {
			system("cls");
			cout << "Records: " << endl;
			string name;
			float salary;
			string date_of_birth;
			cout << "Name: ";
			cin >> name;
			cout << "Salary: ";
			cin >> salary;
			cout << "Date of birth: ";
			cin >> date_of_birth;

			Records record1, record2(name, salary, date_of_birth);
			record1.Display();
			record2.Display();
			cout << endl;

			Records * ptr = &record1;
			ptr->alert_name();
			ptr->alert_salary();
			ptr->alert_date();

			record1.Display();
			record2.Display();
		
		}
		else if (user_choise == "3") {
			system("cls");
			Account a;
			a.Display();
			a.~Account();

		}
		else if (user_choise == "4") {
			system("cls");
			Rectangle r;
			double width1, height1;

			cout << "Enter the widht fo the rectangle: ";
			cin >> width1;
			cout << "Enter the height fo the rectangle: ";
			cin >> height1;

			Rectangle r2(height1, width1);

			r2.setHeight(height1);
			r2.setWidth(width1);

			system("cls");

			int user_choice_1;
			/*int qwerty;
			cin >> qwerty;*/
			while (user_choice_1 >= 1)
			{
				cout << "Rectangle: \n";
				cout << "[1]  Area\n";
				cout << "[2]  Perimeter\n";
				cout << "[0]  Exit\n";
				cin >> user_choice_1;
				switch (user_choice_1)
				{
				case 1:
					system("cls");
					cout << "The Area is: (Default Constructor (5,5)) : " << r.getArea() << endl << endl;
					cout << "The Area is: (Parametric Constructor) : " << r2.getArea() << endl;
					cout << endl;

					break;
				case 2:
					system("cls");
					cout << "The Perimeter is: (Default Constructor(5,5) : " << r.getPerimeter() << endl << endl;
					cout << "The Perimeter is: (Parametric Constructor) : " << r2.getPerimeter() << endl;
					break;
				case 0:  break;
					
					
				}
			}
		}
		else if (user_choise == "0") {
			return 0;
		}
	    else {
		system("cls");
		cout << "Please try again !!!\n";
		main();
	    }


	    return 0;
}

