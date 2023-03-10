#include "binary_trees.h"
/**
 * binary_tree_nodes - The prototype
 * @tree: Pointer to the root node
 * Return: Always 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t count = 0;
if (tree == NULL)
	return (0);
if (tree)
{
count += tree->left || tree->right ? 1 : 0;
count += binary_tree_nodes(tree->left);
count += binary_tree_nodes(tree->right);
}
return (0);
}
