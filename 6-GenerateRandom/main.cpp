// Includes up here
#include <iostream>
#include <random>
#include <string>
#include <algorithm>


void printarray(int* arg, int length)
{
    for(int w=0; w<length; w++)
    {
        std::cout << arg[w] << '\n';
    }
    std::cout << std::endl;
}

void Print(const std::string& str)
{
   std::cout << str << std::endl;
}


// Main
int main()
{
    std::string Inputnumber;
    Print("Please type a number below.");
    std::getline (std::cin,Inputnumber);
    int gather = std::stoi(Inputnumber);

    int* wonder = new int [gather];

    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(1,100000);
    for(int Idx = 0; Idx < gather; ++Idx)
    {
        wonder[Idx] = distribution(generator);
    }
    printarray(wonder,gather);
    system("pause");
    delete[] wonder;
    return 0;
}
