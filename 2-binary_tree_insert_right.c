#include "binary_trees.h"
/**
 * binary_tree_insert_right - function
 * @parent: pointer to the node to insert the right-child
 * @value: value to store in the new node
 * Return: pointer to the created node, otherwise NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (!parent->right)
		new_node->right = NULL;
	else
	{
		new_node->right = parent;
		parent->right->parent = new_node;
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	parent->right = new_node;

	return (new_node);
}
