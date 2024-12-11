differences in type deduction between decltype and auto:
1. decltype respects top level const.
2. auto keyword deduces the data type by variable initialization,
   while the decltype use the type of variable/expression.