#include <iostream>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

void task1() {
    cout << "Enter name" << endl;
    string name;
    cin >> name;
    if (name.size()%2==0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

}
void task2() {
    int n = 0;
    cin >> n;
    int x;
    map<int, int> first;
    map<int, int> second;
    map<int, int> third;
    for(int i = 0; i < n; i++) {
        cin >> x;
        first[i]++;
    }
    for(int i = 0; i < n - 1; i++) {
        cin >> x;
        second[i]++;

    }
    for(int i = 0; i < n - 2; i++) {
        cin >> x;
        third[i]++;

    }
    for(auto key : first) {
        if (second.find(key.first) != second.end()) {
            if (key.second != first[key.first]) {
                cout << key.second;

    }
        else {
            cout << key.second;
            break;
            }
    }
    }
        for(auto key : second) {
            if (third.find(key.first) != third.end()) {
                if (key.second != third[key.first]) {
                    cout << key.second;

                }

            else {
                cout << key.second;
                break;
                }
        }
        }


}
void task3() {
    string s = "abcd";
    do
        {
            std::cout << s << "\n";
        }
        while (next_permutation(s.begin(), s.end()) );
}

int main()
{
    task1();
    task2();
    task3();
    return 0;
}