In my opinion, the only way to check if p points to 
a valid object is 
    if (p != nullptr)
but this way doesn't work 100%. Some times p points 
to a valid object, but after that the object is freed,
that means p now points to a invalid object