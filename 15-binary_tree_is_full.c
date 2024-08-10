#include "binary_trees.h"
/**
 * binary_tree_is_full - func
 * @tree - tree
 * Return: if tree is full or not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
  if (!tree)
    return (0);
  if (!tree->left && !tree->right)
    return (1);

  if (tree->left && tree->right)
    return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
