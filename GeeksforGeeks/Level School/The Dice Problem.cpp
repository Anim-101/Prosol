#include<iostream>

using namespace std;

int main()
{

    int test;

    cin >> test;

    int arr[test];

    for(int i = 0; i < test; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < test; i++)
    {
        if(arr[i] == 1)
        {
            cout << "6" << endl;
        }
        else if(arr[i] == 2)
        {
            cout << "5" << endl;
        }
        else if(arr[i] == 3)
        {
            cout << "4" << endl;
        }
        else if(arr[i] == 4)
        {
            cout << "3" << endl;
        }
        else if(arr[i] == 5)
        {
            cout << "2" << endl;
        }
        else if(arr[i] == 6)
        {
            cout << "1" << endl;
        }
    }

    return 0;
}
