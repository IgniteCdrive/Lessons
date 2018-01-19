// Includes up here
#include <iostream>
#include <istream>
#include <string>
#include <algorithm>

void printmessage(const std::string& str)
{
    std::cout << str << std::endl;
}

void printarray (int* arg, int length)
{
    for (int g=0; g<length; ++g)
    {
        std::cout << arg[g] << ' ';
    }
    std::cout << '\n';
}


std::string tolowercase(std::string str)
{
    std::transform(str.begin(),str.end(),str.begin(),::tolower);
    return str;
}



// Main
int main()
{
    int normie[] = {2,4,6,8,10};
    printarray(normie, 5);

    bool LoopStore = true;
    while(LoopStore)
    {
        std::string Inputvalue;
        bool InputIsValid = true;

        printmessage("Please enter a valid number between 0 and 4. Type \"exit\" to close");
        std::cin >> Inputvalue;
        if(tolowercase(Inputvalue) == "exit")
        {
            LoopStore = false;
            break;
            /*return 0; */
        }
        for(std::string::iterator StrIt = Inputvalue.begin(); StrIt != Inputvalue.end(); ++StrIt)
        {
            if(isdigit(*StrIt) == 0 && (*StrIt) != '-')
            {
                InputIsValid = false;
                printmessage("Error user value information is invalid.");
                break;
            }
        }
        if(InputIsValid)
        {
            const int normieindex = std::stoi(Inputvalue);
            if(normieindex < 0 || normieindex >= 5)
            {
                printmessage("Specified index is out of bounds.");
            }else
            {
                std::cout << normie[normieindex] << std::endl;
            }
        }
    }
    return 0;
}
