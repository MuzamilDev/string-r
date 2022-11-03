#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[20];
    int i;

    cout<<"Enter String "<<endl;
    cin>>str;

    for(i=0; i<strlen(str); i++)
        if(str[i]>=96&&str[i]<=122)

        str[i]=str[i]-32;
        cout<<"The Upper case of String is "<<str<<endl;

    return 0;
}
