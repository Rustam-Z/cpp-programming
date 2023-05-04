#include "InputArguments.h"

InputArguments::InputArguments(std::string_view line)
{
    enum class State 
    {
        ReadyForText,
        TextBegin,
        TextBeginIgnoreSpaces,
    } state = State::ReadyForText;

    std::stringstream ss;
    for (char c : line)
    {
        switch (state)
        {
            case State::ReadyForText:
                switch (c)
                {
                    case ' ':
                        break;
                    case '"':
                        state = State::TextBeginIgnoreSpaces;
                        break;
                    default:
                        ss << c;
                        state = State::TextBegin;
                        break;
                }
                break;

            case State::TextBegin:
                switch (c)
                {
                    case ' ':
                        m_args.push_back(ss.str());
                        ss.str("");
                        state = State::ReadyForText;
                        break;
                    default:
                        ss << c;
                        break;
                }
                break;
            case State::TextBeginIgnoreSpaces:
                switch (c)
                {
                    case '"':
                        m_args.push_back(ss.str());
                        ss.str("");
                        state = State::ReadyForText;
                        break;
                    default:
                        ss << c;
                        break;
                }
                break;
        }
    }

    if (state == State::TextBegin)
    {
        m_args.push_back(ss.str());
    }
}

InputArguments InputArguments::Subset(size_t offset, size_t count)
{
    InputArguments subset;

    auto it = m_args.begin() + offset;
    while (count-- && it != m_args.end())
    {
        subset.m_args.push_back(*(it++));
    }

    return subset;
}