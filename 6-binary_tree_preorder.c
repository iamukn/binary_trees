#include "binary_trees.h"
/**
 *binary_tree_preorder - The prototype
 *
 *@tree: the root node pointer
 *
 *@func: the function to call for each node
 *
 *
 * Return: 0
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree && func)
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
return (0);
}
