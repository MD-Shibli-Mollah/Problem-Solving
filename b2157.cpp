#include <iostream>
#include<string>

using namespace std;

int main()
{
    int c, i, j, e, b, wl, strlen;
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

        strlen = str.size();
        for (j = strlen -1; j >= 0; j--)
        {
            cout<<str[j];
        }
        str.clear();
    }
    
    return 0;
}
