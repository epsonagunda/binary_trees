#include "binary_trees.h"
/**
 * binary_tree_insert_left - a function that deletes an entire binary tree
 * @tree: is a pointer to the root node of the tree to delete
 * Return: do nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}

}
