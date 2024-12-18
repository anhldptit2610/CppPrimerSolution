/*
    Exercise 6.28: In the second version of error_msg that has an ErrCode
    parameter, what is the type of elem in the for loop?
*/

/* solution */

/*
    in the 2nd version of error_msg, there is elem:

    void error_msg(ErrCode e, initializer_list<string> il)
    {
        cout << e.msg() << ": ";
        for (const auto &elem : il)
            cout << elem << " " ;
        cout << endl;
    }

    elem here would be a iterator, a const reference to the element
    of the initializer list(actually it's not a iterator, it's const std::string &)
*/