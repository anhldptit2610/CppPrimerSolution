vector<vector<int>> ivec;           // a vector of vector of int
vector<string> svec = ivec;         // illegal, string != vector<int>
vector<string> svec(10, "null");    // legal, 10 "null" string
