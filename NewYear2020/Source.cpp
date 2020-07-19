#include <iostream>
#include <iomanip>
#include <windows.h>
#include <conio.h>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using std::setw;
using namespace std;
///////////////////////////////////////////

///////////////////////////////////////////
void SetColor(int value) 
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), value);
}

void background()
{
	SetColor(13);
	cout << endl;
	cout << "\t\t\t\t					   																		      	 " << endl;
	cout << "\t\t\t\t                                                   .\'\'.										         " << endl;
	cout << "\t\t\t\t                                                  :_\\/_:    .										 " << endl;
	cout << "\t\t\t\t                |        *                   .''. : /\\ :		* * *							 	    " << endl;
	cout << "\t\t\t\t                | *    *                     :_\\/_:'.:::.    \*\'\'*   * \'.\'/.\'		    	       "  << endl;
	cout << "\t\t\t\t                =	*         .--             : /\\ : :::::  '*_\\\/_*   -= o =- \    '  *				 " << endl;
	cout << "\t\t\t\t               === *       / _ '             '..'  ':::'   * \/\\ *   .\'/.\\\'.           	         " << endl;
	cout << "\t\t\t\t          *     |	*       | _ |     *             .__      *..*           .....  .---\"|		         " << endl;
	cout << "\t\t\t\t       *        |	 _      | _ |	          _*   .-'||'-.       .--\'|  ||__ | _|    |    		      " << endl;
	cout << "\t\t\t\t         *      |  .-'|    | _ |      .-\'|  _.|  ||    || -|  -__  |   |  | __ ||      |		       	 " << endl;
	cout << "\t\t\t\t      .-----.   |  |  |    |   |	 |' | |.    ||    || -|  |  | |   |  |    ||      |	                 " << endl;
	cout << "\t\t\t\t   __'       ' /\ '\\ |  \'-../   |...___|  '-'           \"\"  |__|   \'-\'   \'-.\'    '\`     |__    " << endl;
	cout << "\t\t\t\t     ' . . . ' []  \\   \_/ \_/  ..........----|*..''|/?/>/ \''\''\/''/''/ !!!<<<<>>>>>>...........    " << endl;
	SetColor(8);
	cout << "\t\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl;
	
}

void numbers()
{
	int time = 10;
	Sleep(1000);
	while (time >= 0)
	{
		Sleep(1000);
		time--;
		cout << endl;
		switch (time)
		{
		case 9:
		{
			system("cls");
			cout << endl;
			SetColor(9);
			cout << "\t\t\t\t\t\t\t\t\t      999999999      " << endl;
			SetColor(10);
			cout << "\t\t\t\t\t\t\t\t\t    99:::::::::99    " << endl;
			SetColor(11);
			cout << "\t\t\t\t\t\t\t\t\t  99:::::::::::::99  " << endl;
			SetColor(12);
			cout << "\t\t\t\t\t\t\t\t\t 9::::::99999::::::9 " << endl;
			SetColor(13);
			cout << "\t\t\t\t\t\t\t\t\t 9:::::9     9:::::9 " << endl;
			SetColor(14);
			cout << "\t\t\t\t\t\t\t\t\t 9:::::9     9:::::9 " << endl;
			SetColor(15);
			cout << "\t\t\t\t\t\t\t\t\t  9:::::99999::::::9 " << endl;
			SetColor(9);
			cout << "\t\t\t\t\t\t\t\t\t   99::::::::::::::9 " << endl;
			SetColor(10);
			cout << "\t\t\t\t\t\t\t\t\t     99999::::::::9  " << endl;
			SetColor(11);
			cout << "\t\t\t\t\t\t\t\t\t          9::::::9   " << endl;
			SetColor(12);
			cout << "\t\t\t\t\t\t\t\t\t         9::::::9    " << endl;
			SetColor(13);
			cout << "\t\t\t\t\t\t\t\t\t        9::::::9     " << endl;
			SetColor(14);
			cout << "\t\t\t\t\t\t\t\t\t       9::::::9      " << endl;
			SetColor(15);
			cout << "\t\t\t\t\t\t\t\t\t      9::::::9       " << endl;
			SetColor(9);
			cout << "\t\t\t\t\t\t\t\t\t     9999999         " << endl;
			background();
		}
		break;
		case 8:
		{
			system("cls");
			cout << endl;
			SetColor(9);
			cout << "\t\t\t\t\t\t\t\t\t      888888888      " << endl;
			SetColor(10);
			cout << "\t\t\t\t\t\t\t\t\t    88:::::::::88    " << endl;
			SetColor(14);
			cout << "\t\t\t\t\t\t\t\t\t  88:::::::::::::88  " << endl;
			SetColor(15);
			cout << "\t\t\t\t\t\t\t\t\t 8::::::88888::::::8 " << endl;
			SetColor(12);
			cout << "\t\t\t\t\t\t\t\t\t 8:::::8     8:::::8 " << endl;
			SetColor(13);
			cout << "\t\t\t\t\t\t\t\t\t 8:::::8     8:::::8 " << endl;
			SetColor(11);
			cout << "\t\t\t\t\t\t\t\t\t  8:::::88888:::::8  " << endl;
			SetColor(10);
			cout << "\t\t\t\t\t\t\t\t\t   8:::::::::::::8   " << endl;
			SetColor(14);
			cout << "\t\t\t\t\t\t\t\t\t  8:::::88888:::::8  " << endl;
			SetColor(9);
			cout << "\t\t\t\t\t\t\t\t\t 8:::::8     8:::::8 " << endl;
			SetColor(11);
			cout << "\t\t\t\t\t\t\t\t\t 8:::::8     8:::::8 " << endl;
			SetColor(12);
			cout << "\t\t\t\t\t\t\t\t\t 8::::::88888::::::8 " << endl;
			SetColor(13);
			cout << "\t\t\t\t\t\t\t\t\t  88:::::::::::::88  " << endl;
			SetColor(14);
			cout << "\t\t\t\t\t\t\t\t\t    88:::::::::88    " << endl;
			SetColor(15);
			cout << "\t\t\t\t\t\t\t\t\t      888888888      " << endl;
			background();
		}
		break;
		case 7:
		{
			system("cls");
			cout << endl;
			SetColor(11);
			cout << "\t\t\t\t\t\t\t\t\t 77777777777777777777" << endl;
			SetColor(9);
			cout << "\t\t\t\t\t\t\t\t\t 7::::::::::::::::::7" << endl;
			SetColor(9);
			cout << "\t\t\t\t\t\t\t\t\t 7::::::::::::::::::7" << endl;
			SetColor(11);
			cout << "\t\t\t\t\t\t\t\t\t 777777777777:::::::7" << endl;
			SetColor(11);
			cout << "\t\t\t\t\t\t\t\t\t            7::::::7 " << endl;
			SetColor(10);
			cout << "\t\t\t\t\t\t\t\t\t           7::::::7  " << endl;
			SetColor(9);
			cout << "\t\t\t\t\t\t\t\t\t          7::::::7   " << endl;
			SetColor(15);
			cout << "\t\t\t\t\t\t\t\t\t         7::::::7    " << endl;
			SetColor(14);
			cout << "\t\t\t\t\t\t\t\t\t        7::::::7     " << endl;
			SetColor(13);
			cout << "\t\t\t\t\t\t\t\t\t       7::::::7      " << endl;
			SetColor(12);
			cout << "\t\t\t\t\t\t\t\t\t      7::::::7       " << endl;
			SetColor(11);
			cout << "\t\t\t\t\t\t\t\t\t     7::::::7        " << endl;
			SetColor(10);
			cout << "\t\t\t\t\t\t\t\t\t    7::::::7         " << endl;
			SetColor(9);
			cout << "\t\t\t\t\t\t\t\t\t   7::::::7          " << endl;
			SetColor(14);
			cout << "\t\t\t\t\t\t\t\t\t  77777777           " << endl;
			background();
		}
		break;
		case 6:
		{
			system("cls");
			cout << endl ;
			SetColor(14);
			cout << "\t\t\t\t\t\t\t\t\t          66666666          " << endl;
			SetColor(14);
			cout << "\t\t\t\t\t\t\t\t\t         6::::::6           " << endl;
			SetColor(14);
			cout << "\t\t\t\t\t\t\t\t\t        6::::::6            " << endl;
			SetColor(14);
			cout << "\t\t\t\t\t\t\t\t\t       6::::::6             " << endl;
			SetColor(12);
			cout << "\t\t\t\t\t\t\t\t\t      6::::::6              " << endl;
			SetColor(12);
			cout << "\t\t\t\t\t\t\t\t\t     6:::::::6              " << endl;
			SetColor(12);
			cout << "\t\t\t\t\t\t\t\t\t    6:::::::66666           " << endl;
			SetColor(12);
			cout << "\t\t\t\t\t\t\t\t\t   6:::::::::::::66         " << endl;
			SetColor(9);
			cout << "\t\t\t\t\t\t\t\t\t  6:::::99999::::::6        " << endl;
			SetColor(9);
			cout << "\t\t\t\t\t\t\t\t\t 6:::::9     9::::::6       " << endl;
			SetColor(9);
			cout << "\t\t\t\t\t\t\t\t\t 6:::::9     9::::::6       " << endl;
			SetColor(10);
			cout << "\t\t\t\t\t\t\t\t\t 6::::::99999::::::6        " << endl;
			SetColor(10);
			cout << "\t\t\t\t\t\t\t\t\t  66:::::::::::::66         " << endl;
			SetColor(10);
			cout << "\t\t\t\t\t\t\t\t\t    66::::::::::66          " << endl;
			SetColor(13);
			cout << "\t\t\t\t\t\t\t\t\t      6666666666            " << endl;
			background();
		}
		break;
		case 5:
		{
			system("cls");
			cout << endl;
			SetColor(9);
			cout << "\t\t\t\t\t\t\t\t\t 555555555555555555  " << endl;
			SetColor(10);
			cout << "\t\t\t\t\t\t\t\t\t 5::::::::::::::::5  " << endl;
			SetColor(11);
			cout << "\t\t\t\t\t\t\t\t\t 5:::::555555555555  " << endl;
			SetColor(12);
			cout << "\t\t\t\t\t\t\t\t\t 5:::::5             " << endl;
			SetColor(13);
			cout << "\t\t\t\t\t\t\t\t\t 5:::::5             " << endl;
			SetColor(14);
			cout << "\t\t\t\t\t\t\t\t\t 5:::::5555555555    " << endl;
			SetColor(15);
			cout << "\t\t\t\t\t\t\t\t\t 5:::::::::::::::5   " << endl;
			SetColor(9);
			cout << "\t\t\t\t\t\t\t\t\t 55555555555::::::5  " << endl;
			SetColor(10);
			cout << "\t\t\t\t\t\t\t\t\t             5:::::5 " << endl;
			SetColor(11);
			cout << "\t\t\t\t\t\t\t\t\t             5:::::5 " << endl;
			SetColor(12);
			cout << "\t\t\t\t\t\t\t\t\t 555555      5:::::5 " << endl;
			SetColor(13);
			cout << "\t\t\t\t\t\t\t\t\t 55:::::55555::::::5 " << endl;
			SetColor(14);
			cout << "\t\t\t\t\t\t\t\t\t  55:::::::::::::55  " << endl;
			SetColor(15);
			cout << "\t\t\t\t\t\t\t\t\t   55:::::::::::55   " << endl;
			SetColor(13);
			cout << "\t\t\t\t\t\t\t\t\t    555555555555     " << endl;
			background();
		}
		break;
		case 4:
		{
			system("cls");
			cout << endl;
			SetColor(13);
			cout << "\t\t\t\t\t\t\t\t\t        444444444    " << endl;
			SetColor(14);
			cout << "\t\t\t\t\t\t\t\t\t       4::::::::4    " << endl;
			SetColor(15);
			cout << "\t\t\t\t\t\t\t\t\t      4:::::::::4    " << endl;
			SetColor(13);
			cout << "\t\t\t\t\t\t\t\t\t     4::::44::::4    " << endl;
			SetColor(12);
			cout << "\t\t\t\t\t\t\t\t\t    4::::4 4::::4    " << endl;
			SetColor(11);
			cout << "\t\t\t\t\t\t\t\t\t   4::::4  4::::4    " << endl;
			SetColor(10);
			cout << "\t\t\t\t\t\t\t\t\t  4::::4   4::::4    " << endl;
			SetColor(9);
			cout << "\t\t\t\t\t\t\t\t\t 4::::444444::::4444 " << endl;
			SetColor(10);
			cout << "\t\t\t\t\t\t\t\t\t 4::::::::::::::::44 " << endl;
			SetColor(15);
			cout << "\t\t\t\t\t\t\t\t\t 4444444444:::::4444 " << endl;
			SetColor(14);
			cout << "\t\t\t\t\t\t\t\t\t           4::::4    " << endl;
			SetColor(13);
			cout << "\t\t\t\t\t\t\t\t\t           4::::4    " << endl;
			SetColor(12);
			cout << "\t\t\t\t\t\t\t\t\t         44::::::44  " << endl;
			SetColor(11);
			cout << "\t\t\t\t\t\t\t\t\t         4::::::::4  " << endl;
			SetColor(9);
			cout << "\t\t\t\t\t\t\t\t\t         4444444444  " << endl;
			background();
		}
		break;
		case 3:
		{
			system("cls");
			cout << endl;
			SetColor(9);
			cout << "\t\t\t\t\t\t\t\t\t 3333333333333333    " << endl;
			SetColor(10);
			cout << "\t\t\t\t\t\t\t\t\t 3:::::::::::::::33  " << endl;
			SetColor(11);
			cout << "\t\t\t\t\t\t\t\t\t 3::::::33333::::::3 " << endl;
			SetColor(12);
			cout << "\t\t\t\t\t\t\t\t\t 3333333     3:::::3 " << endl;
			SetColor(14);
			cout << "\t\t\t\t\t\t\t\t\t             3:::::3 " << endl;
			SetColor(14);
			cout << "\t\t\t\t\t\t\t\t\t             3:::::3 " << endl;
			SetColor(15);
			cout << "\t\t\t\t\t\t\t\t\t     33333333:::::3  " << endl;
			SetColor(14);
			cout << "\t\t\t\t\t\t\t\t\t     3:::::::::::3   " << endl;
			SetColor(13);
			cout << "\t\t\t\t\t\t\t\t\t     33333333:::::3  " << endl;
			SetColor(11);
			cout << "\t\t\t\t\t\t\t\t\t            3:::::33 " << endl;
			SetColor(11);
			cout << "\t\t\t\t\t\t\t\t\t            3:::::33 " << endl;
			SetColor(10);
			cout << "\t\t\t\t\t\t\t\t\t 3333333    3::::::3 " << endl;
			SetColor(13);
			cout << "\t\t\t\t\t\t\t\t\t 3::::::33333:::::33 " << endl;
			SetColor(11);
			cout << "\t\t\t\t\t\t\t\t\t 3:::::::::::::::33  " << endl;
			SetColor(10);
			cout << "\t\t\t\t\t\t\t\t\t 3333333333333333    " << endl;
			background();

		}
		break;
		case 2:
		{
			system("cls");
			cout << endl;
			SetColor(9);
			cout << "\t\t\t\t\t\t\t\t\t 222222222222222      " << endl;
			SetColor(9);
			cout << "\t\t\t\t\t\t\t\t\t 2:::::::::::::::22   " << endl;
			SetColor(9);
			cout << "\t\t\t\t\t\t\t\t\t 2::::::222222:::::22 " << endl;
			SetColor(12);
			cout << "\t\t\t\t\t\t\t\t\t 2222222     2:::::22 " << endl;
			SetColor(13);
			cout << "\t\t\t\t\t\t\t\t\t             2:::::22 " << endl;
			SetColor(12);
			cout << "\t\t\t\t\t\t\t\t\t             2:::::22 " << endl;
			SetColor(12);
			cout << "\t\t\t\t\t\t\t\t\t         2222::::22   " << endl;
			SetColor(11);
			cout << "\t\t\t\t\t\t\t\t\t     22222::::::22    " << endl;
			SetColor(11);
			cout << "\t\t\t\t\t\t\t\t\t   22::::::::222      " << endl;
			SetColor(14);
			cout << "\t\t\t\t\t\t\t\t\t  2:::::22222         " << endl;
			SetColor(14);
			cout << "\t\t\t\t\t\t\t\t\t 2:::::2              " << endl;
			SetColor(9);
			cout << "\t\t\t\t\t\t\t\t\t 2:::::2       222222 " << endl;
			SetColor(9);
			cout << "\t\t\t\t\t\t\t\t\t 2::::::2222222:::::2 " << endl;
			SetColor(15);
			cout << "\t\t\t\t\t\t\t\t\t 2::::::::::::::::::2 " << endl;
			SetColor(15);
			cout << "\t\t\t\t\t\t\t\t\t 22222222222222222222 " << endl;
			background();
		}
		break;
		case 1:
		{
			system("cls");
			cout << endl;
			SetColor(9);
			cout << "\t\t\t\t\t\t\t\t\t       1111111       " << endl;
			SetColor(9);
			cout << "\t\t\t\t\t\t\t\t\t      1::::::1       " << endl;
			SetColor(9);
			cout << "\t\t\t\t\t\t\t\t\t     1:::::::1       " << endl;
			SetColor(12);
			cout << "\t\t\t\t\t\t\t\t\t    1111:::::1       " << endl;
			SetColor(14);
			cout << "\t\t\t\t\t\t\t\t\t        1::::1       " << endl;
			SetColor(14);
			cout << "\t\t\t\t\t\t\t\t\t        1::::1       " << endl;
			SetColor(14);
			cout << "\t\t\t\t\t\t\t\t\t        1::::1       " << endl;
			SetColor(11);
			cout << "\t\t\t\t\t\t\t\t\t        1::::1       " << endl;
			SetColor(11);
			cout << "\t\t\t\t\t\t\t\t\t        1::::1       " << endl;
			SetColor(11);
			cout << "\t\t\t\t\t\t\t\t\t        1::::1       " << endl;
			SetColor(15);
			cout << "\t\t\t\t\t\t\t\t\t        1::::1       " << endl;
			SetColor(15);
			cout << "\t\t\t\t\t\t\t\t\t     111::::::111    " << endl;
			SetColor(14);
			cout << "\t\t\t\t\t\t\t\t\t     1::::::::::1    " << endl;
			SetColor(12);
			cout << "\t\t\t\t\t\t\t\t\t     1::::::::::1    " << endl;
			SetColor(14);
			cout << "\t\t\t\t\t\t\t\t\t     111111111111    " << endl;
			background();
		}
		break;
		case 0:
		{
			system("cls");
			cout << endl ;
			SetColor(9);
			cout << "\t\t\t\t\t\t\t\t\t       000000000        " << endl;
			SetColor(10);
			cout << "\t\t\t\t\t\t\t\t\t     00:::::::::00      " << endl;
			SetColor(11);
			cout << "\t\t\t\t\t\t\t\t\t   00:::::::::::::00    " << endl;
			SetColor(12);
			cout << "\t\t\t\t\t\t\t\t\t  0:::::::000:::::::0   " << endl;
			SetColor(13);
			cout << "\t\t\t\t\t\t\t\t\t 0:::::::0   0:::::::0   " << endl;
			SetColor(14);
			cout << "\t\t\t\t\t\t\t\t\t 0::::::0     0::::::0  " << endl;
			SetColor(15);
			cout << "\t\t\t\t\t\t\t\t\t 0::::::0     0::::::0  " << endl;
			SetColor(11);
			cout << "\t\t\t\t\t\t\t\t\t 0::::::0 000 0::::::0  " << endl;
			SetColor(9);
			cout << "\t\t\t\t\t\t\t\t\t 0::::::0     0::::::0  " << endl;
			SetColor(14);
			cout << "\t\t\t\t\t\t\t\t\t 0::::::0     0::::::0  " << endl;
			SetColor(12);
			cout << "\t\t\t\t\t\t\t\t\t 0:::::::0   0:::::::0  " << endl;
			SetColor(11);
			cout << "\t\t\t\t\t\t\t\t\t  0:::::::000:::::::0   " << endl;
			SetColor(13);
			cout << "\t\t\t\t\t\t\t\t\t   0::::::::::::::00    " << endl;
			SetColor(14);
			cout << "\t\t\t\t\t\t\t\t\t    0:::::::::::00      " << endl;
			SetColor(11);
			cout << "\t\t\t\t\t\t\t\t\t      0000000000        " << endl;
			background();
		}
		break;
		default:
			break;
		}
	}
	system("cls");

}

void pushX(int num) {
	for (int i = 0;i < num;i++)
		cout << "  ";
}

void text_2020()
{
		cout << endl;
		cout << endl;
		SetColor(8);
		cout << "\t\t\t\t\t\t 222222222222       0000000000      222222222222       0000000000       " << endl;
		SetColor(12);
		cout << "\t\t\t\t\t\t 2::::222:::22     00:::::::::00    2::::222:::22     00:::::::::00    " << endl;
		SetColor(14);
		cout << "\t\t\t\t\t\t 2222     2::22   00:::::::::::00   2222     2::22   00:::::::::::00   " << endl;
		SetColor(13);
		cout << "\t\t\t\t\t\t          2::22   0:::0     0:::0            2::22   0:::0     0:::0   " << endl;
		SetColor(10);
		cout << "\t\t\t\t\t\t          2::22   0:::0     0:::0            2::22   0:::0     0:::0   " << endl;
		SetColor(12);
		cout << "\t\t\t\t\t\t    222:::::22    0:::0     0:::0      222:::::22    0:::0     0:::0   " << endl;
		SetColor(14);
		cout << "\t\t\t\t\t\t  22::::22        0:::0     0:::0    22::::22        0:::0     0:::0   " << endl;
		SetColor(9);
		cout << "\t\t\t\t\t\t 2::::2    2222   00:::::::::::00   2::::2    2222   00:::::::::::00   " << endl;
		SetColor(12);
		cout << "\t\t\t\t\t\t 2::::2222::::2    00:::::::::00    2::::2222::::2    00:::::::::00    " << endl;
		SetColor(8);
		cout << "\t\t\t\t\t\t 22222222222222     00000000000     22222222222222     00000000000      " << endl;
	
}

void work_pushX()
{
	int j = 0;
	for (j = 0;j < 50;j++) {
		system("cls");
		cout << endl;
		cout << endl;
		pushX(j);
		SetColor(15);
		cout << ".:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:" << endl;
		pushX(j);
		SetColor(14);
		cout << "            __,  ,__)            __,  ,__)      __, ,__)             " << endl;
		pushX(j);
		cout << "           (--|__| _ ,_ ,_      (--|\ | _       (--\ | _  _ ,_        " << endl;
		pushX(j);
		cout << "             _|  |(_||_)|_)(_|    _| \|(/_(_|_)     \|(/_(_||         " << endl;
		pushX(j);
		cout << "            (        |  |  ,_|   (              (__|                  " << endl;
		pushX(j);
		SetColor(15);
		cout << ".:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:" << endl;
		text_2020();
		cout << endl;
		SetColor(11);
		cout << "\t\t\t\t\t\t               .     .  .      +     .      .          .    " << endl;
		cout << "\t\t\t\t\t\t         .        .      .     #       .           .         " << endl;
		cout << "\t\t\t\t\t\t            .       .         ###            .      .      ." << endl;
		cout << "\t\t\t\t\t\t        .       .    #:. . : ##'##:. .:#  .      .        " << endl;
		cout << "\t\t\t\t\t\t               .      . *####*###*####*  .*      .     .   "<< endl;
		cout << "\t\t\t\t\t\t                *#:.    . : #*###*# : .    . : #*  .       ." << endl;
		cout << "\t\t\t\t\t\t       .              *#########*#########*        .        ." << endl;
		cout << "\t\t\t\t\t\t            .     *#:.  *####*###*####* . : #*   .       ." << endl;
		cout << "\t\t\t\t\t\t         .      .  '#######''##'##''#######'               " << endl;
		cout << "\t\t\t\t\t\t                     .'##'#####'#####'##'           .      ." << endl;
		cout << "\t\t\t\t\t\t        .    '#:. ...  . : ##'###'###'##:. ... .:#'     ." << endl;
		cout << "\t\t\t\t\t\t          .      '#######'##'#####'##'#######'      .     ." << endl;
		cout << "\t\t\t\t\t\t        .    .      '#####''#######''#####'    .      ." << endl;
		cout << "\t\t\t\t\t\t                 .     '      000      '    .     .        ." << endl;
		cout << "\t\t\t\t\t\t           .          .   .   000     .        .       ." << endl;
		cout << "\t\t\t\t\t\t      ............ ..........O000O.......... ..............." << endl;
		Sleep(100);	
	}
}

void congrats()
{
	system("cls");
	
		SetColor(12);
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "\t  .:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:" << endl;
		SetColor(14);
		cout << "\t              __,  ,__)            __,  ,__)      __, ,__)                         __,  ,__)            __,  ,__)      __, ,__)             " << endl;
		cout << "\t             (--|__| _ ,_ ,_      (--|\ | _       (--\ | _  _ ,_                   (--|__| _ ,_ ,_      (--|\ | _       (--\ | _  _ ,_        " << endl;
		cout << "\t               _|  |(_||_)|_)(_|    _| \|(/_(_|_)     \|(/_(_||                      _|  |(_||_)|_)(_|    _| \|(/_(_|_)     \|(/_(_||         " << endl;
		cout << "\t              (        |  |  ,_|   (              (__|                            (        |  |  ,_|   (              (__|                  " << endl;
		SetColor(12);
		cout << "\t  .:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:" << endl;
		cout << endl;
		cout << endl;
	
		SetColor(15);
		cout << endl;
		cout << endl;
		cout << endl;
	string hello = "\t\t\t\t\tDEAR FRIENDS AND SUPER FAMILY OF INHA UNIVERSITY. HAPPY NEW YEAR!!! \n\n\n\t\t   I WISH YOUR 2020 TO BE THE BEST AND PRODUCTIVE YEAR IN YOUR LIFE!!! \n\n\t\t   THANKS TO EVERYBODY WHOM I MET IN 2019. YOU TAUGHT ME TO BE SMARTER , WISER, AND MOST IMPORTANTLY TO UNDERSTAND BETTER IN PEOPLE.\n\n\t\t   WRITE DOWN YOUR GOALS, DO SOMETHING YOU BELIEVE IN, READ MORE BOOKS, AVOID TIME WASTERS, LOOK FOR MEANINGFUL PEOPLE AND RELATIONSHIPS.\n\n\t\t   AND I GUARANTEE YOUR 2020 WILL BE UNFORGETTABLE AND MEANINGFUL!\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tRUSTAM_Z\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	int x = 0;
	while (hello[x] != '\0')
	{
		cout << hello[x];
		Sleep(100);
		x++;
	};
	
}

int main()
{
	system("pause");
	numbers();
	system("cls");
	
	work_pushX();
		
	congrats();
	system("pause");
	return 0;
}
