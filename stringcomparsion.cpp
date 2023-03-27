#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char str1[30];
    char str2[30];

    cout<<"Enter first string "<<endl;
    gets(str1);

    cout<<"Enter second string "<<endl;
    gets(str2);

    if(strcmp(str1,str2)==0)
    {
        cout<<"Strings are equal "<<endl;
    }
    else
    {
        cout<<"Strings are not equal "<<endl;
    }

    return 0;
}
