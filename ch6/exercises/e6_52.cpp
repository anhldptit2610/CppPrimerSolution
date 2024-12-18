/*
    Exercise 6.52: Given the following declarations,
    void manip(int, int);
    double dobj;
    what is the rank (§ 6.6.1, p. 245) of each conversion in the following calls?
    (a) manip('a', 'z');
    (b) manip(55.4, dobj);
*/

void manip(int, int);
double dobj;

manip('a', 'z');        // match through a promotion
manip(55.4, dobj);      // match through a promotion(actually a standard conversion)

