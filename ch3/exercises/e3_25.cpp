#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    std::vector<unsigned> scores(11, 0);
    unsigned grade;

    while (cin >> grade) {
        if (grade <= 100) {
#if 0
            ++scores[grade / 10];
#else
            auto i = scores.begin() + grade / 10;
            (*i)++;
#endif
        }
    }
    cout << "Clustering the grade: ";
    for (auto i : scores)
        cout << i << ' ';
    cout << endl;
    return 0;
}