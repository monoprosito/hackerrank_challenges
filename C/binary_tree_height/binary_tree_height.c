#include "binary_tree_height.h"

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

int getHeight(struct node* root) {
	int heightLeft = 0, heightRight = 0;

	if (!root || (!root->left && !root->right))
		return 0;

	if (root->left) {
		heightLeft = 1 + getHeight(root->left);
	}

	if (root->right) {
		heightRight = 1 + getHeight(root->right);
	}

	return (heightLeft >= heightRight) ? heightLeft : heightRight;
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

	printf("%d\n", getHeight(root));
	return 0;
}
