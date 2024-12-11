vector<int> v1;                     // unlimit
vector<int> v2(10);                 // 10 default-initialization value
vector<int> v3(10, 42);             // 10 int number which is 42
vector<int> v4{10};                 // only 1
vector<int> v5{10, 42};             // 4
vector<string> v6{10};              // illegal?? (actually 10 empty string)
vector<string> v7{10, "hi"}         // 10 "hi" string