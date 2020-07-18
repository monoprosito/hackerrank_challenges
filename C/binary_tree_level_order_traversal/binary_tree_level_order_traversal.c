#include "binary_tree_level_order_traversal.h"

struct node* insert( struct node* root, int data ) {
	if(root == NULL) {
		struct node* node = (struct node*)malloc(sizeof(struct node));

		node->data = data;

		node->left = NULL;
		node->right = NULL;
		return node;

	} else {
		struct node* cur;

		if(data <= root->data) {
			cur = insert(root->left, data);
			root->left = cur;
		} else {
			cur = insert(root->right, data);
			root->right = cur;
		}

		return root;
	}
}

// Get the height of a tree
int getTreeHeight(struct node *root) {
    int heightLeft = 0, heightRight = 0;

    if (!root->left && !root->right)
        return 1;

    if (root->left) {
        heightLeft = 1 + getTreeHeight(root->left);
    }

    if (root->right) {
        heightRight = 1 + getTreeHeight(root->right);
    }

    return (heightLeft > heightRight) ? heightLeft : heightRight;
}

// Print all nodes at a given level
void printLevel(struct node *root, int level) {
    // If the root is not NULL
    if (root) {
        if (level == 1) {
            printf("%d ", root->data);
        } else {
            printLevel(root->left, level - 1);
            printLevel(root->right, level - 1);
        }
    }
}

// Print level order traversal of a tree
void levelOrder(struct node *root) {
    // Set iterable variable
    int i = 1;

    // Print from first level to last level
    for (; i <= getTreeHeight(root); ++i) {
        // Print each level
        printLevel(root, i);
    }
}

int main() {
	struct node* root = NULL;

	int t;
	int data;

	scanf("%d", &t);

	while(t-- > 0) {
		scanf("%d", &data);
		root = insert(root, data);
	}

	levelOrder(root);
	printf("\n");

	return 0;
}
