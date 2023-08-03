#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

void print_unordered_set(unordered_set<int> a)
{
    /*Iterator for going through the set*/
    for (auto it = a.begin(); it != a.end(); it++)
    {
        cout << *it << ' ';
    }
}

int main()
{
    /*---------Declaration---------*/
    unordered_set<int> num;
    unordered_set<string> str;

    /*---------Insert---------*/
    num.insert(1);
    num.insert(2);
    print_unordered_set(num);

    str.insert("abcd");
    str.insert("efgh");

    // cout << ".begin()" << num.begin();

    return 0;
}