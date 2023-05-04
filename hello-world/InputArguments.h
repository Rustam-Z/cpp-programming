#pragma once

#include <vector>
#include <string>
#include <sstream>
#include <string_view>

class InputArguments
{
    public:
        InputArguments() = default;
        InputArguments(const InputArguments&) = default;
        InputArguments(std::string_view line);

        InputArguments& operator=(const InputArguments&) = default;

        InputArguments Subset(size_t offset, size_t count = std::numeric_limits<size_t>::max());

        inline size_t Count() const { return m_args.size(); }
        inline const std::string& Get(size_t idx) const { return m_args[idx]; }
        inline const std::string& operator[](size_t idx) const { return Get(idx); }
    
    private:
        std::vector<std::string> m_args;
};