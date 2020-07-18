### Problem

You are given a pointer to the root of a binary tree. You need to print the level order traversal of this tree. In level order traversal, we visit the nodes level by level from left to right. You only have to complete the function. For example:

```
     1
      \
       2
        \
         5
        /  \
       3    6
        \
         4
```

For the above tree, the level order traversal is 1 -> 2 -> 5 -> 3 -> 6 -> 4.

### Input Format

You are given a function,

```C
void levelOrder(Node * root) {

}
```

### Constraints

- ![equation](https://latex.codecogs.com/gif.latex?1%20%5Cleq%20nodes%5C%2Cin%5C%2Cthe%5C%2Ctree%20%5Cleq%20500)

### Output Format

Print the values in a single line separated by a space.

### Compilation and Execution

```bash
$ gcc -Wall -Werror -Wextra -pedantic binary_tree_level_order_traversal.c -o binary_tree_level_order_traversal

$ ./binary_tree_level_order_traversal
```

### Sample Input

```
     1
      \
       2
        \
         5
        /  \
       3    6
        \
         4
```

### Sample Output

```
1 2 5 3 6 4
```

### Explanation

We need to print the nodes level by level. We process each level from left to right.

Level Order Traversal: 1 -> 2 -> 5 -> 3 -> 6 -> 4.

**Author:** [Vatsal Chanana](https://www.hackerrank.com/profile/vatsalchanana)

**Difficulty:** Easy

**Max Score:** 20
