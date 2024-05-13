#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class FullName
{
public:
    FullName()
    {
        FirstName = "Rustam";
        MiddleName = "Zokirov";
        LastName = "Ibrohimovich";
    }

    FullName(string fName, string mName, string lName)
    {
        fName = FirstName;
        mName = MiddleName;
        lName = LastName;
    }
    void setFirstName(string f_Name)
    {
        FirstName = f_Name;
    }
    string getFirstName()
    {
        return FirstName;
    }
    void setMiddleName(string m_Name)
    {
        MiddleName = m_Name;
    }
    string getMiddleName()
    {
        return MiddleName;
    }
    void setLastName(string l_Name)
    {
        LastName = l_Name;
    }
    string getLastName()
    {
        return LastName;
    }

private:
    string FirstName;
    string MiddleName;
    string LastName;
};

class Player
{
private:
    string Player_ID;
    int Matches_Played;
    FullName Player_Name;

public:
    static int Goals_Scored;

    Player()
    {
        Player_ID = "U1910049";
        Matches_Played = 100;
    }
    Player(string id, int matches, int goals)
    {
        Player_ID = id;
        Matches_Played = matches;
    }
    void setPlayer_ID(string ID)
    {
        Player_ID = ID;
    }
    string getPlayer_ID()
    {
        return Player_ID;
    }
    void setMatches_Played(int Matches)
    {
        Matches_Played = Matches;
    }
    int getMatches_Played()
    {
        return Matches_Played;
    }
    /* void setGoals_Scored(int Goals) {
         Matches_Played = Goals;
     }
     int getGoals_Scored() {
         return Goals_Scored;
     }*/
    friend void Increse_GoalScored(Player);
};

int Player::Goals_Scored;
void Increse_GoalScored(Player player1)
{
    player1.Goals_Scored++;
}

int main()
{
    int choice;
    while (1)
    {

        string firstName, middleName, lastName;
        FullName fullName1;
        // 2
        string Id;
        int goals, matches;
        Player player1;
        cout << "Add: First Name, Middle Name, Last Name: \n\n";
        cout << "First Name: \n";
        cin >> firstName;
        cout << "Middle Name: \n";
        cin >> middleName;
        cout << "Last Name:\n ";
        cin >> lastName;

        FullName fullName(firstName, middleName, lastName);
        fullName.setFirstName(firstName);
        fullName.setMiddleName(middleName);
        fullName.setLastName(lastName);

        cout << "Main menu: \n";
        cout << "[1] Add details\n";
        cout << "[2] Display details\n";
        cout << "[3] No. of goals\n";
        cout << "[4] Delete details\n";
        cout << "[0] Exit\n";
        cout << "Your Choice: ";

        cin >> choice;
        switch (choice)
        {
        case 1:
            system("cls");
            cout << "We have entered in the beginning!" << endl;
            // fullName.setFirstName(firstName);
            // fullName.setMiddleName(middleName);
            // fullName.setLastName(lastName);
            /* FullName fullName(firstName, middleName, lastName);
             fullName.setFirstName(firstName);
             fullName.setMiddleName(middleName);
             fullName.setLastName(lastName);*/

            break;
        case 2:
            system("cls");
            cout << "Details of the Player: \n";
            cout << "Id: ";
            cin >> Id;
            cout << "Matches_Played: ";
            cin >> matches;
            player1.setPlayer_ID(Id);
            player1.setMatches_Played(matches);
            cout << endl;
            cout << player1.getPlayer_ID();
            cout << fullName.getFirstName() << " " << fullName.getLastName() << " " << fullName.getMiddleName() << endl;
            cout << player1.getMatches_Played();
            break;
        case 3:
            system("cls");
            cout << "Number of goals: \n";
            Increse_GoalScored(player1);
            break;
        case 4:
            system("cls");
            cout << "Deletion for finished successfully! \n";
            break;
        case 5:
            system("exit");
        }
    }
    return 0;
}