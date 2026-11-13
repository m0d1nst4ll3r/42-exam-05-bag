# 42 - Exam 05 - Bag CPP Exercise

Subject

```
sub.txt
```

Provided files

```
bag.hpp
searchable_bag.hpp
array_bag.hpp
array_bag.cpp
tree_bag.hpp
tree_bag.cpp
main.cpp
```

My added files

```
searchable_array_bag.hpp
searchable_array_bag.cpp
searchable_tree_bag.hpp
searchable_tree_bag.cpp
set.hpp
set.cpp
```

Notice:

- Provided files were ripped off of another repo, and modified to match current exam05 state, notably:
    - As of this repo creation date, this exercise in exam05...
    - ... provides abstract classes with no virtual destructors
    - ... provides a main with no delete at the end
    - Hence these lines were removed from the ripped files
    - Consequently, compiling the files as-is and running valgrind on the output yield definitely losts _and_ indirectly losts (because of missing `clear()`)
    - This is a mistake in current exam05, we leave it as-is

Solve explanation:

- Part 1 requires combining `searchable_bag` with `array` and `tree` versions
    - Simply have to recode the `has()` function with array/tree logic with diamond inheritance
- Part 2 requires _wrapping_ the `searchable_bag` class to disallow duplicate values
    - _Wrapping_ means encapsulating the class function calls into your own function calls
    - `set` consequently does not derive from any other class, it just `wraps`
    - `get_bag()` getter function call in main hints towards `set` class holding its own bag reference
    - `get_bag()` name could mean the function should return a `bag&`, I arbitrarily opted for `searchable_bag&`

LLM use: none
