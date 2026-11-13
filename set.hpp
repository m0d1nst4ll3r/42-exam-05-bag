#pragma once

#include "searchable_bag.hpp"

class set
{
 public:
	set(searchable_bag& sb);
	set(const set& src);
	set &operator=(const set &other);
	~set();

	bool has(int) const;
	void insert (int);
	void insert (int *, int);
	void print() const;
	void clear();

	searchable_bag& get_bag();

private:
	searchable_bag&	sb;
};