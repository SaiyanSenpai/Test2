// 2. Declare three string variables with the names major, first and last.
// Request values from the console for college major, first name and last name.
// Print the values of these variables as part of the phrase “My name is F L and
// my major is M”. Determine if the cin command or getline command is required
// for this program to work properly.

#include <iostream>
using namespace std;

// NOTE: The cin command cannot get spaces.
// It only reads until your space, the word after space will be assigned to the next cin.
int main(){
    string first;
    string last;
    string major;

    // 3 questions to obtain values for major, first & last name.
    cout << "What is your major? ";
    // cin >> major;
    getline(cin, major);
    
    cout << "What is your first name? ";
    // cin >> first;
    getline(cin, first);

    cout << "What is your last name? ";
    // cin >> last;
    getline(cin,last);

    cout << "My name is " << first << " " << last << " and my major is " << major << ".\n";
    
    cout << endl;
    return 0;
    
}