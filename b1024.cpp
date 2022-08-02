#include<stdio.h>
#include <cstring>
int main()
{
    int i, j, n, len, revlen;
    char c[1001], c2[1002]; //Initialize string...
    scanf("%d",&n);
    getchar(); //gets() will be used...
    
    for (i = 0; i < n; i++) //number of test cases...
    {
        gets(c);
        len = strlen(c); //length of my String from gets...
        
        for(j = 0; j < len; j++)
        {
           //printf("Printing each character: %c\n", c[j]);
           if((c[j] >= 'A' && (c[j] <= 'Z') || (c[j] >= 'a') && c[j] <= 'z'))
           {
                c[j] += 3; //Shifting each character to 3 char, a becomes d...
                printf("Printing the string: %s\n", c);
           }
        }
        //loop for reversing the string
        revlen = len - 1; //The array of the string positioned from at 0 to(len-1),
        for (j = 0; j < len; j++)
        {
            c2[j] = c[revlen]; //Last char becomes the first and reversed...
            printf("Rev each char: %c\n", c2[j]);
            revlen--; 
            printf("Printing the rev Str: %s\n", c2);
        }
        
    }
    
    // printf("The value is : %d\n", a);
    // printf("Default Bin is Set\n");
    // printf("working perfectly, Alhamdulillah...");
    return 0;
}