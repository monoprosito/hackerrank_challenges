### Problem

In this challenge, you will learn to implement the basic functionalities of pointers in C. A [pointer](http://en.wikipedia.org/wiki/Pointer_%28computer_programming%29) in C is a way to share a memory address among different contexts (primarily functions). They are primarily used whenever a function needs to modify the content of a variable, of which it doesn't have ownership.

In order to access the memory address of a variable, ![equation](https://latex.codecogs.com/gif.latex?val), we need to prepend it with ![equation](https://latex.codecogs.com/gif.latex?%5C%26) sign. E.g., *&val* returns the memory address of ![equation](https://latex.codecogs.com/gif.latex?val).

This memory address is assigned to a pointer and can be shared among various functions. E.g. ![equation](https://latex.codecogs.com/gif.latex?int%5E%7B*%7D%20p%20%3D%20%5C%26val) will assign the memory address of ![equation](https://latex.codecogs.com/gif.latex?val) to pointer ![equation](https://latex.codecogs.com/gif.latex?p). To access the content of the memory to which the pointer points, prepend it with a \*. For example, *\*p* will return the value reflected by ![equation](https://latex.codecogs.com/gif.latex?val) and any modification to it will be reflected at the source (![equation](https://latex.codecogs.com/gif.latex?val)).

```C
void increment(int *v) {
    (*v)++; 
}

int main() {
    int a;
    scanf("%d", &a);
    increment(&a);
    printf("%d", a);
    return 0;
}  
```

### Task

You have to complete the function *void update(int *a,int *b)*, which reads two integers as argument, and sets ![equation](https://latex.codecogs.com/gif.latex?a) with the sum of them, and ![equation](https://latex.codecogs.com/gif.latex?b) with the absolute difference of them.

- ![equation](https://latex.codecogs.com/gif.latex?a%5E%7B%27%7D%20%3D%20a%20&plus;%20b)

- ![equation](https://latex.codecogs.com/gif.latex?b%5E%7B%27%7D%20%3D%20%7Ca%20-%20b%7C)

### Input Format

The input will contain two integers, ![equation](https://latex.codecogs.com/gif.latex?a) and ![equation](https://latex.codecogs.com/gif.latex?b), separated by a newline.

### Output Format

You have to print the updated value of ![equation](https://latex.codecogs.com/gif.latex?a) and ![equation](https://latex.codecogs.com/gif.latex?b), on two different lines.

Note: Input/ouput will be automatically handled. You only have to complete the function described in the 'task' section.

### Compilation and Execution

```bash
$ gcc -Wall -Werror -Wextra -pedantic pointers.c -o pointers

$ ./pointers
```

### Sample Input
```
4
5
```

### Sample Output

```
9
1
```

### Explanation

- ![equation](https://latex.codecogs.com/gif.latex?a%5E%7B%27%7D%20%3D%204%20&plus;%205%20%3D%209)

- ![equation](https://latex.codecogs.com/gif.latex?b%5E%7B%27%7D%20%3D%20%7C4%20-%205%7C%20%3D%201)

**Author:** [Abhiranjan Kumar](https://www.hackerrank.com/profile/abhiranjan)

**Difficulty:** Easy

**Max Score:** 10
