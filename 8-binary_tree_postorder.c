#include "binary_trees.h"
<<<<<<< HEAD
=======
#include <stdlib.h>
>>>>>>> 3fbf57d8426230b8f883e6de298a3344e3dab3f3
/**
 * binary_tree_preorder - print elements of tree
 * using pre-order traversal
 * @tree: tree to traverse
 * @func: function to use
 * Return: Nothing
 */
<<<<<<< HEAD
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
		func(tree->n);
	}
=======
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
>>>>>>> 3fbf57d8426230b8f883e6de298a3344e3dab3f3
}
