#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: pointer to the root node
 *
 * Return: size.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 0;

	if (tree == NULL)
	{
		return (0);
	}

	s = binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right);

	return (s);
}
