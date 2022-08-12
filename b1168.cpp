#include <iostream>
 
using namespace std;
 
int main() {

    int n, i, j, len, count;
    string num;
    count = 0;
    cin>>n;
        for (i = 0; i < n; i++)
        {
            cin>>num; 
            len = num.size();
            for (j = 0; j < len; j++)
            {
                if (num[j] == '1')
                {
                    count+=2;
                }

                else if (num[j] == '2' || num[j] == '3' || num[j] == '5')
                {
                    count+=5;
                }

                else if (num[j] == '4')
                {
                    count+=4;
                }

                else if (num[j] == '7')
                {
                    count+=3;
                }

                else if (num[j] == '8')
                {
                    count+=7;
                }

                else if (num[j] == '6' || num[j] == '9' || num[j] == '0')
                {
                    count+=6;
                }             
            }

            cout << count << " leds" << endl;
            count = 0;
        }

    return 0;
}