#include <iostream>
#include<string.h>

using namespace std;


char encoding(char a)
{
    int rem;
    int y=a;
    y=y*73;
    rem=y%26;
    int z=rem +65;
    
    char r=z;
    return r;
}


char decoding(char r)
{
    int x;char o;int q=r;
    int rem =q-65;
    for (int i=65;i<=90;i++)
    {
        if((i*73)-rem==((i*73)/26)*26) o=i;
    }
    
    return o;
}


int main()
{
    char word[25],code[25];char e;
    
    cout<<"If you want to encode,press 1"<<endl;
    cout<<"If you want to decode,press 2: ";
    cin>>e;
    cout<<"Enter the word(all alphabets in capital): ";
    cin>>word;
    int g=strlen(word);

    switch (e){


    case '1':
    for(int i=0;i<g;i++)
    {   int h=encoding(word[i]);
        char s;
        h=h+i;
        if(h>90) s=h-90+64;
        else s=h;
        code[i]=s;
        
    }
    cout<<"Encoded word: "<<code;
    break;
    

    case '2':
    
    for(int i=0;i<g;i++)
    {   char d;
        int l=word[i];
        l=l-i;
        if(l<65) d=91-65+l;
        else d=l;
        code[i]=decoding(d);
    }
    cout<<"Decoded word: "<<code;
    break;


    default :
    cout<<"Invalid Input";}


    cout<<endl<<endl;


    return 0;
}