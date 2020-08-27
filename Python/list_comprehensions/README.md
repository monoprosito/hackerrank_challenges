### Problem

Let's learn about list comprehensions! You are given three integers ![equation](https://latex.codecogs.com/gif.latex?x%2C%20y) and ![equation](https://latex.codecogs.com/gif.latex?z) representing the dimensions of a cuboid along with an integer ![equation](https://latex.codecogs.com/gif.latex?n). Print a list of all possible coordinates given by ![equation](https://latex.codecogs.com/gif.latex?%28i%2C%20j%2C%20k%29) on a 3D grid where the sum of ![equation](https://latex.codecogs.com/gif.latex?i%20&plus;%20j%20&plus;%20k) is not equal to ![equation](https://latex.codecogs.com/gif.latex?n). Here, ![equation](https://latex.codecogs.com/gif.latex?0%20%5Cleq%20i%20%5Cleq%20x%3B%200%20%5Cleq%20j%20%5Cleq%20y%3B%200%20%5Cleq%20k%20%5Cleq%20z). Please use list comprehensions rather than multiple loops, as a learning exercise.

### Example

![equation](https://latex.codecogs.com/gif.latex?x%20%3D%201)
![equation](https://latex.codecogs.com/gif.latex?y%20%3D%201)
![equation](https://latex.codecogs.com/gif.latex?z%20%3D%202)
![equation](https://latex.codecogs.com/gif.latex?n%20%3D%203)

All permutations of ![equation](https://latex.codecogs.com/gif.latex?%5Bi%2C%20j%2C%20k%5D) are:

![equation](https://latex.codecogs.com/gif.latex?%5B%5B0%2C%200%2C%200%5D%2C%20%5B0%2C%200%2C%201%5D%2C%20%5B0%2C0%2C2%5D%2C%20%5B0%2C1%2C0%5D%2C%20%5B0%2C1%2C1%5D%2C%20%5B0%2C1%2C2%5D%2C%20%5B1%2C0%2C0%5D%2C%20%5B1%2C0%2C1%5D%2C%20%5B1%2C0%2C2%5D%2C%5B1%2C1%2C0%5D%2C%20%5B1%2C1%2C1%5D%2C%20%5B1%2C1%2C2%5D%5D).

Print an array of the elements that do not sum to ![equation](https://latex.codecogs.com/gif.latex?n%20%3D%203).

![equation](https://latex.codecogs.com/gif.latex?%5B%5B0%2C%200%2C%200%5D%2C%20%5B0%2C%200%2C%201%5D%2C%20%5B0%2C%200%2C%202%5D%2C%20%5B0%2C1%2C0%5D%2C%20%5B0%2C1%2C1%5D%2C%20%5B1%2C0%2C0%5D%2C%20%5B1%2C0%2C1%5D%2C%20%5B1%2C1%2C0%5D%2C%20%5B1%2C1%2C2%5D%5D)

### Input Format

Four integers ![equation](https://latex.codecogs.com/gif.latex?x%2C%20y%2C%20z) and ![equation](https://latex.codecogs.com/gif.latex?n), each on a separate line.

### Constraints

Print the list in lexicographic increasing order.

### Sample Input 0

```
1
1
1
2
```

### Sample Output 0

```
[[0, 0, 0], [0, 0, 1], [0, 1, 0], [1, 0, 0], [1, 1, 1]]
```

### Explanation 0

Each variable ![equation](https://latex.codecogs.com/gif.latex?x%2C%20y) and ![equation](https://latex.codecogs.com/gif.latex?z) will have values of ![equation](https://latex.codecogs.com/gif.latex?0) or ![equation](https://latex.codecogs.com/gif.latex?1). All permutations of lists in the form ![equation](https://latex.codecogs.com/gif.latex?%5Bi%2C%20j%2C%20k%5D%20%3D%20%5B%5B0%2C%200%2C%200%5D%2C%20%5B0%2C%200%2C%201%5D%2C%20%5B0%2C%201%2C%200%5D%2C%20%5B0%2C%201%2C%201%5D%2C%20%5B1%2C%200%2C%200%5D%2C%20%5B1%2C%200%2C%201%5D%2C%20%5B1%2C%201%2C%200%5D%2C%20%5B1%2C%201%2C%201%5D%5D).
Remove all arrays that sum to ![equation](https://latex.codecogs.com/gif.latex?n%20%3D%202) to leave only the valid permutations.

### Sample Input 1

```
2
2
2
2
```

### Sample Output 1

```
[[0, 0, 0], [0, 0, 1], [0, 1, 0], [0, 1, 2], [0, 2, 1], [0, 2, 2], [1, 0, 0], [1, 0, 2], [1, 1, 1], [1, 1, 2], [1, 2, 0], [1, 2, 1], [1, 2, 2], [2, 0, 1], [2, 0, 2], [2, 1, 0], [2, 1, 1], [2, 1, 2], [2, 2, 0], [2, 2, 1], [2, 2, 2]]
```
