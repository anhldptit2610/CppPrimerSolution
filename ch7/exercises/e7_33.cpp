/*
    Exercise 7.33: What would happen if we gave Screen a size member
    defined as follows? Fix any problems you identify.

    pos Screen::size() const
    {
        return height * width;
    }
*/

/* solution */

pos Screen::size() const
{
    return height *width;
}

/*
    The problem here is pos appears before scope operator
    Screen:: appears. Therefore, the compiler doesn't know that
    pos comes from pos, and if it doesn't find any symbol named
    pos outside of Screen, it will yield an error. We can do this:

    Screen::pos Screen::size() const
    {
        return height * width;
    }
*/