// cin with strings
#include <iostream>
#include <string>
using namespace std;

// Main
int main()
{
  string mystr;
  cout << "What is your name?: ";
  getline (cin, mystr);
  cout << "Hello " << mystr << endl;
  cout << "Do you want to play a game? ";
  getline (cin, mystr);
  cout << "In Jigsaw tone of voice: Let's play a game " << endl;
    return 0;
}
