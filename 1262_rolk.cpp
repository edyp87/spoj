#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 0, k = 0;
    vector<int> list;

    cin >> n >> k;
    while (n--)
    {
        int listElem;
        cin >> listElem;
        if ( list.size() != k )
        {
           list.push_back(listElem); 
        }
        else
        {
            cout << listElem << " ";
        }
    }

    for (int i = 0; i < list.size(); ++i)
    {
        cout << list[i] << " ";
    }

    cout << endl;
}
