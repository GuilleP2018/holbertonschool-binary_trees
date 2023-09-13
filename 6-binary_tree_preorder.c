#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through binary tree in pre order traversal
 * @tree: pointer to the root node
 * @func: pointer to function to call nodes
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
