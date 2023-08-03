#include <bits/stdc++.h>
#include "Patterns/allPatterns.cpp"

int main()
{
    int t, pattern;
    cout << "Enter the number of test cases: ";
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cout << "Enter the pattern number : ";
        cin >> pattern;
        switch (pattern)
        {
        case 1:
            pattern1();
            break;
        case 2:
            pattern2();
            break;
        case 3:
            pattern3();
            break;
        case 4:
            pattern4();
            break;
        case 5:
            pattern5();
            break;
        case 6:
            pattern6();
            break;
        case 7:
            pattern7();
            break;
        case 8:
            pattern8();
            break;
        case 9:
            pattern9();
            break;
        default:
            break;
        }
    }
    return 0;
}