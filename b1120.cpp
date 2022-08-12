#include <iostream>
 
using namespace std;
 
int main() {
 
    char c;  //Read character only
    string s; //Read String only
    int i, j, len, flag;

    while (cin>>c)
    {
        cin>>s;
        len = s.size();
        //cout<<"the size is: "<<len;
        flag = 0; //This coiunt is to print 0 if only 0 0 as input...
        if (c == '0' && s[0] == '0')
        {
           break;
        }

        for (i = 0; i < len; i++)
        {
            if (s[i] == '0')
            {
                if (flag !=0)
                {
                    cout<<s[i];
                }
                
            }
            else if (s[i] != c)
            {
                cout<<s[i];
                flag = 1;
            }
        }  
        if (flag == 0)
        {
            cout<<'0'<<endl;
        }
        else
        {
            cout<<endl;
        }
    
    }
    return 0;
}