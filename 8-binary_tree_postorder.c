#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_preorder - print elements of tree
 * using pre-order traversal
 * @tree: tree to traverse
 * @func: function to use
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
