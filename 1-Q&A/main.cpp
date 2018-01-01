// cin with strings
#include <iostream>
#include <string>
using namespace std;

// Main
int main()
{
string mystr;
string mystrr;
cout << "What is your name?: ";
getline (cin, mystr);
cout << "Hello " << mystr << endl;
if (mystr == "Gabriel")
cout << "Gabriel";
else if (mystrr == "Gennix")
cout << "Gennix";
cout << "Do you want to play a game?" << mystr << endl;
getline (cin,mystr);
cout << "In Jigsaw tone of voice: Let's play a game " << mystr << endl;
getline (cin,mystrr);
cout << "Ending Transmission" << mystrr << endl;
    return 0;
}
