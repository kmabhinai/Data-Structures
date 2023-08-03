#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaration
    vector<int> v;
    v.push_back(1);    // emplace_back is comparatively faster than push_back cuz push_back creates new vector every time
    v.emplace_back(2); // https://www.geeksforgeeks.org/push_back-vs-emplace_back-in-cpp-stl-vectors/

    // Pair in Vector
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v1(5, 100); // {100,100,100,100,100}

    vector<int> v2(5); // {0,0,0,0,0} / any garbage values depends on the compiler

    vector<int> v3(5, 30);
    vector<int> v4(v3); // copies the v3 vector to v4

    // Iterator is used to iterate over the vector
    vector<int>::iterator it = v3.begin(); // Begin points the first element of the vector
    it++;
    cout << *(it) << " ";

    vector<int>::iterator it1 = v.end(); // End points to next to last element in the vector
    cout << *(--it1);

    return 0;
}