#include <iostream>
using namespace std;
//Todd Pieper
//Forgot to include my own name yikes, and space out the for loop items for readability
int main() {

    for (int i=1; i<101; i++) {
        //Nest some if statements since it would check them all anyway if they weren't

        if (i % 3 ==0) { //If the remainder is 0, it is divisible by 3

            if (i % 5 ==0) { //Since we checked if it's already divisible by 3, checking for 5 with the same number is the FizzBuzz case
                cout << "FizzBuzz \n";

            } else { //If it isn't also divisible by 5, it is still by 3, so that is the Fizz case
                cout << "Fizz \n";
            }
        }
        else if (i % 5 == 0) { //We can use an else if to connect to the outer check for 3 so we can avoid double printing outcomes
            cout << "Buzz \n";

        } else { //If none of the above checks come true, then we just print i with a newline
            cout << i;
            cout << "\n";
        }
    }

    return 0;
}
