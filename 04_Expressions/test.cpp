# include <iostream>

using namespace std;

int main(){
    int a, b = 3;

    cout << "Enter a value for a: ";
    cin >> a;

    /*
        input / 3
        if result == 0 then
            input is a multiple of 3
        end


        %n = 0 to n-1
        %n = n values
        %n = input n-1

        how many values are in a sequential range
        a - b + 1
        example: 10 to 20 contains 11 values in this range.
        
        another scenario: to get 0 to 10
        do x % 10

        example: generate a set of all lvalues from 22 to 30
        30 - 22 = 8
        8 + 1 = total number of values.

        x % 9 + 22(add this offset)
        x % n + 0

        generate the set of all vlaues from -3 to 4.
        since we're dealing with a negative
        do 4+3.
        and then add 1
        4+3 = 7
        7+1 = 8.
        

        generate a values for a lottery
        1 to 75
        total values: 75 because there's no 0.

        random number: rng % 75+1
    */
    
    
    cout << (a%b) << endl; // test this answer with the value 0 through 12 for a

    return 0;
}