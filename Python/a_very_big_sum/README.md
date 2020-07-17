### Problem

Calculate and print the sum of the elements in an array, keeping in mind that some of those integers may be quite large.

### Function Description

Complete the aVeryBigSum function in the editor below. It must return the sum of all array elements.

aVeryBigSum has the following parameter(s):

- ar: an array of integers .

### Input Format

The first line of the input consists of an integer ![equation](https://latex.codecogs.com/svg.latex?n).

The next line contains ![equation](https://latex.codecogs.com/svg.latex?n) space-separated integers contained in the array. 

### Output Format

Print the integer sum of the elements in the array.

### Constraints

![equation](https://latex.codecogs.com/gif.latex?1%20%5Cleq%20n%20%5Cleq%2010)
![equation](https://latex.codecogs.com/gif.latex?0%20%5Cleq%20ar%5Bi%5D%20%5Cleq%2010%5E%7B10%7D)

### Sample Input

```
5
1000000001 1000000002 1000000003 1000000004 1000000005
```

### Output

```
5000000015
```

### Note:

The range of the 32-bit integer is ![equation](https://latex.codecogs.com/gif.latex?%28-2%5E%7B31%7D%29%5C%3Ato%5C%3A%282%5E%7B31%7D%20-%201%29%5C%3Aor%5C%3A%5B-2147483648%2C2147483647%5D).

When we add several integer values, the resulting sum might exceed the above range. You might need to use long long int in C/C++ or long data type in Java to store such sums.

*Author:* [Vatsal Chanana](https://www.hackerrank.com/profile/vatsalchanana)
*Difficulty:* Easy
*Max Score:* 10
