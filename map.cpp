#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> freq;
    freq["harsh"]++;
    freq["srikara"]++;
    freq["khushi"]++;
    freq["harsh"]++;
    cout << "the frequencies of the names is :";
    for (auto i = freq.begin(); i != freq.end(); i++)
    {
        cout << (*i).first << ": " << (*i).second << endl;
    }
    return 0;
}
