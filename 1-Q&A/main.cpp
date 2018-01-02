// cin with strings
#include <iostream>
#include <string>
using namespace std;

// Main
int main()
{
    string Inputname;
    string Answer;
    cout << "What is your name? " << endl;
    getline (cin, Inputname);
    if( Inputname == "Gennix" ){
        cout << "You're an Idot" << endl;
        return 0;
    }else{
        cout << "Hello " << Inputname << "." << endl;
    }
    cout << "Do you want to play a game?" << endl;
    getline (cin,Answer);
    if( Answer == "Yes"){
        cout << "In Jigsaw tone of voice: Let's play a game " << endl;
    }
    return 0;
}
