#include "binary_trees.h"

/**
 * binary_tree_inorder - The prototype
 * @tree: The root
 * @func: The function that accesses the member of the root
 * Return: Always 0
 * IamUKN
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree && func)
{
binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}

}
