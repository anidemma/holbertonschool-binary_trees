#include "binary_trees.h"
/**
 * binary_tree_leaves - func
 * @tree: tree
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
