# include <iostream>

using namespace std;

int main(){

    // 1. Request two integers x and y from the console.
    float numerator, denominator;

    cout << "Enter a numerator: ";
    cin >> numerator;

    cout << "Enter a denominator: ";
    cin >> denominator;

    // a) Print the result of regular division upon x and y to four decimal places.
    cout.setf(ios::fixed);
    cout.precision(4);
    cout
        << "Regular division: " << numerator / denominator << "\n"
    
    // b) Print the result of integer division upon x and y.
        << "Integer divison: " << static_cast<int>(numerator/denominator)
        << "Integer divison: " << static_cast<int>(numerator) / static_cast<int>(denominator) << endl;


    return 0;
}