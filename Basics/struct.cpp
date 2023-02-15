#include <bits/stdc++.h>
using namespace std;

struct str
{
    int a;
    char b;
};

int main()
{
    str a;
    cout << sizeof(a); // Here we expect the size of 'a' as 5 but here it is 4
    /*
    This is because of padding added to satisfy alignment constraints. Data structure alignment impacts both performance and correctness of programs:
    -Mis-aligned access might be a hard error (often SIGBUS).
    -Mis-aligned access might be a soft error.
        #Either corrected in hardware, for a modest performance-degradation.
        #Or corrected by emulation in software, for a severe performance-degradation.
        #In addition, atomicity and other concurrency-guarantees might be broken, leading to subtle errors.
    Src:https://stackoverflow.com/questions/119123/why-isnt-sizeof-for-a-struct-equal-to-the-sum-of-sizeof-of-each-member

    --Most of the compilers allocate pointer size as 8bytes
    */

    return 0;
}