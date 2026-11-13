#include "searchable_array_bag.hpp"

bool searchable_array_bag::has(int search) const
{
	for (int i = 0; i < size; i++) {
		if (data[i] == search)
			return true;
	}
	return false;
}