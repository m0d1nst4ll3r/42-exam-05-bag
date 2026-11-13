#pragma once

class bag {
 public:
	// No destructor as per current exam
	virtual void insert (int) = 0;
	virtual void insert (int *, int) = 0;
	virtual void print() const = 0;
	virtual void clear() = 0;
};
