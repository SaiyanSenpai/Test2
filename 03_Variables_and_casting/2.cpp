# include <iostream>
# include <iomanip>

using namespace std;

int main(){
    float length, width;
    cin >> length >> width;

    cout
        << length << " * "
        << width  << "\n"
        << length*width
        << endl;

    return 0;
}