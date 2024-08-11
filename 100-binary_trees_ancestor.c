#include "binary_trees.h"
/**
 * binary_trees_ancestor - func
 * @first: var
 * @second: var
 * Return: null
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *i, *j;

	if (!first || !second)
		return (NULL);

	i = (binary_tree_t *)first;

	while (i)
	{
		j = (binary_tree_t *)second;
		while (j)
		{
			if (i == j)
				return (i);
			j = j->parent;
		}
		i = i->parent;
	}
	return (NULL);
}
