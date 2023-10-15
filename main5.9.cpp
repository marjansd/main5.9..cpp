
//(Product of Odd Integers) Write a program that uses a for statement to calculate and print
//the product of the odd integers from 1 to 15.


#include <iostream>

using namespace std;

int main() {

    int counter = 15;
    int multiply = 1;
    int number[counter];

    int i;
    for (i = 1; i <= counter; i++) {
        if (i % 2 != 0)
            cout << " " << i << endl;
        number[i-1]=i;
    }

    for (int i = 1; i < 15; i++) {
        if (number[i] % 2 != 0) {
            multiply *= number[i];
        }
    }

    cout<<"the multiply of odd numbers btw 1 to 15 is: "<<multiply<<endl;
    return 0;
}