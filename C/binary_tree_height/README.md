### Problem

The height of a binary tree is the number of edges between the tree's root and its furthest leaf. For example, the following binary tree is of height ![equation](https://latex.codecogs.com/gif.latex?2):

![Binary Tree](https://s3.amazonaws.com/hr-assets/0/1527626183-88c8070977-isitBSTSample0.png)

### Function Description

Complete the getHeight or height function in the editor. It must return the height of a binary tree as an integer.

getHeight or height has the following parameter(s):

- root: a reference to the root of a binary tree.

**Note:** The Height of binary tree with single node is taken as zero.

### Input Format

The first line contains an integer ![equation](https://latex.codecogs.com/gif.latex?n), the number of nodes in the tree.

Next line contains ![equation](https://latex.codecogs.com/gif.latex?n) space separated integer where ![equation](https://latex.codecogs.com/gif.latex?i)th integer denotes node[i].data.

**Note:** Node values are inserted into a binary search tree before a reference to the tree's root node is passed to your function. In a binary search tree, all nodes on the left branch of a node are less than the node value. All values on the right branch are greater than the node value.

### Constraints

- ![equation](https://latex.codecogs.com/gif.latex?1%20%5Cleq%20node.data%5Bi%5D%20%5Cleq%2020)

- ![equation](https://latex.codecogs.com/gif.latex?1%20%5Cleq%20n%20%5Cleq%2020)

### Output Format

Your function should return a single integer denoting the height of the binary tree.

### Compilation and Execution

```bash
$ gcc -Wall -Werror -Wextra -pedantic binary_tree_height.c -o binary_tree_height

$ ./binary_tree_height
```

### Sample Input

![Binary Tree](https://s3.amazonaws.com/hr-assets/0/1527625966-0f80a8e1a4-treeDepthSample0.png)

### Sample Output

```
3
```

### Explanation

The longest root-to-leaf path is shown below:

![Binary Tree](https://s3.amazonaws.com/hr-assets/0/1527626088-807ca5fc63-treeDepthSample1.png)

There are ![equation](https://latex.codecogs.com/gif.latex?4) nodes in this path that are connected by ![equation](https://latex.codecogs.com/gif.latex?3) edges, meaning our binary tree's ![equation](https://latex.codecogs.com/gif.latex?height%20%3D%203).

**Author:** [Vatsal Chanana](https://www.hackerrank.com/profile/vatsalchanana)

**Difficulty:** Easy

**Max Score:** 10
