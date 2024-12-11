int f() {
    string s;
    //...
    return s;
}

// problem: s is a local variable of s, when the
// function done executing the s will be freed along side the 
// function.

f2(int i) {}        

// problem: no return type

int calc(int v1, int v1)

// problem: two arguments have the same name

double square(double x) return x * x;

// problem: no curly bracket