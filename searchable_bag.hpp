#pragma once

#include "bag.hpp"

class searchable_bag : virtual public bag // virtual inheritance
{
 public:
	// No destructor as per current exam
	virtual bool has(int) const = 0; // verilen sayı bag'te var mı yok mu kontrolünü yapar
};
