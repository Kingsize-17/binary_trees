#include "binary_trees.h"

/**
 * binary_tree_delete - The function that deletes an entire binary tree
 * @tree: The pointer to the root node of the tree to delete
 * Description: If tree is NULL, do nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}