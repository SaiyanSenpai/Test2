// 1. Print the output example text exactly as it appears below.
//  Use the setw and left/right align commands for the columns.
//  cout << setw(7) << left << "Time" << setw(10) << right << "Location" << endl;
// Example Output
// Course Description:
// ET-575 is a course in procedural programming and algorithmic
// concepts using the C++ language.
// ET-575 Class Schedule:
// Time Location
// ------- --------
// 9:00 AM Room T18

#include <iostream>
#include <iomanip>

using namespace std;


int main(){
    cout << "";
    string description_header = "Course Description:\n";
    string course_description = "ET-575 is a course in procedural programming and algorithmic concepts using the C++ language.\n\n";
    
    cout << description_header;
    cout << course_description;

    string schedule_header = "ET-575 Class Schedule:\n\n";


    cout << setw(12) << left << "Time" << setw(12) << left << "Location";
    cout << "\n";
    cout << setw(12) << left << "-------" << setw(12) << left << "--------";
    cout << endl;

    cout << setw(12) << "9:00AM" << setw(12) << "Room T18";
    return 0;
}