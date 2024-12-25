/*
    Exercise 7.28: What would happen in the previous exercise if the return
    type of move, set, and display was Screen rather than Screen&?
*/

/* solution */

// When the return type of Move, Set, Display was Screen instead of
// Screen&, and we use the return value for further action, then the
// object we "take action" is the temporary one, not the object that
// call the methods. Return a reference makes further operation correct
// behavior