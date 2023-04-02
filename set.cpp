#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<string> names;
    set<string> usn;
    string name, usns;
    cout << "enter the name and the usn of the student :";
    cin >> name;
    names.insert(name);
    cin >> usns;
    usn.insert(usns);
    cout << "the name is " << *names.begin() << endl;
    cout << "usn is " << *usn.begin() << endl;
    return 0;
}