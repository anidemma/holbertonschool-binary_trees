#include "binary_trees.h"
/**
 * binary_tree_node - function
 * @parent: pointer to parent node
 * @value: value to put in new node
 * Return: pointer to the new node, NULL otherwise
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;

	if (parent)
	{
		if (value < parent->n)
			parent->left = new_node;
		else
			parent->right = new_node;
	}
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
