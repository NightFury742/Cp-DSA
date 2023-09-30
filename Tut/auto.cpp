#include <bits/stdc++.h>
using namespace std;

int main()
{
    auto a = 1; // auto keyword dynamically detects the datatype
    cout << a << endl;
    vector<int> v = {2, 3, 4, 5, 6};

    for (auto it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << endl;
    }

}