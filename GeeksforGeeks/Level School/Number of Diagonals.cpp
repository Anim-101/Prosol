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

    int num;

    for(int i = 0; i < test; i++)
    {
        num = 0;

        num = (arr[i] * (arr[i] - 3)) / 2;

        cout << num;

        if(i != test - 1)
        {
            cout << endl;
        }
    }

    return 0;
}
