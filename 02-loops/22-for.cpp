/*
    When you know exactly how many times you want to loop through a block of code, 
    use the for loop instead of a while loop:

    for (statement 1; statement 2; statement 3) {
        // code block to be executed
    }

    Statement 1 is executed (one time) before the execution of the code block.

    Statement 2 defines the condition for executing the code block.

    Statement 3 is executed (every time) after the code block has been executed.

    The example below will print the numbers 0 to 4:
*/

#include <iostream>

using namespace std;

int main(){
    
    for (int i = 0; i < 5; i++) {
        cout << i << "\n";
    }
 
    return 0;
}


/*
You have already seen the break statement used in an earlier chapter of this tutorial.
It was used to "jump out" of a switch statement.

The break statement can also be used to jump out of a loop.

This example jumps out of the loop when i is equal to 4:

for (int i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  cout << i << "\n";
}

The continue statement breaks one iteration (in the loop), if a specified condition occurs, 
and continues with the next iteration in the loop.

This example skips the value of 4:

for (int i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  cout << i << "\n";
}

You can also use break and continue in while loops:

int i = 0;
while (i < 10) {
  cout << i << "\n";
  i++;
  if (i == 4) {
    break;
  }
}

or 

int i = 0;
while (i < 10) {
  if (i == 4) {
    i++;
    continue;
  }
  cout << i << "\n";
  i++;
}

*/