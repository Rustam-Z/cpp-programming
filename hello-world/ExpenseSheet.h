#pragma once

#include <vector>
#include <string>
#include <ostream>
#include <iomanip>
#include <algorithm>
#include <string_view>

class ExpenseSheet
{
    public:
        struct Entry
        {
            std::string label;
            double value = 0.;

            inline bool operator==(const Entry& rhs) const
            {
                return label == rhs.label;
            }
        };

    public:
        ExpenseSheet() = default;
        ExpenseSheet(const ExpenseSheet&) = default;

        ExpenseSheet& operator=(const ExpenseSheet&) = default;

        bool Add(std::string_view label, double value);
        bool Del(std::string_view label);
        void List(std::ostream& os) const;
        double Eval() const;

    private:
        std::vector<Entry> m_entrys;
};