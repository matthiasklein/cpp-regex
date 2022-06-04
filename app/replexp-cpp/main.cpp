#include <regex>
#include <iostream>

int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        std::cerr << "usage: " << argv[0] << " [regexp]" << std::endl;
        return 1;
    }

    std::regex pattern(argv[1]);
    std::smatch match;
    std::string input;

    for(;;)
    {
        std::getline(std::cin, input);

        if(std::regex_search(input, match, pattern))
            std::cout << "MATCH " << match.str(0) << " from INPUT " << input << std::endl;
    }

    return 0;
}
