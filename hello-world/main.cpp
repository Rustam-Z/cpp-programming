#include "ExpenseSheet.h"
#include "InputArguments.h"

#include <string>
#include <iomanip>
#include <iostream>
#include <algorithm>

int main()
{
    std::string line;
    ExpenseSheet expenses;

    while (true)
    {
        // Getting user input
        std::cout << "> ";
        std::getline(std::cin, line);
        InputArguments inArgs(line);

        std::string cmd = inArgs[0];
        std::transform(cmd.begin(), cmd.end(), cmd.begin(), [](char c) { return std::tolower(c); });
        auto args = inArgs.Subset(1);

        // Check the commd
        if (cmd == "add")
        {
            if (args.Count() == 2 || args.Count() == 3)
            {
                const auto& label = args[0];
                double value;
                if (args.Count() == 2)
                {
                    value = atof(args[1].c_str()) * -1.;
                }
                else
                {
                    value = atof(args[2].c_str());
                    if (args[1] != "+")
                    {
                        value *= -1.;
                    }
                }

                if (!expenses.Add(label, value))
                {
                    std::cout << "Failed to add!" << std::endl;
                }
            }
            else
            {
                std::cout << "Usage: add <label> (+/-) <value>" << std::endl;
            }
        }
        else if (cmd == "del")
        {
            if (args.Count() == 1)
            {
                if (!expenses.Del(args[0]))
                {
                    std::cout << "Failed to delete!" << std::endl;
                }
            }
            else
            {
                std::cout << "Usage: del <label>" << std::endl;
            }
        }
        else if (cmd == "list")
        {
            expenses.List(std::cout);
        }
        else if (cmd == "eval")
        {
            auto value = expenses.Eval();
            std::cout << "TOTAL: " << value << std::endl;
        }
        else if (cmd == "exit")
        {
            break;
        }
        else
        {
            std::cout << "Command \"" << cmd << "\" is unknown!" << std::endl;
        }
    }
}