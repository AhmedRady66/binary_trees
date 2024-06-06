#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes.
 * @tree: pointer to the root node.
 *
 * Return: nodes.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		n = 1;
	}
	n += binary_tree_nodes(tree->left);
	n += binary_tree_nodes(tree->right);

	return (n);
}
