#include "binary_trees.h"

/**
 * binary_tree_postorder - The prototype
 * @tree: The root
 * @func: The function that accesses the root
 * Return: 0
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (func && tree)
{
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
}
