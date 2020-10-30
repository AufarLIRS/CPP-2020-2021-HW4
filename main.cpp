#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    //task 1
    set <char> a;
    string name;
    cin >> name;
    for(unsigned i = 0; i < name.size(); i++) {
        a.insert(name[i]);
    }
    if(a.size() % 2 != 0) {
        cout << "IGNORE HIM!" << endl;
    }
    else{
        cout << "CHAT WITH HER!" << endl;
    }

    //task 2
    int size;
    cin >> size;

    multiset<int> set1;
    for(int i = 0; i < size; i++){
        int number;
        cin >> number;
        set1.insert(number);
    }
    multiset<int> set2;
    for(int i = 0; i < size-1; i++){
        int number;
        cin >> number;
        set2.insert(number);
    }
    multiset<int> set3;
    for(int i = 0; i < size-2; i++){
        int number;
        cin >> number;
        set3.insert(number);
    }
    vector<int> answer(2);
    set_difference(set1.begin(), set1.end(),set3.begin(),set3.end(),answer.begin());
    cout << answer[0] << endl;
    cout << answer[1] << endl;


    //task 3
    char abcd[] = "abcd";
    do
    cout << abcd << '\t';
    while (next_permutation(abcd, abcd + 4));
    cout << endl;

    return 0;
}
