/*
    Exercise 6.24: Explain the behavior of the following function. If there are
    problems in the code, explain what they are and how you might fix them.
*/

void print(const int ia[10])
{
    for (size_t i = 0; i != 10; ++i)
        cout << ia[i] << endl;
}

/* solution */

/*
    This function prints all elements of a array of 10 integer.
    (the ia will be treated as a pointer to int, which may have some
    problem if the caller passed an array whose size is smaller than 10.
    To solve this completely, we can use this:
        void print(const int (&ia)[10])     // a reference to array of 10 const integer
        {

        }
    )
*/