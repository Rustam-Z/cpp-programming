#pragma once

#include <iostream>  
#include <string>    
#include <conio.h>   

using namespace std;

// Global variables
string Password_Val, Change_Val; char Letter_Val; int Length_Val;

////////////////////////////////////////////////
void F_Password_Val() {
	Password_Val = "";
	Parol_Sign = "";
	cout << "\t\t\t\t\tPassword : ";
	for (int i = 0; i != 1;) {
		switch (_getch()) {
		case 49: {
			cout << "*"; Password_Val = Password_Val + "1";
		}
			   break;
		case 50: {
			cout << "*"; Password_Val = Password_Val + "2";
		}
			   break;
		case 51: {
			cout << "*"; Password_Val = Password_Val + "3";
		}
			   break;
		case 52: {
			cout << "*"; Password_Val = Password_Val + "4";
		}
			   break;
		case 53: {
			cout << "*"; Password_Val = Password_Val + "5";
		}
			   break;
		case 54: {
			cout << "*"; Password_Val = Password_Val + "6";
		}
			   break;
		case 55: {
			cout << "*"; Password_Val = Password_Val + "7";
		}
			   break;
		case 56: {
			cout << "*"; Password_Val = Password_Val + "8";
		}
			   break;
		case 57: {
			cout << "*"; Password_Val = Password_Val + "9";
		}
			   break;
		case 48: {
			cout << "*"; Password_Val = Password_Val + "0";
		}
			   break;
		case 81: {
			cout << "*"; Password_Val = Password_Val + "Q";
		}
			   break;
		case 87: {
			cout << "*"; Password_Val = Password_Val + "W";
		}
			   break;
		case 69: {
			cout << "*"; Password_Val = Password_Val + "E";
		}
			   break;
		case 82: {
			cout << "*"; Password_Val = Password_Val + "R";
		}
			   break;
		case 84: {
			cout << "*"; Password_Val = Password_Val + "T";
		}
			   break;
		case 89: {
			cout << "*"; Password_Val = Password_Val + "Y";
		}
			   break;
		case 85: {
			cout << "*"; Password_Val = Password_Val + "U";
		}
			   break;
		case 73: {
			cout << "*"; Password_Val = Password_Val + "I";
		}
			   break;
		case 79: {
			cout << "*"; Password_Val = Password_Val + "O";
		}
			   break;
		case 80: {
			cout << "*"; Password_Val = Password_Val + "P";
		}
			   break;
		case 65: {
			cout << "*"; Password_Val = Password_Val + "A";
		}
			   break;
		case 83: {
			cout << "*"; Password_Val = Password_Val + "S";
		}
			   break;
		case 68: {
			cout << "*"; Password_Val = Password_Val + "D";
		}
			   break;
		case 70: {
			cout << "*"; Password_Val = Password_Val + "F";
		}
			   break;
		case 71: {
			cout << "*"; Password_Val = Password_Val + "G";
		}
			   break;
		case 72: {
			cout << "*"; Password_Val = Password_Val + "H";
		}
			   break;
		case 74: {
			cout << "*"; Password_Val = Password_Val + "J";
		}
			   break;
		case 75: {
			cout << "*"; Password_Val = Password_Val + "K";
		}
			   break;
		case 76: {
			cout << "*"; Password_Val = Password_Val + "L";
		}
			   break;
		case 90: {
			cout << "*"; Password_Val = Password_Val + "Z";
		}
			   break;
		case 88: {
			cout << "*"; Password_Val = Password_Val + "X";
		}
			   break;
		case 67: {
			cout << "*"; Password_Val = Password_Val + "C";
		}
			   break;
		case 86: {
			cout << "*"; Password_Val = Password_Val + "V";
		}
			   break;
		case 66: {
			cout << "*"; Password_Val = Password_Val + "B";
		}
			   break;
		case 78: {
			cout << "*"; Password_Val = Password_Val + "N";
		}
			   break;
		case 77: {
			cout << "*"; Password_Val = Password_Val + "M";
		}
			   break;
		case 97: {
			cout << "*"; Password_Val = Password_Val + "a";
		}
			   break;
		case 98: {
			cout << "*"; Password_Val = Password_Val + "b";
		}
			   break;
		case 99: {
			cout << "*"; Password_Val = Password_Val + "c";
		}
			   break;
		case 100: {
			cout << "*"; Password_Val = Password_Val + "d";
		}
				break;
		case 101: {
			cout << "*"; Password_Val = Password_Val + "e";
		}
				break;
		case 102: {
			cout << "*"; Password_Val = Password_Val + "f";
		}
				break;
		case 103: {
			cout << "*"; Password_Val = Password_Val + "g";
		}
				break;
		case 104: {
			cout << "*"; Password_Val = Password_Val + "h";
		}
				break;
		case 105: {
			cout << "*"; Password_Val = Password_Val + "i";
		}
				break;
		case 106: {
			cout << "*"; Password_Val = Password_Val + "j";
		}
				break;
		case 107: {
			cout << "*"; Password_Val = Password_Val + "k";
		}
				break;
		case 108: {
			cout << "*"; Password_Val = Password_Val + "l";
		}
				break;
		case 109: {
			cout << "*"; Password_Val = Password_Val + "m";
		}
				break;
		case 110: {
			cout << "*"; Password_Val = Password_Val + "n";
		}
				break;
		case 111: {
			cout << "*"; Password_Val = Password_Val + "o";
		}
				break;
		case 112: {
			cout << "*"; Password_Val = Password_Val + "p";
		}
				break;
		case 113: {
			cout << "*"; Password_Val = Password_Val + "q";
		}
				break;
		case 114: {
			cout << "*"; Password_Val = Password_Val + "r";
		}
				break;
		case 115: {
			cout << "*"; Password_Val = Password_Val + "s";
		}
				break;
		case 116: {
			cout << "*"; Password_Val = Password_Val + "t";
		}
				break;
		case 117: {
			cout << "*"; Password_Val = Password_Val + "u";
		}
				break;
		case 118: {
			cout << "*"; Password_Val = Password_Val + "v";
		}
				break;
		case 119: {
			cout << "*"; Password_Val = Password_Val + "w";
		}
				break;
		case 120: {
			cout << "*"; Password_Val = Password_Val + "x";
		}
				break;
		case 121: {
			cout << "*"; Password_Val = Password_Val + "y";
		}
				break;
		case 122: {
			cout << "*"; Password_Val = Password_Val + "z";
		}
				break;
		case 123: {
			cout << "*"; Password_Val = Password_Val + "{";
		}
				break;
		case 124: {
			cout << "*"; Password_Val = Password_Val + "|";
		}
				break;
		case 125: {
			cout << "*"; Password_Val = Password_Val + "}";
		}
				break;
		case 33: {
			cout << "*"; Password_Val = Password_Val + "!";
		}
			   break;
		case 36: {
			cout << "*"; Password_Val = Password_Val + "$";
		}
			   break;
		case 37: {
			cout << "*"; Password_Val = Password_Val + "%";
		}
			   break;
		case 38: {
			cout << "*"; Password_Val = Password_Val + "&";
		}
			   break;
		case 39: {
			cout << "*"; Password_Val = Password_Val + "'";
		}
			   break;
		case 40: {
			cout << "*"; Password_Val = Password_Val + "(";
		}
			   break;
		case 41: {
			cout << "*"; Password_Val = Password_Val + ")";
		}
			   break;
		case 42: {
			cout << "*"; Password_Val = Password_Val + "*";
		}
			   break;
		case 43: {
			cout << "*"; Password_Val = Password_Val + "+";
		}
			   break;
		case 44: {
			cout << "*"; Password_Val = Password_Val + ",";
		}
			   break;
		case 45: {
			cout << "*"; Password_Val = Password_Val + "-";
		}
			   break;
		case 46: {
			cout << "*"; Password_Val = Password_Val + ".";
		}
			   break;
		case 47: {
			cout << "*"; Password_Val = Password_Val + "/";
		}
			   break;
		case 58: {
			cout << "*"; Password_Val = Password_Val + ":";
		}
			   break;
		case 59: {
			cout << "*"; Password_Val = Password_Val + ";";
		}
			   break;
		case 60: {
			cout << "*"; Password_Val = Password_Val + "<";
		}
			   break;
		case 61: {
			cout << "*"; Password_Val = Password_Val + "=";
		}
			   break;
		case 62: {
			cout << "*"; Password_Val = Password_Val + ">";
		}
			   break;
		case 63: {
			cout << "*"; Password_Val = Password_Val + "?";
		}
			   break;
		case 95: {
			cout << "*"; Password_Val = Password_Val + "_";
		}
			   break;


		case 8: { // Deleting character
			system("cls");
			cout << "____________________________________________________________________________________________________ \n";
			cout << "        A L I B A Z A R                                                              \n";
			cout << "____________________________________________________________________________________________________\n\n";
			cout << "\t\t\t\t          Authentication\n\n";
			cout << "\t\t\t\t\tLogin    : "; cout << Login_Sign << endl;
			cout << "\t\t\t\t\tPassword : ";
			Length_Val = Password_Val.length();
			Length_Val--;
			for (int j = 0; j < Length_Val; j++) {
				Letter_Val = Password_Val[j];
				Change_Val = Change_Val + Letter_Val;
				cout << "*";
			}
			Password_Val = Change_Val;
			Change_Val = "";
		}
			  break;
		case 13: { // Entering Password_Val 
			i = 1;
			Change_Val = "";
		}
			   break;
		}

	}
}

