/*
    Exercise 6.19: Given the following declarations, determine which calls are
    legal and which are illegal. For those that are illegal, explain why.
*/
double calc(double);
int count(const string &, char);
int sum(vector<int>::iterator, vector<int>::iterator, int);
vector<int> vec(10);

/* solution */

(a) calc(23.4, 55.1);                   // illegal. calc requires only 1 parameters
(b) count("abcda", 'a');                // illegal. "abcda" is a literal string
(c) calc(66);                           // legal
(d) sum(vec.begin(), vec.end(), 3.8);   // legal