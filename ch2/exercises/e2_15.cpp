int ival = 1.01;    // valid
int& rval1 = 1.01;  // invalid. Can't initialize a reference to a literal
int& rval2 = ival;  // valid
int& rval3;         // invalid. Reference must be initialized immediately