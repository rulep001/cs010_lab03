# CS 10 - Lab 3: Integer Arithmetic and Switching Data Types

## Overview
Your goal is to simulate a cash register. Your program should first ask for the purchase amount and then the amount paid by the customer. Then the program should calculate the total change and the quantities of each monetary denomination to arrive at that change amount. Finally, the program should output the total change followed by how many of each type of currency to give back to the customer.

*Algorithm outline: Calculate the floating point change value. Next convert the entire change amount to the amount of pennies (if all the change was given in pennies), assigning the number of pennies into a new variable. Then use integer division to calculate the number of each coin denomination, and use the modulo operator to update the remaining number of pennies (that remain in the giant unsorted pile) each time.*

The program requires that we convert from floating point (fp) data (change in dollars and cents) to integer data (change in pennies) through a process called casting. Specifically, we use an operator called a static_cast as follows:

`int_variable = static_cast<int>( fp_variable );` OR `int_variable = static_cast<int>( fp_result of expression );`

We have to be careful about this: it doesn’t always give us the result we expect!
Since it truncates (rather than rounding), a number such as 46.999999 will become 46 as an int, not 47. The reason this is a problem is that 47.0 could be stored by the computer as 46.999999 or 47.000001, leading to different results!

To fix these divergent results, we add 0.5 before casting, forcing the number to have the expect integer value.
`x = static_cast<int>(y + 0.5);`
In our case, we must calculate the number of pennies before casting, so we alter the above to get:
`x = static_cast<int>(y * 100 + 0.5);`

## Think About the Problem
1. Based on the description of the problem, what are the tasks the program must do?
    * each task should be a comment
    * recall comments start with //
    * each comment should be an English description of the task, not C++ code
2. Certain tasks may require storage of values, we store values in variables.
    * Take a moment to identify how many items you wish to store, based on your tasks.
    * Create a comment with an English description for each item you wish to store.
    * Now, think about the type of variable required to store each of the identified items.
    * You should use variable names that are indicative of the value that is stored in the variable, so although we use x and y in the example, you should use different names.
3. Now, within your comments, you have a clearly outlined program.

## Program Your Solution
1. Now, on the line following each of your comments, write the C++ code that performs that task: this allows a reader to read and think about the comment, and then check (or skip) the actual implementation.
2. You will often need to to check an example program run to get your output to be as expected.

## Hints
1. You should only use static_cast a single time in your entire program.
2. When visualizing the algorithm, think about how you would sort pennies into piles if you had a giant bucket filled with pennies and someone asked you to sort the pennies into piles of larger monetary denominations.
3. Follow each input statement by a newline to help create the vertical spacing shown in the examples.

## Known Bugs
No currently known bugs!
