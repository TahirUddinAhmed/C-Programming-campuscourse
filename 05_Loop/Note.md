# Loops In C 
A loop in programming is a fundamental control structure that allows a set of instruction to be executed repreatedly based on a defined condition. It enables the automation of repetitive tasks without the need to write the same code multiple times. 

There are primarily three types of loops commonly used across various languages:
 1. for loop 
 2. while loop 
 3. do-while loop 

## for loop
First we are going to understand the `for` loop 


#### syntax: 
```c
for(initialization; condition; increment/decrement) {
    // code to be executed
}

```

   1. Initialization: This part is used to initialize the loop control variable, typically a counter, to a starting value, It is executed only once at the beggining of the loop. 
   2. Condition: It's a Boolean expression that is evaluated before each iteration. If the condition is true, the loop continues; if false, the loop terminates. 
   3. update: This section modifies the loop control variable after each iteration. It usually increments or decrements the variable. 

Example: printing numbers from 1 to 10. 
```c
#include <stdio.h>

int main() {
      // initialize; condition; update
    for(int i = 1; i <= 10; i++) {
        printf("%d\n", i); // (print the value of i)
    }
    return 0;
}
```

This `for` loop will start with `i=1`, then check if `i` is less than or equal to `10`, execute the code block(print `i`), and increment `i` by 1 in each interation. It continues untill `i` becomes greater than 10.


## while loop
The while loop is very similar to `for` loop not syntax wise but both do the same thing

syntax: 
```c
// initialization

while(condition) {
    // code to be executed
    // Update 
}
```
 - `condition`: The loop continues to execute as long as this condition is true. If the condition evaluates to false, The loop terminates. 
 - `Code Block`: The set of instructions whithin the curly braces `{}` is executed repeatedly as long as the condition remains true.

 Example: print numbers 1 to 5 using `while` loop
 ```c
 #include <stdio.h>

 int main() {
    int i = 1; // initialization

    while(i <= 5) { // condition
      printf("%d\n", i); // code to be executed
      i++; // update the condition
    }
    return 0;
 }
 ```

 > Note: Do not forget to increment the variable used in the condition (`i++`), otherwise the loop will never end
