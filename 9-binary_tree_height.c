#include "binary_trees.h"
/**
 * binary_tree_height - function
 * @tree: pointer to the root node of the tree
 * Return: 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i, j;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	i = binary_tree_height(tree->left), j = binary_tree_height(tree->right);

	if (i >= j)
		return (i + 1);
	else
		return (j + 1);
}
