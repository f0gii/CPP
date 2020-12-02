/*
    C++ supports the usual logical 'conditions' from mathematics:

    - Less than: a < b
    - Less than or equal to: a <= b
    - Greater than: a > b
    - Greater than or equal to: a >= b
    - Equal to a == b
    - Not Equal to: a != b
-----------------------------------------------------------------------------------------------------
    * Use the 'if' statement to specify a block of C++ code to be executed if a condition is true.
 
     if (condition) {
         // block of code to be executed if the condition is true
     }
 
-----------------------------------------------------------------------------------------------------
    * Use the 'else' statement to specify a block of code to be executed if the condition is false.
    
    if (condition) {
        // block of code to be executed if the condition is true
    } else {
        // block of code to be executed if the condition is false
    }

-----------------------------------------------------------------------------------------------------
    * Use the 'else if' statement to specify a new condition if the first condition is false.
    
    if (condition1) {
        // block of code to be executed if condition1 is true
    } else if (condition2) {
        // block of code to be executed if the condition1 is false and condition2 is true
    } else {
        // block of code to be executed if the condition1 is false and condition2 is false
    }
-----------------------------------------------------------------------------------------------------

    There is also a short-hand if else(Ternary Operator), which is known as the ternary operator because it consists
    of three operands. It can be used to replace multiple lines of code with a single line. 
    It is often used to replace simple if else statements:

    variable = (condition) ? expressionTrue : expressionFalse;
-----------------------------------------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main(){

    // In the example below, we test two values to find out if 20 is greater than 18. If the condition
    // is true, print some text:
    if (20 > 18) {
        cout << "20 is greater than 18" << endl;
    }

    // We can also test variables:
    int x = 20;
    int y = 18;

    if (x > y) {
        cout << "x is greater than y" << endl;
    }   

    // 'else' example:
    int time = 20;

    if (time < 18) {
        cout << "Good day." << endl;
    } else {
        cout << "Good evening." << endl;
    }
    // Outputs "Good evening."

    // 'else if' example
    int time1 = 22;

    if (time1 < 10) {
        cout << "Good morning." << endl;
    } else if (time < 20) {
        cout << "Good day." << endl;
    } else {
        cout << "Good evening." << endl;
    }
    // Outputs "Good evening."

    // Ternary Operator example
    int time2 = 20;
    string result = (time2 < 18) ? "Good day." : "Good evening.";
    cout << result << endl;
    
    return 0;
}

