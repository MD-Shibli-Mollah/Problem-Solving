#include <iostream>

using namespace std;

int main()
{
    int i, j, len;
    char c[50];
    while(cin.getline(c,50)){
        j = 0;
        for (i = 0; i < 50; i++)
        {
            if (c[i] == '\0')
            {
                break;
            }
            if (c[i] != ' ')
            {   
                j++; //increment the character only without space.......
                if((c[i] < 96) && (j%2 == 0))  //the ascii of lower a is 97(lowercase alphabets – 97 to 122.)
                {
                    c[i]+=32;
                    //cout<<c[i];
                }
                else if((c[i] > 96) && (j%2 == 1)) //the ascii of UPPER A is 65(uppercase alphabets – 65 to 90.)
                {
                    c[i]-=32;     //First character will be uppercase......
                    //cout<<c[i];
                }
            }
        }
        cout<<c<<endl;
    }
    

    return 0;
}
