### Problem

he fundamental data types in c are int, float and char. Today, we're discussing int and float data types.

The *printf()* function prints the given statement to the console. The syntax is *printf("format string",argument_list);*. In the function, if we are using an integer, character, string or float as argument, then in the format string we have to write %d (integer), %c (character), %s (string), %f (float) respectively.

The *scanf()* function reads the input data from the console. The syntax is *scanf("format string",argument_list);*. For ex: The *scanf("%d",&number)* statement reads integer number from the console and stores the given value in variable ![equation](https://latex.codecogs.com/gif.latex?number).

To input two integers separated by a space on a single line, the command is scanf("%d %d", &n, &m), where ![equation](https://latex.codecogs.com/gif.latex?n) and ![equation](https://latex.codecogs.com/gif.latex?m) are the two integers.

### Task

Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

1. Declare ![equation](https://latex.codecogs.com/gif.latex?4) variables: two of type int and two of type float.

2. Read ![equation](https://latex.codecogs.com/gif.latex?2) lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your ![equation](https://latex.codecogs.com/gif.latex?4) variables.

3. Use the ![equation](https://latex.codecogs.com/gif.latex?&plus;) and ![equation](https://latex.codecogs.com/gif.latex?-) operator to perform the following operations:
    - Print the sum and difference of two int variable on a new line.
    - Print the sum and difference of two float variable rounded to one decimal place on a new line.

### Input Format

The first line contains two integers.

The second line contains two floating point numbers. 

### Constraints

- ![equation](https://latex.codecogs.com/gif.latex?1%20%5Cleq) integer variables ![equation](https://latex.codecogs.com/gif.latex?%5Cleq%2010%5E%7B4%7D)

- ![equation](https://latex.codecogs.com/gif.latex?1%20%5Cleq) float variables ![equation](https://latex.codecogs.com/gif.latex?%5Cleq%2010%5E%7B4%7D)

### Output Format

Print the sum and difference of both integers separated by a space on the first line, and the sum and difference of both float (scaled to ![equation](https://latex.codecogs.com/gif.latex?1) decimal place) separated by a space on the second line.

### Compilation and Execution

```bash
$ gcc -Wall -Werror -Wextra -pedantic sum_and_difference.c -o sum_and_difference

$ ./sum_and_difference
```

### Sample Input

```
10 4
4.0 2.0
```

### Sample Output

```
14 6
6.0 2.0
```

### Explanation

When we sum the integers ![equation](https://latex.codecogs.com/gif.latex?10) and ![equation](https://latex.codecogs.com/gif.latex?4), we get the integer ![equation](https://latex.codecogs.com/gif.latex?14). When we subtract the second number ![equation](https://latex.codecogs.com/gif.latex?4) from the first number ![equation](https://latex.codecogs.com/gif.latex?10), we get ![equation](https://latex.codecogs.com/gif.latex?6) as their difference.

When we sum the floating-point numbers ![equation](https://latex.codecogs.com/gif.latex?4.0) and ![equation](https://latex.codecogs.com/gif.latex?2.0), we get ![equation](https://latex.codecogs.com/gif.latex?6.0). When we substract the second number ![equation](https://latex.codecogs.com/gif.latex?2.0) from the first number ![equation](https://latex.codecogs.com/gif.latex?4.0), we get ![equation](https://latex.codecogs.com/gif.latex?2.0) as their difference.

**Author:** [Mahak Bagha](https://www.hackerrank.com/profile/mahak_bagha1)

**Difficulty:** Easy

**Max Score:** 5
