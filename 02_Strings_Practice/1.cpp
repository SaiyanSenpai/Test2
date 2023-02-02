#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string word;

    // prompt question
    cout << "Enter a text string: ";
    // set user input as the value of variable word. word = user_input
    cin >> word;

    cout << word[0] << endl;

    // cout << word.substr(1,2) << endl << endl;
    cout << word[1] << endl;

    cout << word[2] << endl;

    cout << word[3] << endl;

    cout << word[4] << endl;
    return 0;
}
