## switch statement in C
`switch` statement is a control flow statement used in programming to select and execute code block based on the value of an expression. 

syntax: 

```c
switch(expression) {
    case value1: 
       // code to execute if expression == value1
       break;
    case value2: 
       // Code to execute if expression == value2
       break;
    // more case statements for other values
    default: 
       // Code to execute if none of the cases match
}
```

### How It Works
  - The expression is evaluated, and its value is compared to the values in the `case` statements. 
  - If a match is found, the code block for that case is executed. 
  - The `break` statement is used to exit the `switch` statement after a case is matched. 

### The Role of "break"
   - `break` statements are essential to prevent fall-through behavior. If a `break` is omitted, execution will continue to the next case regardless of whether it matches. 

### Using "default" 
   - The `default` case is optional and is executed when none of the cases match. it serves as a catch-all. 

Example: 
```c
int day = 3;

switch (day) {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    default:
        printf("Other day");
}

```

The `switch` statement is usefull when you have a single expression that can take on multiple values, and you want to execute different code based on those values. 

instead of using to many `if else` statement you can use `switch` statement.

### Difference between if else statement and switch statement 


| Aspect                    | "if-else" Statement                        | "switch" Statement                     |
|---------------------------|--------------------------------------------|---------------------------------------|
| Expression Evaluation     | Can evaluate any expression resulting in a Boolean value (true or false). | Evaluates a single expression, typically an integer or character, and compares it to constant values (cases). |
| Number of Conditions     | Can have any number of conditions in a series of "if-else" statements. | Suitable for handling multiple conditions based on equality with a single expression. |
| Fall-Through Behavior    | No fall-through behavior. Only the code block associated with the first true condition is executed. | Exhibits fall-through behavior if a `break` statement is omitted, continuing to execute subsequent cases. |
| Complexity               | More flexible for complex conditional logic, including conditions that are not based on direct equality comparisons. | More straightforward and readable for multiple conditions based on the equality of a single expression. |
| Use Cases                | Suitable for handling a wide range of conditions, including complex and diverse scenarios. | Commonly used when the expression has a limited set of constant values and you want to perform different actions based on those values. |

