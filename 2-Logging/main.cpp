// cin with strings
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

//
void printmessage(const std::string& str)
{
    std::cout << str << std::endl;
}

string tolowercase(string str)
{
    std::transform(str.begin(),str.end(),str.begin(),::tolower);
    return str;
}

// Main
int main()
{
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
