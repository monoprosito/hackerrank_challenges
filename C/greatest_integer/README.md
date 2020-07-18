### Problem

In this challenge, you will learn simple usage of functions in C. Functions are a bunch of statements glued together. A function is provided with zero or more arguments, and it executes the statements on it. Based on the return type, it either returns nothing (void) or something.

A sample syntax for a function is

```
return_type function_name(arg_type_1 arg_1, arg_type_2 arg_2, ...) {
    ...
    ...
    ...
    [if return_type is non void]
        return something of type `return_type`;
}
```

For example, a function to read four variables and return the sum of them can be written as

```C
int sum_of_four(int a, int b, int c, int d) {
    int sum = 0;
    sum += a;
    sum += b;
    sum += c;
    sum += d;
    return sum;
}
```

### Task

You have to write a function *int max_of_four(int a, int b, int c, int d)* which reads four arguments and returns the greatest of them.

```
+= : Add and assignment operator. It adds the right operand to the left operand and assigns the result to the left operand.

a += b is equivalent to a = a + b;
```

### Input Format

Input will contain four integers - ![equation](https://latex.codecogs.com/gif.latex?a%2C%20b%2C%20c%2C%20d), one in each line.

### Output Format

Print the greatest of the four integers.

**Note:** I/O will be automatically handled.

### Compilation and Execution

```bash
$ gcc -Wall -Werror -Wextra -pedantic greatest_integer.c -o greatest_integer

$ ./greatest_integer
```

### Sample Input

```
3
4
6
5
```

### Sample Output

```
6
```

**Author:** [Abhiranjan Kumar](https://www.hackerrank.com/profile/abhiranjan)

**Difficulty:** Easy

**Max Score:** 10
