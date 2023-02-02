#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << endl;

    string s = "this isQCC";

    s.insert(7," ");
    cout << s << endl;

    s.replace(0,1,"T");
    cout << s << endl;

    s.erase(11, 1);
    cout << s << endl;

    s.replace(7,3, "the City University of New York");
    cout << s << endl;

    

    return 0;
}
