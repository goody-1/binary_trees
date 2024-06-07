#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 *
 * Return: pointer to the new node or NULL on failure
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	/* recursive calls to delete tree, starting from its children*/
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
