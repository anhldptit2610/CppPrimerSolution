int main()
{
int i = 0, &r1 = i;         // valid
double d = 0, &r2 = d;      // valid
r2 = 3.14159;               // valid
r2 = r1;                    // valid
i = r2;                     // valid
r1 = d;                     // valid
}