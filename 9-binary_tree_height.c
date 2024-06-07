#include "binary_trees.h"
size_t max(size_t a, size_t b);

/**
 * binary_tree_height- measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the binary tree or 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	/* Recursively calculate the height of the left and right subtrees */
	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	/*
	 * Return the maximum height between the left and right subtrees,
	 * plus 1 for the current node
	*/
	return (max(left_height, right_height));
}

/**
 * max - choose the greater of two numbers
 * @a: first number to compare
 * @b: second number to compare
 *
 * Return: return the greater number
 */
size_t max(size_t a, size_t b)
{
	return ((a > b) ? a : b);
}
