#include "binary_trees.h"
/**
 * binary_tree_size - function
 * @tree: pointer to the root node of the tree
 * Return: 0 if NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
