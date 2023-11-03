#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 *
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t had_child = 0;

	if (tree)
	{
		had_child += binary_tree_nodes(tree->left);
		had_child = tree->right || tree->left ? 1 + had_child : had_child;
		had_child += binary_tree_nodes(tree->right);
	}
	return (had_child);
}