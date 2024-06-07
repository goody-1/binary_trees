#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to parent of node
 * @value: value of node
 *
 * Return: pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return NULL;

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = parent->right;

	if (parent->right)
		parent->right->parent = new_node;

	parent->right = new_node;

	return new_node;
}
