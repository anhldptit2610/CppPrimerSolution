/*
    Exercise 7.30: It is legal but redundant to refer to members through the
    this pointer. Discuss the pros and cons of explicitly using the this pointer
    to access members.
*/

/* solution */

// pros: helps reader identify data members correctly if in the function 
//      we define variable which has the same name with object's member.
//      It also helps when we pass same type object to the method, like:
     
//      Compare(const Reference& b)
//      {
//         if (this->x != b.x)
//      }
// cons: it's redundant in most cases.