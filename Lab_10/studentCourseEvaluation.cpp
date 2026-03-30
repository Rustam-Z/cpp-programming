#include <iostream>
#include <string>

using namespace std;

// creating a class named "Student"
void TakeData()
{
    // PRECOGS_FIX: perform robust input validation and allow spaces in name using getline
    #include <limits>

    cout << "ID : ";
    if (!(cin >> student_id)) {
        cin.clear();
        string tmp;
        getline(cin, tmp);
        cout << "Invalid ID input. Aborting input." << endl;
        return;
    }

    // consume the trailing newline before using getline for full name
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "Name: ";
    if (!std::getline(cin, student_name) || student_name.empty()) {
        cout << "Invalid name input. Aborting input." << endl;
        return;
    }

    auto readValidatedDouble = [&](const string &prompt, double &out, double minVal = 0.0, double maxVal = 1000.0) {
        while (true) {
            cout << prompt;
            if (cin >> out) {
                if (out >= minVal && out <= maxVal) {
                    break;
                }
                cout << "Value out of accepted range (" << minVal << " - " << maxVal << "). Try again." << endl;
            } else {
                // PRECOGS_FIX: clear stream and discard invalid token before retry
                cin.clear();
                string discard;
                getline(cin, discard);
                cout << "Invalid numeric input. Try again." << endl;
            }
        }
    };

    readValidatedDouble("OOP2: ", OOP2_Score, 0.0, 100.0);
    readValidatedDouble("Math: ", math_Score, 0.0, 100.0);
    readValidatedDouble("English: ", english_Score, 0.0, 100.0);

    ctotal();
}

// creating a class named "Employee"
double total_salary()
{
    // PRECOGS_FIX: validate inputs and perform multiplication in 64-bit to avoid 32-bit overflow
    #include <limits>

    long long h = static_cast<long long>(Hours);
    long long r = static_cast<long long>(Rate);

    // Basic validation: no negative hours/rate allowed for salary computation
    if (h < 0 || r < 0) {
        return 0.0;
    }

    const long long maxAllowed = std::numeric_limits<long long>::max();
    if (r != 0 && h > maxAllowed / r) {
        // Overflow would occur. Cap at max representable or handle as error.
        return static_cast<double>(maxAllowed);
    }

    long long total = h * r;
    return static_cast<double>(total);
}

int main()
{
    // PRECOGS_FIX: remove unsafe system() use and replace with portable/controlled clear and pause behavior
    #include <limits>

    auto clearScreen = []() {
        // Best-effort portable clear: print several newlines instead of calling system("cls")/system("clear")
        for (int i = 0; i < 50; ++i) std::cout << '\n';
    };

    auto pausePrompt = []() {
        std::cout << "Press Enter to continue..." << std::endl;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin.get();
    };

    int choice;
    std::cout << "1. Student" << std::endl;
    std::cout << "2. Employee" << std::endl;
    std::cout << "Your choice: ";
    if (!(std::cin >> choice)) {
        std::cerr << "Invalid input. Exiting." << std::endl;
        return 1;
    }
    std::cout << std::endl;

    Student student;   // creating an object of a class "Student"
    Employee employee; // creating an object of a class "Employee"
    switch (choice)
    {
    case 1:
    {
        student.TakeData();
        std::cout << std::endl;
        student.showData();
    }
    break;
    case 2:
    {
        while (true)
        {
            clearScreen(); // PRECOGS_FIX: avoid system("cls") to reduce execution of shell commands
            int choice_employee;

            std::cout << "1. Input Employee Details\n";
            std::cout << "2. Display Employee Details\n";
            std::cout << "3. Display Salary\n";
            if (!(std::cin >> choice_employee)) {
                std::cin.clear();
                std::string discard;
                std::getline(std::cin, discard);
                std::cout << "Invalid selection. Try again." << std::endl;
                pausePrompt(); // PRECOGS_FIX: replace system("pause") with controlled prompt
                continue;
            }
            switch (choice_employee)
            {
            case 1:
            {
                std::string x, y;
                int z, i;
                clearScreen();
                std::cout << "\t\t\tEmployee information\n";
                std::cout << "Employee_ID: ";
                if (!(std::cin >> x)) { std::cin.clear(); std::getline(std::cin, x); }
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Employee_Name: ";
                std::getline(std::cin, y);
                std::cout << "Number of worked Hours: ";
                while (!(std::cin >> z)) { std::cin.clear(); std::string discard; std::getline(std::cin, discard); std::cout << "Invalid hours. Enter integer: "; }
                std::cout << "Rate per Hour: ";
                while (!(std::cin >> i)) { std::cin.clear(); std::string discard; std::getline(std::cin, discard); std::cout << "Invalid rate. Enter integer: "; }
                std::cout << std::endl;
                employee.setEmployee_ID(x);
                employee.setEmployee_Name(y);
                employee.setHours(z);
                employee.setRate(i);
                pausePrompt();
            }
            break;
            case 2:
            {
                clearScreen();
                std::cout << "ID: " << employee.getEmployee_ID() << std::endl;
                std::cout << "Name: " << employee.getEmployee_Name() << std::endl;
                std::cout << "Hours: " << employee.getHours() << std::endl;
                std::cout << "Rate: " << employee.getRate() << std::endl;
                pausePrompt();
            }
            break;
            case 3:
            {
                clearScreen();
                std::cout << "Total salary: " << employee.total_salary() << std::endl;
                pausePrompt();
            }
            break;
            default:
                std::cout << "Incorrect input! Try again!" << std::endl;
                pausePrompt();
                break;
            }
        }
    }
    break;
    default:
        std::cout << "Incorrect input! Try again!" << std::endl;
        break;
    }
    pausePrompt();
    return 0;
}
