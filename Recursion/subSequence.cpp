#include <bits/stdc++.h>
using namespace std;

void subSequence(int idx, vector<int> &arr, vector<int> &subSeq)
{
    if (idx == arr.size())
    {
        for (int i = 0; i < subSeq.size(); i++)
            cout << subSeq[i] << " ";
        if (subSeq.size() == 0)
            cout << "{}";
        cout << endl;
        return;
    }

    subSequence(idx + 1, arr, subSeq);
    subSeq.push_back(arr[idx]);
    subSequence(idx + 1, arr, subSeq);
    subSeq.pop_back();
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> subSeq;
    subSequence(0, arr, subSeq);
    return 0;
}