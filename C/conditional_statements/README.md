### Problem

if and else are two of the most frequently used conditionals in C/C++, and they enable you to execute zero or one conditional statement among many such dependent conditional statements. We use them in the following ways:

1. *if*: This executes the body of bracketed code starting with ![equation](https://latex.codecogs.com/gif.latex?statement1) if ![equation](https://latex.codecogs.com/gif.latex?condition) evaluates to true.

```C
if (condition) {
    statement1;
    ...
}
```

2. *if - else*: This executes the body of bracketed code starting with ![equation](https://latex.codecogs.com/gif.latex?statement1) if ![equation](https://latex.codecogs.com/gif.latex?condition) evaluates to true, or it executes the body of code starting with ![equation](https://latex.codecogs.com/gif.latex?statement2) if ![equation](https://latex.codecogs.com/gif.latex?condition) evaluates to false. Note that only one of the bracketed code sections will ever be executed.

```C
if (condition) {
    statement1;
    ...
}
else {
    statement2;
    ...
}
```

3. *if - else if - else*: In this structure, dependent statements are chained together and the ![equation](https://latex.codecogs.com/gif.latex?condition) for each statement is only checked if all prior conditions in the chain are evaluated to false. Once a ![equation](https://latex.codecogs.com/gif.latex?condition) evaluates to true, the bracketed code associated with that statement is executed and the program then skips to the end of the chain of statements and continues executing. If each ![equation](https://latex.codecogs.com/gif.latex?condition) in the chain evaluates to false, then the body of bracketed code in the else block at the end is executed.

```C
if(first condition) {
    ...
}
else if(second condition) {
    ...
}
.
.
.
else if((n-1)'th condition) {
    ....
}
else {
    ...
}
```

### Task

Given a positive integer denoting ![equation](https://latex.codecogs.com/gif.latex?n), do the following:

- If ![equation](https://latex.codecogs.com/gif.latex?1%20%5Cleq%20n%20%5Cleq%209), then print the lowercase English word corresponding to the number (e.g., *one* for ![equation](https://latex.codecogs.com/gif.latex?1), *two* for ![equation](https://latex.codecogs.com/gif.latex?2), etc.).

- If ![equation](https://latex.codecogs.com/gif.latex?n%20%3E%209), print *Greater than 9*.

### Input Format

The first line contains a single integer denoting ![equation](https://latex.codecogs.com/gif.latex?n).

### Constraints

- ![equation](https://latex.codecogs.com/gif.latex?1%20%5Cleq%20n%20%5Cleq%2010%5E%7B9%7D)

### Output Format

If ![equation](https://latex.codecogs.com/gif.latex?1%20%5Cleq%20n%20%5Cleq%209), then print the lowercase English word corresponding to the number (e.g., *one* for ![equation](https://latex.codecogs.com/gif.latex?1), *two* for ![equation](https://latex.codecogs.com/gif.latex?2), etc.); otherwise, print *Greater than 9* instead.

### Compilation and Execution

```bash
$ gcc -Wall -Werror -Wextra -pedantic conditional_statements.c -o conditional_statements

$ ./conditional_statements
```

### Sample Input

```
5
```

### Sample Output
```
five
```

### Sample Input 1

```
8
```

### Sample Output 1

```
eight
```

### Sample Input 2

```
44
```

### Sample Output 2

```
Greater than 9
```

**Author:** [Abhiranjan Kumar](https://www.hackerrank.com/profile/abhiranjan)

**Difficulty:** Easy

**Max Score:** 10
