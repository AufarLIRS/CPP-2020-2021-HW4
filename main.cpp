#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    //Task1
    string name;
    cin >> name;

    set<char> s;
    for (auto& i : name)
    {
        s.insert(i);
    }

    cout << (s.size() % 2 ? "IGNORE HIM!" : "CHAT WITH HER!");

    //Task2
    int n;
    cin >> n;

    multiset<int> num, num2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        num.insert(x);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        num.erase(num.find(x));
        num2.insert(x);
    }

    for (int i = 0; i < n - 2; i++)
    {
        int x;
        cin >> x;
        num2.erase(num2.find(x));
    }

        cout << *s.begin();
        cout << "\n";
        cout << *num2.begin();

    //Task3
    string str ="abcd";
    do
    {
        cout << str << "\n";
    }

    while (next_permutation(str.begin(), str.end()) );
}

