#include "binary_trees.h"

/**
 * binary_tree_size - The prototype
 * @tree: The root
 *
 * Return: 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
size_t size = 0;

if (tree == NULL)
	return (0);
if (tree)
{
size += 1;
size += binary_tree_size(tree->left);
size += binary_tree_size(tree->right);
}
return (size);
}
