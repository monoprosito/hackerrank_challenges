### Problem

The provided code stub will read in a dictionary containing key/value pairs of name:[marks] for a list of students. Print the average of the marks array for the student name provided, showing 2 places after the decimal.

### Example

![equation](https://latex.codecogs.com/gif.latex?marks%5C%3Akey%3Avalue%5C%3Apairs%5C%3Aare)

![equation](https://latex.codecogs.com/gif.latex?%27alpha%27%3A%20%5B20%2C30%2C40%5D)

![equation](https://latex.codecogs.com/gif.latex?%27beta%27%3A%20%5B30%2C50%2C70%5D)

![equation](https://latex.codecogs.com/gif.latex?query%5C_name%20%3D%5C%3A%27beta%27)

The **query_name** is 'beta'. beta's average score is ![equation](https://latex.codecogs.com/gif.latex?%2830%20&plus;%2050%20&plus;%2070%29/3%20%3D%2050.0)

### Input Format

The first line contains the integer ![equation](https://latex.codecogs.com/gif.latex?n), the number of students records. The next ![equation](https://latex.codecogs.com/gif.latex?n) lines contain the names and marks obtained by a student, each value separated by a space. The final line contains **query_name**, the name of a student to query.

### Constraints

- ![equation](https://latex.codecogs.com/gif.latex?2%20%5Cleq%20n%20%5Cleq%2010)
- ![equation](https://latex.codecogs.com/gif.latex?0%20%5Cleq%20marks%5Bi%5D%20%5Cleq%20100)
- ![equation](https://latex.codecogs.com/gif.latex?length%5C%3Aof%5C%3Amarks%5C%3Aarrays%3D3)

### Output Format

Print one line: The average of the marks obtained by the particular student correct to 2 decimal places.

### Sample Input 0

```
3
Krishna 67 68 69
Arjun 70 98 63
Malika 52 56 60
Malika
```

### Sample Output 0

```
56.00
```

### Explanation 0

Marks for Malika are ![equation](https://latex.codecogs.com/gif.latex?%5C%7B52%2C%2056%2C%2060%5C%7D) whose average is ![equation](https://latex.codecogs.com/gif.latex?%5Cfrac%7B52%20&plus;%2056%20&plus;%2060%7D%7B3%7D%20%5CRightarrow%2056)

### Sample Input 1

```
2
Harsh 25 26.5 28
Anurag 26 28 30
Harsh
```

### Sample Output 1

```
26.50
```
