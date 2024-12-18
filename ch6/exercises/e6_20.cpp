/*
    Exercise 6.20: When should reference parameters be references to const?
    What happens if we make a parameter a plain reference when it could be a
    reference to const?
*/

/* solution */

/* 
    we should use reference to const whenever the object to be referenced
    is large and copying it is wasting memory; also we don't modify the content
    of the object.

    when we make a parameter a plain reference when it could be a reference 
    to const, maybe the people who use the function would think that reference
    can be modified while it's not; also, not making it reference to const while
    accidentally modifying it could be a disaster.    
*/