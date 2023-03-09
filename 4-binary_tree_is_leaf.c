#include "binary_trees.h"

/**
 * binary_tree_is_leaf - The prototype funct.
 * @node: The address to the node to check
 * Return: Always 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
binary_tree_t *root;
root = node;
if (root == NULL)
	return (0);
if (root->left == NULL && root->right == NULL)
	return (1);
root->left;
root->right;
return (0);
}
