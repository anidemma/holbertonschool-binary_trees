#include "binary_trees.h"
size_t binaryTree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - func
 * @tree: tree
 * Return: balance value
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t i = 0, j = 0;

	if (!tree)
		return (0);
	
	i = binaryTree_height(tree->left), j = binaryTree_height(tree->right);
	return (i - j);
}
/**
 * binaryTree_height - func
 * @tree: tree
 * Return: height of tree
 */
size_t binaryTree_height(const binary_tree_t *tree)
{
	size_t i = 0, j = 0;

	if (!tree)
		return (0);
	
	i += binaryTree_height(tree->left), j += binaryTree_height(tree->right);
	
	if (i > j)
		return (i + 1);
	else
		return (j + 1);
}
