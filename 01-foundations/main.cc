#include "board.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cerrno>
#include <sstream>
#include <optional>

std::optional<std::vector<std::vector<int>>> OpenAndParseInputFile(const std::string &file_path)
{
    std::ifstream input_file(file_path, std::ios::in);
    if (!input_file)
    {
        std::cout << "Error while opening file: " << strerror(errno) << std::endl;
        return {};
    }
    std::vector<std::vector<int>> parsed_lines;
    std::string line;
    while (std::getline(input_file, line)) 
    {
        std::vector<int> parsed_line;
        std::istringstream line_stream{line};
        int slot_value;
        char separator;
        while (line_stream >> slot_value >> separator) 
        {
            parsed_line.push_back(slot_value);
        }
        parsed_lines.push_back(std::move(parsed_line));
    }
    return parsed_lines;
}

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    const auto &parsed_input = OpenAndParseInputFile("C:\\Users\\micha\\projects\\cpp-degree\\01-foundations\\input.txt");
    if (!parsed_input)
    {
        return 1;
    }
    foundations::Board board {parsed_input.value()};
    std::cout << board << std::endl;
    return 0;
}