#include "searchable_tree_bag.hpp"
#include <cstddef>

bool searchable_tree_bag::has_node(node *current, int search)
{
	return (current != NULL && (current->value == search || has_node(current->l, search) || has_node(current->r, search)));
}

bool searchable_tree_bag::has(int search) const
{
	return has_node(tree, search);
}