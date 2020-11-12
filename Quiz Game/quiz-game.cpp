#include <iostream>
#include <string>
#include <conio.h>
#include <stdio.h>
using namespace std;

int total_score=0;
int correct_answer = 0;
int hints_used = 0;
string Name[5];
string level;

//the main menu view and some additionl functionalities
int main_menu_view()
{
	system("color 3F");
	cout << "\t\t  *************************************************************************************" << endl;
	cout << "\t\t  *****                                                                           *****" << endl;
	cout << "\t\t  *****           H E L L O !  W E L C O M E  T O  T H E  'Q U I Z L E T'         *****" << endl;
	cout << "\t\t  *****                = = = = = = = = = = = = = = = = = = = = = = = =            *****" << endl;
	cout << "\t\t  *****                          = = = = = = = = = = = =                          *****" << endl;
	cout << "\t\t  *****                                   B Y                                     *****" << endl;
	cout << "\t\t  *****                       R U S T A M    Z O K I R O V                        *****" << endl;
	cout << "\t\t  *****                                                                           *****" << endl;
	cout << "\t\t  *************************************************************************************" << endl;
	cout << endl;

	cout << "\t\t\t\t\t\tH O W  T O  P L A Y\n\n";
	cout << "\t\t1. IN THIS QUIZ GAME YOU WILL BE GIVEN 10 'C++ PROGRAMMING LANGUAGE' RELATED QUESTIONS.\n\n";
	cout << "\t\t2. IF YOU PRESS INCORRECT KEY, THE PROGRAM WILL AGAIN ASK YOU TO INPUT CORRECT VALUE.\n\n";
	cout << "\t\t3. ADDITIONALLY YOU WILL HAVE SOME HINTS WHICH YOU CAN USE FROM the 8TH QUESTION.\n\n";
	cout << "\t\t4. YOU WILL LOSE '5' POINTS FROM YOUR OVERALL SCORE IF YOU WILL USE HINTS.\n\n\n\n";
	cout << "\t\t\t\t\tPRESS THE 'ENTER' KEY TO START A QUIZ... ";
	if (cin.get() == '\n') {
		system("cls");
		cout << "\t\t\t\t\tI N F O R M A T I O N   T A B L E\n\n";
		cout << "What is your name? ";
		getline(cin, Name[0]);
		cout << "What is your level of C++?"<<endl;
		cout << "[1]. Junior" << endl;
		cout << "[2]. Middle" << endl;
		cout << "[3]. Senior" << endl;
		do {
			cout << "Choose the level of difficulty: ";
			cin >> level;
			cin.clear();
		} while (level != "1"&&level!="2"&&level!="3");
		string Respond;
		cout << endl;
		cout << "Are you ready to take the Quiz " << Name[0] << " ? Yes = 'Yes'/No = 'Any key'. " << endl;
		cout << "Your choice: ";
		cin >> Respond;
		if (Respond == "yes" || Respond == "Yes")
		{
			cout << endl;
			cout << "OK, Good Like!!! " << endl;
			system("cls");
			return 1;
		}
		else
		{
			cout << "OK. Goodbye." << endl;
			system("exit");
			return 0;
		}
	}
	else
		cout << "I meant ONLY the ENTER key... Oh well.\n";
	return 0;
}
//the view for the hints in the corner
void hints()
{
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     **   A: Audience help            **" << endl;
	cout << "                                                                                     **   B: 50:50                    **" << endl;
	cout << "                                                                                     **   C: Room for mistake         **" << endl;
	cout << "                                                                                     **   D: Change the question      **" << endl;
	cout << "                                                                                     ***********************************" << endl;
}
//questions
void question1() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "      *****" << endl;
	cout << "                                                                                     ***********************************" << endl; 
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 1"<< endl;
		cout << "What is the correct value to return to the operating system upon the successful completion of a program?" << endl;
		cout << "[1] -1"<<endl;
		cout << "[2]  1" << endl;
		cout << "[3]  0" << endl;
		cout << "[4] Programs do not return a value" << endl;
		string answer;
		cout << endl;
    	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
		//limiting the answers of the user
		if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
		{
			if (answer == "3")
			{
				total_score += 10;
				correct_answer += 1;
				cout << "C O R R E C T   A N S W E R !!!" << endl;
				cout << "You got 10 points out of 10." << endl;
			}
			else if (answer == "1" || answer == "2" || answer == "4")
			{
				cout << "W R O N G  A N S W E R !!!" << endl;
				cout << "You got 0 points out of 10." << endl;
			}
			cout << endl;
			system("pause");
			system("cls");
		}
		else 
		{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			question1();
		}
}
void question2() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 2" << endl;
	cout << "What is the only function all C++ programs must contain?" << endl;
	cout << "[1] start()" << endl;
	cout << "[2] system()" << endl;
	cout << "[3] program()" << endl;
	cout << "[4] main()" << endl;
	string answer;
	cout<<endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "4")
		{
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "2" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
		}
			cout << endl;
			system("pause");
			system("cls");
		}
	else
	{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			question2();
	}
	
}
void question3() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 3" << endl;
	cout << "Which of the following is a correct comment?" << endl;
	cout << "[1] / Comment /" << endl;
	cout << "[2] ** Comment **" << endl;
	cout << "[3] { Comment }" << endl;
	cout << "[4]  //comment" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "4") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "2" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	else
	{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			question3();
	}
}
void question4() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 4" << endl; 
	cout << "Which of the following is the correct operator to compare two variables?" << endl;
	cout << "[1] = =" << endl;
	cout << "[2] :=" << endl;
	cout << "[3] =" << endl;
	cout << "[4] ==" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "4") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "2" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	else
	{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			question4();
	}
}
void question5() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 5" << endl; 
	cout << "Which of the following is a complete function?" << endl;
	cout << "[1] int funct();" << endl;
	cout << "[2] int funct(int x) {return x=x+1;}" << endl;
	cout << "[3] void funct(int) {cout<<'Hello'}" << endl;
	cout << "[4] void funct(x) {cout<<'Hello'}" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "2") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "3" || answer == "4")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
	}
		else
		{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			question5();
		}
	
}
void question6() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 6" << endl;
	cout << "Which is not a proper prototype?" << endl;
	cout << "[1] int funct(char x, char y);" << endl;
	cout << "[2] double funct(char x)" << endl;
	cout << "[3] void funct();" << endl;
	cout << "[4] char x();" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "2") 
		{
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
			
		}
		else if (answer == "1" || answer == "3" || answer == "4")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
			
		}
			cout << endl;
			system("pause");
			system("cls");
		}
		else
		{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			question6();
		}
}
void question7() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 7" << endl;  
	cout << "Which of the following is a two-dimensional array?" << endl;
	cout << "[1] array anarray[20][20];" << endl;
	cout << "[2] int anarray[20][20];" << endl;
	cout << "[3] int array[20, 20];" << endl;
	cout << "[4] char array[20];" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "2") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "3" || answer == "4")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
			
		}
			cout << endl;
			system("pause");
			system("cls");
	}
		else
		{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			question7();
		}
}
void question8() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	hints();
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 8" << endl;
	cout << "Evaluate !(1 && !(0 || 1))." << endl;
	cout << "[1] True" << endl;
	cout << "[2] False" << endl;
	cout << "[3] Unevaluatable" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	//limiting the answers of the user
	if (answer == "1" || answer == "2" || answer == "3" )
	{
		if (answer == "1") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
			
		}
		else if (answer == "2" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
			
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	//if cases for the hints
	else if (answer == "A" || answer == "a")
	{
		hints_used++;
		cout << endl;
		cout << "Audience prediction is...  " << endl;
		cout << "[1] 42%" << endl;
		cout << "[2] 38%" << endl;
		cout << "[3] 20%" << endl;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
		if (answer == "1") {
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 5." << endl;

		}
		else if (answer == "2" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;

		}

		cout << endl;
		system("pause");
		system("cls");
	}
	else if (answer == "B" || answer == "b")
	{
		hints_used++;
		system("cls");
		cout << "Now you have chance to choose two answers. If one of them will correct you will take 5 points." << endl;
		cout << "\t\t\t\t\tQ U E S T I O N  No. 8" << endl;
		cout << "Evaluate !(1 && !(0 || 1))." << endl;
		cout << "[1] True" << endl;
		cout << "[2] False" << endl;
		cout << "[3] Unevaluatable" << endl;
		string answer1, answer2;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR FIRST CHOICE: ";
		cin >> answer1;
		cout << "\t\t\t\t\tENTER YOUR SECOND CHOICE: ";
		cin >> answer2;
		if (answer1 == "1" || answer2 == "1")
		{
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 5 points out of 5." << endl; 
		}
		else 
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
	}
	else if (answer == "C" || answer == "c")
	{
		hints_used++;
		system("cls");
		cout << "Now you have chance to answer incorrectly. You will take 5 points for this question." << endl;
		cout << "\t\t\t\t\tQ U E S T I O N  No. 8" << endl;
		cout << "Evaluate !(1 && !(0 || 1))." << endl;
		cout << "[1] True" << endl;
		cout << "[2] False" << endl;
		cout << "[3] Unevaluatable" << endl;
		string answer;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
	    total_score += 5;
	    correct_answer += 1;
		if(answer=="1")
	    cout << "C O R R E C T   A N S W E R !!!" << endl;
	    cout << "You got 5 points out of 5." << endl;
		cout << endl;
		system("pause");
		system("cls");
	}
	else if (answer == "D" || answer == "d") 
    {
         hints_used++;
		system("cls");
		cout << "\t T H I S   I S  A  N E W   Q U E S T I O N. Y O U  W I L L  G E T  5  P O I N T S. " << endl;
		cout << endl;
		cout << "When did INHA UNivercity in TAshkent established?." << endl;
		cout << "[1] 2014" << endl;
		cout << "[2] 1968" << endl;
		cout << "[3] 2015" << endl;
		string answer;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
			if (answer == "1") {
				total_score += 5;
				correct_answer += 1;
				cout << "C O R R E C T   A N S W E R !!!" << endl;
				cout << "You got 5 points out of 5." << endl;

			}
			else if (answer == "2" || answer == "3")
			{
				cout << "W R O N G  A N S W E R !!!" << endl;
				cout << "You got 0 points out of 5." << endl;

			}
		cout << endl;
		system("pause");
		system("cls");
	}

	else
		{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			question8();
		}
}
void question9() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	hints();
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 9" << endl;
	cout << "What is the result of the program below?" << endl;
	cout << " int x = 10; " << endl;
	cout << " int y = 70; " << endl;
	cout << " x = x + y; " << endl;
	cout << " y = x - y;  " << endl;
	cout << " x = x - y;  " << endl;
	cout << endl;
	cout << "[1] x=70, y=10" << endl;
	cout << "[2] x=10, y=70" << endl;
	cout << "[3] x=60, y=20" << endl;
	cout << "[4] x=20, y=60" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "1") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
			
		}
		else if (answer == "2" || answer == "3" || answer == "4")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
			
		}
			cout << endl;
			system("pause");
			system("cls");
	}
	else if (answer == "A" || answer == "a")
	{
		hints_used++;
		cout << endl;
		cout << "Audience prediction is...  " << endl;
		cout << "[1] 30%" << endl;
		cout << "[2] 25%" << endl;
		cout << "[3] 20%" << endl;
		cout << "[4] 25%" << endl;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
		if (answer == "1") {
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 5 points out of 5." << endl;

		}
		else if (answer == "2" || answer == "3" || answer == "4")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
	}
	else if (answer == "B" || answer == "b")
	{
		hints_used++;
		system("cls");
		cout << "Now you have chance to choose two answers. If one of them will correct you will take 5 points." << endl;
		cout << "\t\t\t\t\tQ U E S T I O N  No. 9" << endl;
		cout << "What is the result of the program below?" << endl;
		cout << " int x = 10; " << endl;
		cout << " int y = 70; " << endl;
		cout << " x = x + y; " << endl;
		cout << " y = x - y;  " << endl;
		cout << " x = x - y;  " << endl;
		cout << endl;
		cout << "[1] x=70, y=10" << endl;
		cout << "[2] x=10, y=70" << endl;
		cout << "[3] x=60, y=20" << endl;
		cout << "[4] x=20, y=60" << endl;
		string answer1, answer2;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR FIRST CHOICE: ";
		cin >> answer1;
		cout << "\t\t\t\t\tENTER YOUR SECOND CHOICE: ";
		cin >> answer2;
		if (answer1 == "1" || answer2 == "1")
		{
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 5 points out of 5." << endl;
		}
		else
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
		
	}
	else if (answer == "C" || answer == "c")
	{
		hints_used++;
		system("cls");
		cout << "Now you have chance to answer incorrectly. You will take 5 points for this question." << endl;
		cout << "\t\t\t\t\tQ U E S T I O N  No. 9" << endl;
		cout << "What is the result of the program below?" << endl;
		cout << " int x = 10; " << endl;
		cout << " int y = 70; " << endl;
		cout << " x = x + y; " << endl;
		cout << " y = x - y;  " << endl;
		cout << " x = x - y;  " << endl;
		cout << endl;
		cout << "[1] x=70, y=10" << endl;
		cout << "[2] x=10, y=70" << endl;
		cout << "[3] x=60, y=20" << endl;
		cout << "[4] x=20, y=60" << endl;
		string answer;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
		total_score += 5;
		correct_answer += 1;
		if (answer == "1")
			cout << "C O R R E C T   A N S W E R !!!" << endl;
		cout << "You got 5 points out of 5." << endl;
		cout << endl;
		system("pause");
		system("cls");
		
	}
	else if (answer == "D" || answer == "d") {
	hints_used++;
	system("cls");
	cout << "\t T H I S   I S  A  N E W   Q U E S T I O N. Y O U  W I L L  G E T  5  P O I N T S. " << endl;
	cout << endl;
	cout << "When did INHA UNivercity in TAshkent established?." << endl;
	cout << "[1] 2014" << endl;
	cout << "[2] 1968" << endl;
	cout << "[3] 2015" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1") {
		total_score += 5;
		correct_answer += 1;
		cout << "C O R R E C T   A N S W E R !!!" << endl;
		cout << "You got 5 points out of 5." << endl;

	}
	else if (answer == "2" || answer == "3")
	{
		cout << "W R O N G  A N S W E R !!!" << endl;
		cout << "You got 0 points out of 5." << endl;

	}
		cout << endl;
		system("pause");
		system("cls");
	}
	else
		{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			question9();
		}
}
void question10() {
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
	hints(); 
	cout << "\t\t\t\t\t  Q U E S T I O N  No. 10" << endl;
	cout << "What will i and j equal after the code below is executed?" << endl;
	cout << "int i = 5;" << endl;
	cout << "int j = i++;" << endl;
	cout << "[1] i=5, j=5 " << endl;
	cout << "[2] i=5, j=4" << endl;
	cout << "[3] i=5, j=6" << endl;
	cout << "[4] ERROR" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
	{
		if (answer == "3") {
			total_score += 10;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 10 points out of 10." << endl;
		}
		else if (answer == "1" || answer == "2" || answer == "4")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
	}
	else if (answer == "A" || answer == "a")
	{
		hints_used++;
		cout << endl;
		cout << "Audience prediction is...  " << endl;
		cout << "[1] 30%" << endl;
		cout << "[2] 25%" << endl;
		cout << "[3] 20%" << endl;
		cout << "[4] 25%" << endl;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
		if (answer == "3") {
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 5 points out of 5." << endl;
		}
		else if (answer == "1" || answer == "2" || answer == "4")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;

		}
		cout << endl;
		system("pause");
		system("cls");
	}
	else if (answer == "B" || answer == "b")
	{
		hints_used++;
		system("cls");
		cout << "Now you have chance to choose two answers. If one of them will correct you will take 5 points." << endl;
		cout << "\t\t\t\t\tQ U E S T I O N  No. 10" << endl;
		cout << "What will i and j equal after the code below is executed?" << endl;
		cout << "int i = 5;" << endl;
		cout << "int j = i++;" << endl;
		cout << "[1] i=5, j=5 " << endl;
		cout << "[2] i=5, j=4" << endl;
		cout << "[3] i=5, j=6" << endl;
		cout << "[4] ERROR" << endl;
		string answer1, answer2;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR FIRST CHOICE: ";
		cin >> answer1;
		cout << "\t\t\t\t\tENTER YOUR SECOND CHOICE: ";
		cin >> answer2;
		if (answer1 == "3" || answer2 == "3")
		{
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 5 points out of 5." << endl;
		}
		else
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;
		}
		cout << endl;
		system("pause");
		system("cls");
	}
	else if (answer == "C" || answer == "c")
	{
		hints_used++;
		system("cls");
		cout << "Now you have chance to answer incorrectly. You will take 5 points for this question." << endl;
		cout << "\t\t\t\t\tQ U E S T I O N  No. 10" << endl;
		cout << "What will i and j equal after the code below is executed?" << endl;
		cout << "int i = 5;" << endl;
		cout << "int j = i++;" << endl;
		cout << "[1] i=5, j=5 " << endl;
		cout << "[2] i=5, j=4" << endl;
		cout << "[3] i=5, j=6" << endl;
		cout << "[4] ERROR" << endl;
		string answer;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
		total_score += 5;
		correct_answer += 1;
		if (answer == "3")
			cout << "C O R R E C T   A N S W E R !!!" << endl;
		cout << "You got 5 points out of 5." << endl;
		cout << endl;
		system("pause");
		system("cls");

	}
	else if (answer == "D" || answer == "d") {
	hints_used++;
		system("cls");
		cout << "\t T H I S   I S  A  N E W   Q U E S T I O N. Y O U  W I L L  G E T  '5'  P O I N T S. " << endl;
		cout << endl;
		cout << "When did INHA UNivercity in TAshkent established?." << endl;
		cout << "[1] 2014" << endl;
		cout << "[2] 1968" << endl;
		cout << "[3] 2015" << endl;
		string answer;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
		if (answer == "1") {
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 5 points out of 5." << endl;

		}
		else if (answer == "2" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;

		}
		cout << endl;
		system("pause");
		system("cls");
	}
	else
	{
		system("cls");
		cout << "\t\t*************************************************************************************" << endl;
		cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
		cout << "\t\t*************************************************************************************" << endl;
		cout << endl;
		question10();
	}
}
//function for the view after game
void after_game() {
	system("cls");
	system("color 0A");
	cout << "\t\t*************************************************************************************" << endl;
	cout << "\t\t*****                                                                           *****" << endl;
	cout << "\t\t*****                       C O N G R A T U L A T I O N S ! ! !                 *****" << endl;
	cout << "\t\t*****                = = = = = = = = = = = = = = = = = = = = = = = =            *****" << endl;
	cout << "\t\t*****                            = = = = = = = = = = =                          *****" << endl;
	cout << "\t\t*****                                                                           *****" << endl;
	cout << "\t\t*****                                                                           *****" << endl;
	cout << "\t\t*****                                                                           *****" << endl;
	cout << "\t\t*************************************************************************************" << endl;
	cout << endl;
	cout << "\tTOTAL SCORE: " << total_score << endl;
	cout << "\tYOU HAVE ANSWERED FOR '" << correct_answer << "' QUESTIONS OUT OF 10." << endl;
	cout << "\tYOU HAVE USED "<<hints_used<<" HINTS DURING THE GAME."<<endl;
	system("pause");
}
//view for the scores
void scores_table();

int main() {
	int user_choice;
	user_choice = main_menu_view();
	if (user_choice) {
		question1();
		question2();
		question3();
		question4();
		question5();
		question6();
		question7();
		question8();
		question9();
		question10();
		after_game();
		scores_table();
		return 0;
	}
	else {
		return 0;
	}
	return 0;
}

void scores_table()
{
	system("cls");
	cout << "\t\tH I G H E S T   S C O R E S" << endl;
	cout << "*********************************************************************" << endl;
	cout << "***** 1 Rustam Zokirov  ***" << "              ***  " << "100" <<"  *****"<< endl;
	cout << "***** 2 Alimov 8        ***" << "              ***  " << "80" << "   *****" << endl;
	cout << "***** 3 " << Name[0] << "     ***" << "              ***  " << total_score << "    *****" << endl;
	cout << "***** 4 " << Name[1] << "                ***" << "              ***  " << total_score << "   *****" << endl;
	cout << "***** 5 " << Name[2] << "                ***" << "              ***  " << total_score << "   *****" << endl;
	 
	cout << endl; 
	cout << "Do you want to start a QUIZ again? (Yes/No)" << endl;
	string play_again;
	cin >> play_again;
	if (play_again == "Yes" || play_again == "yes")
	{
		total_score = 0;
		main();
	}
	else
		cout << "OK, Goodbye! ";
}