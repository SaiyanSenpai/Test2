#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Type a sentence: ";
    
    string sentence;
    getline(cin, sentence);

    string sentence2 = sentence.append("Hello", "Hi");
    cout << sentence2 << endl;
}