# include <iostream>
# include <iomanip>

using namespace std;

int main(){
    float length, width;

    cout << "What is the length and width of a rectangle?\n";
    
    cin >> length >> width;
    cout << length << " * " << width << " = " << length*width << endl;

    return 0;
}