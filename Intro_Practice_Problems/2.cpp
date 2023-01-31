// 2. Declare three string variables with the names major, first and last.
// Request values from the console for college major, first name and last name.
// Print the values of these variables as part of the phrase “My name is F L and
// my major is M”. Determine if the cin command or getline command is required
// for this program to work properly.

#include <iostream>
using namespace std;

int main(){

    string major = "Computer Science and Information Security";
    string first = "Tirtho";
    string last = "Debroy";

    cout << "My name is " << first << " " << last << " and my major is " << major << ".\n";
    

    cout << endl;
    return 0;
    
}