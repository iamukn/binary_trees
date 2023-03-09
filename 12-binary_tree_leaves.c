#include "binary_trees.h"

/**
 * binary_tree_leaves - The prototype
 * @tree: The root
 * Return: 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t count = 0;

if (tree == NULL)
	return (0);
if (tree->left != NULL || tree->right != NULL)
{
count += 1;

}
