#include "binary_trees.h"

/**
 * binary_tree_depth- measures the depth of a node in a binary tree
 * @tree: pointer to the node of the tree to measure the height
 *
 * Return: height of the binary tree or 0 if NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		tree = tree->parent;
		depth++;
	}

	return (depth);
}
