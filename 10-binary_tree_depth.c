#include "binary_trees.h"
/**
 * binary_tree_depth - function
 * @tree: pointer to the node
 * Return: 0 if NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = 0, j = 0;

	if (!tree || !tree->parent)
		return (0);

	i = j = binary_tree_depth(tree->parent);

	if (i >= j)
		return (i + 1);
	else
		return (j + 1);
}
