/*
    Exercise 7.16: What, if any, are the constraints on where and how often an
    access specifier may appear inside a class definition? What kinds of members
    should be defined after a public specifier? What kinds should be private?
*/

/* solution */

Access specifier should appear only once in a class definition. If
multiple access specifier needed to maintain the readability, 
then it's recommended.

Anything which users need/are permitted to access should be placed
in the public specifier. On the contrast, anything which users don't need
or forbidden to access should be placed in the private specifier