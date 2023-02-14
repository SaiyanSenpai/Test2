/*
1. Create appropriate variables to store the following types of data:
 1. Name
 2. Middle initial
 3. Age
 4. GPA
*/

# include <iostream>
# include <iomanip>

using namespace std;

int main(){
    string name = "first_name";
    char middle_initial = 'D';
    int age = 25;
    float GPA = 4.8;

    cout
        << name << ", "
        << middle_initial << ", "
        << age << ", "
        << GPA
        << endl;

    return 0;

}