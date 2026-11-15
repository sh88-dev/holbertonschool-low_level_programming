# Simple Calculator

## Compile

``
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator
```


## Run

```
./calculator
```


## Supported operations

```
Choose an option
1. Add
2. Subtract
3. Multiply
4. Divide
0. Quit
```


## Numeric behaviour
Operands and results are decimals (double)
Printed with %g so results show as whole numbers e.g. 35, rather than 35.000000

```
Ivalid option error if user types any number outside of valid range 0 to 4 - will be prompted to try again.
Inputting 0 prints Bye! and quits the program.

When user selects a valid option listed, the operator function will run and the user will be prompted to input a number ("A: "), then another number ("B :").
The result is printed afterwards.

Operator options:
Menu option 1, '+'
Menu option 2, '-'
Menu option 2, '*'
'/' not yet implemented

```

## Known limitations
Non-numeric inputs are not handled. The brief states states this is OUT OF SCOPE.
Very large or small numbers are handled by switching to scientific notation using %g.

```
TBC
```