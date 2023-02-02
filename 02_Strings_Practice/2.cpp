#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string sentence = "This is a text string.";

    // Print out the first word.
    cout << sentence.substr(0,4) << endl;

    // print out the second word
    cout << sentence.substr(5,6) << endl;
    return 0;
}
