#include "binary_trees.h"

/**
 * binary_tree_is_root - The prototype
 * @node: The address to the tree to traverse
 * Return: Always 0
 * Iam_UKN
 */

int binary_tree_is_root(const binary_tree_t *node)
{

if (node == NULL || node->parent != NULL)
	return (0);

return (1);
}
