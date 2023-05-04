#include "ExpenseSheet.h"

bool ExpenseSheet::Add(std::string_view label, double value)
{
    Entry e;
    e.label = label;
    e.value = value;

    bool canInsert = std::find(m_entrys.begin(), m_entrys.end(), e) == m_entrys.end();
    if (canInsert)
    {
        m_entrys.push_back(std::move(e));
    }

    return canInsert;
}

bool ExpenseSheet::Del(std::string_view label)
{
    Entry e;
    e.label = label;
    auto element = std::find(m_entrys.begin(), m_entrys.end(), e);
    if (element != m_entrys.end())
    {
        m_entrys.erase(element);
        return true;
    }

    return false;
}

void ExpenseSheet::List(std::ostream& os) const
{
    size_t idx = 0;
    for (const Entry& e : m_entrys)
    {
        os << "(" << idx++ << ") " << e.label << " " << e.value << std::endl;
    }
}

double ExpenseSheet::Eval() const
{
    double value = 0.;
    for (const Entry& e : m_entrys)
    {
        value += e.value;
    }
    return value;
}