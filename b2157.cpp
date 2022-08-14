#include <iostream>
#include <string>

using namespace std;

int main()
{
    int c, i, j, e, b, len;
    string str;
    cin>>c;
    while (c--)
    {
        cin>>e>>b;
        for (i = e; i <=b; i++)
        {
            cout<<i;
            str+= to_string(i);
        }

        len = str.size();
        for (j = len -1; j >= 0; j--)
        {
            cout<<str[j];
        }
        str.clear();
        cout<<endl;
    }
    
    return 0;
}
