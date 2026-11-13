#include "set.hpp"
#include "searchable_bag.hpp"

set::set(searchable_bag& sb)
: sb(sb)
{}

set::set(const set& src)
: sb(src.sb)
{}

set& set::operator=(const set &other)
{
	if (this != &other)
		sb = other.sb;
	return *this;
}

set::~set()
{}

bool set::has(int search) const
{
	return sb.has(search);
}

void set::insert(int a)
{
	if (!sb.has(a))
		sb.insert(a);
}

void set::insert(int *a, int b)
{
	for (int i = 0; i < b; ++i)
	{
		if (!sb.has(a[i]))
			sb.insert(a[i]);
	}
}

void set::print() const
{
	sb.print();
}

void set::clear()
{
	sb.clear();
}

searchable_bag& set::get_bag()
{
	return sb;
}