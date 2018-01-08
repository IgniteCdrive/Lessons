// Includes up here
// cin with strings
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

/*
void printmessage(const int No_Dota)
{
    std::cout << No_Dota << std::endl;
}

void printmessage(const std::string& str)
{
    std::cout << str << std::endl;
}
*/

template<class Printable>
void printmessage(const Printable Check)
{
    std::cout << Check << std::endl;
}

void printcountdown()
{
    for (int a=10; a>0; a--)
    {
        printmessage(a);
    }
    printmessage("Dota is a bad game!");
}

string tolowercase(string str)
{
    std::transform(str.begin(),str.end(),str.begin(),::tolower);
    return str;
}

int main()
{
    printcountdown();
    string Inputname;
    string Answer;
    printmessage("What is your name?");
    getline (cin, Inputname);
    if( tolowercase(Inputname) == "gennix" ){
        printmessage("You're an Idot");
        return 0;
    }else{
        cout << "Hello " << Inputname << "." << endl;
    }
    printmessage("Do you want to play a game?");
    getline (cin,Answer);
    if( tolowercase(Answer) == "yes" ){
        printmessage("In Jigsaw tone of voice: Let's play a game.");
    }
    return 0;
}
