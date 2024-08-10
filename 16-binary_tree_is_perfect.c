#include "binary_trees.h"
int find_depth_left(const binary_tree_t *tree);
int isPerfect(const binary_tree_t *tree, int depth, int level);
/**
 * binary_tree_is_perfect - func
 * @tree: tree
 * Return: perfect or not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int check, depth, level = 0;

	if (tree == NULL)
		return (0);
	depth  = find_depth_left(tree);
	check = isPerfect(tree, depth, level);
	return (check);
}
/**
 * find_depth_left - func
 * @tree: tree
 * Return: depth of left branch
 */
int find_depth_left(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (1 + find_depth_left(tree->left));
}
/**
 * isPerfect - func
 * @tree: tree
 * @depth: depth
 * @level; level
 * rETURN; perfect or not
 */
int isPerfect(const binary_tree_t *tree, int depth, int level)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (depth == (level + 1));
	if (!tree->left || !tree->right)
		return (0);
	return (isPerfect(tree->left, depth, level + 1) &&
		isPerfect(tree->right, depth, level + 1));
}
