#include <iostream>
#include <string>
using namespace std;


void decrypt(char* str,char* cln)
{
    int i=0;
    int j=0;
    while(*(str+i)!='\0')
    {
        if(*(str+i)>='a' && *(str+i) <='z')
        {
            *(cln+j)=*(str+i);
            j++;
        }
        i++;
    }
    *(cln+j)='\0';
}

string decryptS(string str)
{
    string cln="";
    int i=0;
    int j=0;
    for(char&c : str)
    {
        if(c>='a' && c<='z')
        {
            cln+=c;
        }
        i++;
    }
    
   return cln;
   
}

int main()
{
    char p[100];
    cout<<"dwse text"<<endl;
    cin>>p;
    char cln[100];
    decrypt(p,cln);
    cout<<endl<<"me char pinaka"<<endl;
    cout<<cln<<endl;

    cout<<endl<<"me string"<<endl;

    string str;
    str=p;
    cout<<decryptS(str);
}