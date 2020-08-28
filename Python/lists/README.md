### Problem

Consider a list (list = []). You can perform the following commands:

1. **insert i e**: Insert integer ![equation](https://latex.codecogs.com/gif.latex?e) at position ![equation](https://latex.codecogs.com/gif.latex?i).
2. **print**: Print the list.
3. **remove e**: Delete the first occurrence of integer ![equation](https://latex.codecogs.com/gif.latex?e).
4. **append e**: Insert integer ![equation](https://latex.codecogs.com/gif.latex?e) at the end of the list.
5. **sort**: Sort the list.
6. **pop**: Pop the last element from the list.
7. **reverse**: Reverse the list.

Initialize your list and read in the value of ![equation](https://latex.codecogs.com/gif.latex?n) followed by ![equation](https://latex.codecogs.com/gif.latex?n) lines of commands where each command will be of the ![equation](https://latex.codecogs.com/gif.latex?7) types listed above. Iterate through each command in order and perform the corresponding operation on your list.

### Example

![equation](https://latex.codecogs.com/gif.latex?N%20%3D%204)

![equation](https://latex.codecogs.com/gif.latex?append%5C%3A1)

![equation](https://latex.codecogs.com/gif.latex?append%5C%3A2)

![equation](https://latex.codecogs.com/gif.latex?insert%5C%3A3%5C%3A1)

![equation](https://latex.codecogs.com/gif.latex?print)

- **append 1**: Append **1** to the list, ![equation](https://latex.codecogs.com/gif.latex?arr%20%3D%20%5B1%5D).
- **append 2**: Append **2** to the list, ![equation](https://latex.codecogs.com/gif.latex?arr%20%3D%20%5B1%2C%202%5D)
- **insert 3 1**: Insert ![equation](https://latex.codecogs.com/gif.latex?3) at index ![equation](https://latex.codecogs.com/gif.latex?1), ![equation](https://latex.codecogs.com/gif.latex?arr%20%3D%20%5B1%2C%203%2C%202%5D)
- **print**: Print the array.

### Output

```
[1, 3, 2]
```

### Input Format

The first line contains an integer, ![equation](https://latex.codecogs.com/gif.latex?n), denoting the number of commands.

Each line ![equation](https://latex.codecogs.com/gif.latex?i) of the ![equation](https://latex.codecogs.com/gif.latex?n) subsequent lines contains one of the commands described above.

### Constraints

- The elements added to the list must be integers

### Output Format

For each command of type **print**, print the list on a new line.

### Sample Input 0

```
12
insert 0 5
insert 1 10
insert 0 6
print
remove 6
append 9
append 1
sort
print
pop
reverse
print
```

### Sample Output 0

```
[6, 5, 10]
[1, 5, 9, 10]
[9, 5, 1]
```
