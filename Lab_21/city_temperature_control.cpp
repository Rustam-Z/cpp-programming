// Rustam Zokirov - (U1910049) - Section 004;
// Second Program - Final Assignment;
// BINARY FILES ARE USED

#include <iostream>
#include <string>
#include <fstream>
#include <conio.h> // for _getch()
#include <iomanip> // for listing in rows and columns

using namespace std;

int main();
void CityTemperatureInfo(); // for temperature case 1
void CityRainFallInfo(); // for temperature case 2
void CityHumidityInfo(); // for temperature case 3

class City {
protected:
	int cityID; 
	string cityName;
	double cityClimateDate[12];

public:
	// inputing the data for ID and name
	void input() {
		cout << "Enter ID of the city: ";
		cin >> cityID;
		cout << "Enter Name of the city: ";
		cin >> cityName;
	}

	int getCityID() { 
		return cityID;
	}

	void setCityID(int cityID) { 
		this->cityID = cityID;
	}

	string getCityName() { 
		return cityName;
	}

	void setCityName(string cityName) {
		this->cityName = cityName;
	}

	// diplaying with the binary files
	void GetData() {
		cout << "ID        NAME         J   F   M   A   M   I   I   A   S   O   N   D\n";
		cout << left << setw(10) << cityID << setw(10) << cityName << "   ";
	}

	virtual void setClimateData() = 0; // virtual functions
	virtual void getClimateData() = 0;

};

class CityTemperature : public City
{
protected:
	double average = 0;

public:

	void setClimateData() {
		average = 0;
		City::input();

		cout << "Enter Temperature Degree:  " << endl;

		for (int i = 0; i < 12; i++) {
			cout  << i+1 << " Month: ";

			cin >> cityClimateDate[i];
			 // validation check
			if (cityClimateDate[i] > -60 && cityClimateDate[i] < 60) {
				average = average + cityClimateDate[i];
			}
			else { 
				cout << "Please check your input! " << endl;
				i--; // checking and returning
			}
		} // for ends

	}

	// for displaying from file
	void getClimateData() {

		City::GetData();

		int array = 0;
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 3; j++) {
				cout << cityClimateDate[array] << "   ";
				array++;
			}
		}
		// claculating the average temperature
		cout << "\nAverage Temperature: " << average / 12.0 << endl << endl; 
		array = 0;
	}
};

// class for rainfall
class CityRainFall : public City
{
protected:
	double average = 0; // average for calculating

public:

	void setClimateData() {
		average = 0;
		City::input();

		cout << "Enter Rainfall Degree:  " << endl;

		for (int i = 0; i < 12; i++) {
			cout << i+1 << " Month: ";

			cin >> cityClimateDate[i];

			if (cityClimateDate[i] > 0 && cityClimateDate[i] < 300) {
				average = average + cityClimateDate[i];
			}
			else {
				cout << "Please check your input! " << endl;
				i--; // checking and returning
			}
		} // for ends

	}

	void getClimateData() {

		City::GetData();

		int array = 0;
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 3; j++) {
				cout << cityClimateDate[array] << "   ";
				array++;
			}
			;
		}
		cout << "\nAverage Rainfall: " << average / 12.0 << endl << endl;
		array = 0;
	}
};

// class for humodity
class CityHumidity : public City
{
protected:
	double average = 0;

public:

	void setClimateData() {
		average = 0;
		City::input();

		cout << "Enter Humidity Degree:  " << endl;

		for (int i = 0; i < 12; i++) {
			cout << i+1 << " Month: ";

			cin >> cityClimateDate[i];

			if (cityClimateDate[i] > 0 && cityClimateDate[i] < 500) {
				average = average + cityClimateDate[i];
			}
			else {
				cout << "Please check your input! " << endl;
				i--; // checking and returning
			}
		} // for ends

	}

	void getClimateData() {

		City::GetData();

		int array = 0;
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 3; j++) {
				cout << cityClimateDate[array] << "   ";
				array++;
			}
			
		}
		cout << "\nAverage Humidity: " << average / 12.0 << endl << endl;
		array = 0;
	}
};

void CityTemperatureInfo() {

	CityTemperature Temperature; // creating an object

	for (int i = 0; i < 1000; i++) {
		system("cls");

		cout << "City Temperature Information: \n";
		cout << "1. Add\n";
		cout << "2. Update\n";
		cout << "3. Delete\n";
		cout << "0. Go Back\n";

		cout << "Your choice: \n";

		switch (_getch())
		{
		case '1': {
			system("cls");
			cout << "ADD DATA TO CITY\n";
			cout << "Enter temperature data of city: " << endl;
			// Add to List
			ofstream outTemperature("Temperature", ios::binary | ios::app); // opening a binary file
			Temperature.setClimateData();
			// writing data to file
			outTemperature.write((char*)&Temperature, sizeof(CityTemperature));
			outTemperature.close();

			system("pause");
		}break;

		case '2': {
			system("cls");

			ifstream inP("Temperature", ios::binary);
			while (inP.read((char*)&Temperature, sizeof(CityTemperature))) {
				Temperature.getClimateData();
			}
			inP.close();			// closing the files after execution

			// searching the city by its ID
			int ID;
			cout << "\nEnter ID of city which you want to delete: ";
			cin >> ID;

			ifstream inTemperature1;
			inTemperature1.open("Temperature", ios::binary);
			while (inTemperature1.read((char*)&Temperature, sizeof(CityTemperature))) {
				if (ID == Temperature.getCityID()) {
					Temperature.getClimateData();
				}
			}
			inTemperature1.close();

			ofstream inTemperatureTemp1("TemperatureTemp", ios::binary);
			ifstream inTemperature("Temperature", ios::binary);
			// reading file
			while (inTemperature1.read((char*)&Temperature, sizeof(CityTemperature))) {
				if (ID != Temperature.getCityID()) {
					inTemperatureTemp1.write((char*)&Temperature, sizeof(CityTemperature));
				}

			}
			inTemperature1.close();
			inTemperatureTemp1.close();
			
			// removing and renaming the files
			remove("Temperature");
			rename("TemperatureTemp", "Temperature");

			ofstream out;
			out.open("Temperature", ios::binary | ios::app);
			cout << "Update data:" << endl;
			Temperature.setClimateData();
			out.write((char*)&Temperature, sizeof(CityTemperature));
			out.close();
			cout << "\nSuccessfully updated" << endl;

			system("pause");
		}break;

		case '3': {
			system("cls");

			cout << "DELETING DATA FROM CITY\n";

			ifstream inP("Temperature", ios::binary);
			while (inP.read((char*)&Temperature, sizeof(CityTemperature))) {
				Temperature.getClimateData();
			}
			inP.close();			// closing the files after execution
			// searching the city by its ID
			int ID;
			cout << "Enter ID of city which you want to delete: ";
			cin >> ID;

			ofstream outTemperatureTemp("TemperatureTemp", ios::binary);
			ifstream inTemperature("Temperature", ios::binary);
			while (inTemperature.read((char*)&Temperature, sizeof(CityTemperature))) {
				if (ID != Temperature.getCityID()) {
					outTemperatureTemp.write((char*)&Temperature, sizeof(CityTemperature));
				}
			}
			inTemperature.close();
			outTemperatureTemp.close();

			remove("Temperature");
			rename("TemperatureTemp", "Temperature");

			cout << "\nSuccessfully deleted" << endl;
			cout << "The new list:\n";

			ifstream inP2("Temperature", ios::binary);
			while (inP2.read((char*)&Temperature, sizeof(CityTemperature))) {
				Temperature.getClimateData();
			}
			inP2.close();			// closing the files after execution

			system("pause");
		}break;

		case '0': {
			main();
		}break;


		default: {
			cout << "Your choice is not available in menu!\n";
			system("pause");
		}
			   break;
		} // switch

	} // for loop


}

void CityRainFallInfo() {

	CityRainFall R;

	for (int i = 0; i < 1000; i++) {
		system("cls");

		cout << "City RainFall Information: \n";
		cout << "1. Add\n";
		cout << "2. Update\n";
		cout << "3. Delete\n";
		cout << "4. Displaying all\n";
		cout << "0. Go Back\n";

		cout << "Your choice: \n";

		switch (_getch())
		{
		case '1': {
			system("cls");
			cout << "ADD DATA TO CITY\n";
			cout << "Enter RainFall data of city: " << endl;
			// Add to List
			ofstream outR("R", ios::binary | ios::app);
			R.setClimateData();
			outR.write((char*)&R, sizeof(CityRainFall));
			outR.close();

			system("pause");
		}break;

		case '2': {
			system("cls");

			ifstream inP("R", ios::binary);
			while (inP.read((char*)&R, sizeof(CityRainFall))) {
				R.getClimateData();
			}
			inP.close();			// closing the files after execution

			// searching the city by its ID
			int ID;
			cout << "\nEnter ID of city which you want to delete: ";
			cin >> ID;

			ifstream inR1;
			inR1.open("R", ios::binary);
			while (inR1.read((char*)&R, sizeof(CityRainFall))) {
				if (ID == R.getCityID()) {
					R.getClimateData();
				}
			}
			inR1.close();

			ofstream inRTemp1("RTemp", ios::binary);
			ifstream inR("R", ios::binary);
			while (inR1.read((char*)&R, sizeof(CityRainFall))) {
				if (ID != R.getCityID()) {
					inRTemp1.write((char*)&R, sizeof(CityRainFall));
				}

			}
			inR1.close();
			inRTemp1.close();

			remove("R");
			rename("RTemp", "R");

			ofstream out;
			out.open("R", ios::binary | ios::app);
			cout << "Update data:" << endl;
			R.setClimateData();
			out.write((char*)&R, sizeof(CityRainFall));
			out.close();
			cout << "\nSuccessfully updated" << endl;

			system("pause");
		}break;

		case '3': {
			system("cls");

			cout << "DELETING DATA FROM CITY\n";

			ifstream inP("R", ios::binary);
			while (inP.read((char*)&R, sizeof(CityRainFall))) {
				R.getClimateData();
			}
			inP.close();			// closing the files after execution
			// searching the city by its ID
			int ID;
			cout << "Enter ID of city which you want to delete: ";
			cin >> ID;

			ofstream outRTemp("RTemp", ios::binary);
			ifstream inR("R", ios::binary);
			while (inR.read((char*)&R, sizeof(CityRainFall))) {
				if (ID != R.getCityID()) {
					outRTemp.write((char*)&R, sizeof(CityRainFall));
				}
			}
			inR.close();
			outRTemp.close();

			remove("R");
			rename("RTemp", "R");

			cout << "\nSuccessfully deleted" << endl;
			cout << "The new list:\n";

			ifstream inP2("R", ios::binary);
			while (inP2.read((char*)&R, sizeof(CityRainFall))) {
				R.getClimateData();
			}
			inP2.close();			// closing the files after execution

			system("pause");
		}break;

		case '0': {
			main();
		}break;


		default: {
			cout << "Your choice is not available in menu!\n";
			system("pause");
		}
			   break;
		} // switch

	} // for loop


}

void CityHumidityInfo() {

	CityHumidity Humidity;

	for (int i = 0; i < 1000; i++) {
		system("cls");

		cout << "City Humidity Information: \n";
		cout << "1. Add\n";
		cout << "2. Update\n";
		cout << "3. Delete\n";
		cout << "0. Go Back\n";

		cout << "Your choice: \n";

		switch (_getch())
		{
		case '1': {
			system("cls");
			cout << "ADD DATA TO CITY\n";
			cout << "Enter Humidity data of city: " << endl;
			// Add to List
			ofstream outHumidity("Humidity", ios::binary | ios::app);
			Humidity.setClimateData();
			outHumidity.write((char*)&Humidity, sizeof(CityHumidity));
			outHumidity.close();

			system("pause");
		}break;

		case '2': {
			system("cls");

			ifstream inP("Humidity", ios::binary);
			while (inP.read((char*)&Humidity, sizeof(CityHumidity))) {
				Humidity.getClimateData();
			}
			inP.close();			// closing the files after execution

			// searching the city by its ID
			int ID;
			cout << "\nEnter ID of city which you want to delete: ";
			cin >> ID;

			ifstream inHumidity1;
			inHumidity1.open("Humidity", ios::binary);
			while (inHumidity1.read((char*)&Humidity, sizeof(CityHumidity))) {
				if (ID == Humidity.getCityID()) {
					Humidity.getClimateData();
				}
			}
			inHumidity1.close();

			ofstream inHumidityTemp1("HumidityTemp", ios::binary);
			ifstream inHumidity("Humidity", ios::binary);
			while (inHumidity1.read((char*)&Humidity, sizeof(CityHumidity))) {
				if (ID != Humidity.getCityID()) {
					inHumidityTemp1.write((char*)&Humidity, sizeof(CityHumidity));
				}

			}
			inHumidity1.close();
			inHumidityTemp1.close();

			remove("Humidity");
			rename("HumidityTemp", "Humidity");

			ofstream out;
			out.open("Humidity", ios::binary | ios::app);
			cout << "Update data:" << endl;
			Humidity.setClimateData();
			out.write((char*)&Humidity, sizeof(CityHumidity));
			out.close();
			cout << "\nSuccessfully updated" << endl;

			system("pause");
		}break;

		case '3': {
			system("cls");

			cout << "DELETING DATA FROM CITY\n";

			ifstream inP("Humidity", ios::binary);
			while (inP.read((char*)&Humidity, sizeof(CityHumidity))) {
				Humidity.getClimateData();
			}
			inP.close();			// closing the files after execution
			// searching the city by its ID
			int ID;
			cout << "Enter ID of city which you want to delete: ";
			cin >> ID;

			ofstream outHumidityTemp("HumidityTemp", ios::binary);
			ifstream inHumidity("Humidity", ios::binary);
			while (inHumidity.read((char*)&Humidity, sizeof(CityHumidity))) {
				if (ID != Humidity.getCityID()) {
					outHumidityTemp.write((char*)&Humidity, sizeof(CityHumidity));
				}
			}
			inHumidity.close();
			outHumidityTemp.close();

			remove("Humidity");
			rename("HumidityTemp", "Humidity");

			cout << "\nSuccessfully deleted" << endl;
			cout << "The new list:\n";

			ifstream inP2("R", ios::binary);
			while (inP2.read((char*)&Humidity, sizeof(CityRainFall))) {
				Humidity.getClimateData();
			}
			inP2.close();			// closing the files after execution

			system("pause");
		}break;

		case '0': {
			main();
		}break;


		default: {
			cout << "Your choice is not available in menu!\n";
			system("pause");
		}
			   break;
		} // switch

	} // for loop


}

int main() {
	for (int i = 0; i < 1000; i++) {
		system("cls");
		
		cout << "Main Menu: \n";
		cout << "1. City temperature information\n";
		cout << "2. City rainfall information\n";
		cout << "3. City humadity information\n";
		cout << "4. Dispalaying all\n";
	
		cout << "Your choice: \n";

		switch (_getch())
		{
		
		case '1': {
			system("cls");
			CityTemperatureInfo();
			system("pause");
		}break;

		case '2': {
			system("cls");
			CityRainFallInfo();
			system("pause");
		}break;

		case '3': {
			system("cls");
			CityHumidityInfo();
			system("pause");
		}break;

		case '4':{
		system("cls");
		cout << "DISPLAYING ALL\n";
		/*CityTemperature Temperature1; // creating an object
		CityRainFall R1;
		CityHumidity Humidity1;

		cout << "TEMPERATURE:\n";
		ifstream inP("Temperature", ios::binary);
		while (inP.read((char*)&Temperature1, sizeof(CityTemperature))) {
			Temperature1.getClimateData();
		}
		inP.close();			// closing the files after execution

		cout << "RAINFALL:\n";
		ifstream inP1("R", ios::binary);
		while (inP1.read((char*)&R1, sizeof(CityRainFall))) {
			R1.getClimateData();
		}
		inP1.close();			// closing the files after execution

		cout << "HUMIDITY:\n";
		ifstream inP2("R", ios::binary);
		while (inP2.read((char*)&Humidity1, sizeof(CityRainFall))) {
			Humidity1.getClimateData();
		}
		inP2.close();			// closing the files after execution*/


		system("pause");

		}
				break;
		
		default: {
			cout << "Your choice is not available in menu!\n";
			system("pause");
		}
			break;
		} // switch

	} // for loop


}

