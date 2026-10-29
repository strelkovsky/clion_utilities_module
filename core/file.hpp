#pragma once
#include <string>
#include <string_view>
#include <fstream>
#include <sstream>

namespace core
{
    class File
    {
    public:
        static auto read(std::string_view filename) -> std::string
        {
            const std::ifstream stream { filename.data() };

            std::stringstream buffer;
            buffer << stream.rdbuf();

            return  buffer.str();
        }

        File() = delete;
    };

}
