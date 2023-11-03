#include <stddef.h>
#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 0 if tree is NULL.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	int left_is_full = binary_tree_is_full(tree->left);
	int right_is_full = binary_tree_is_full(tree->right);

	return (left_is_full && right_is_full);
}
