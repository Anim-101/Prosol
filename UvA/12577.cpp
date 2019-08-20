/* Problem Id : 12577
   Problem    : Hajj-e-Akbar
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    int count = 0;

    string val;

    cin >> val;

    while(val != "*")
    {
        count++;

        if(val == "Hajj")
        {
            cout << "Case " << count  << ": Hajj-e-Akbar" << endl;
        }
        else if(val == "Umrah")
        {
            cout << "Case " << count  << ": Hajj-e-Asghar" << endl;
        }

        cin >> val;
    }

    return 0;
}
