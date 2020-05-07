#include<iostream> 
#include<cstring>
#include<stdlib.h>
#include<time.h>
using namespace std;

void encrypt(char (*str)[100], int *a) 
{ 
    int i,k;
    char str1[100],str2[100];
    
    k=*a;
    strcpy(str1,*str);
    strcpy(str2,str1);
    
    srand(time(0));
    
    for(i=0;i<k;i++) 
    { 
        str1[i]=str1[i] + rand() + i + k; 
    } 
    
    cout<<"\n The encoded string is : "; 
    
    for(i=0;i<k;i++) 
    { 
        cout<<str1[i]; 
    }
    
    cout<<"\n The proper string is : "; 
    
    for(i=0;i<k;i++)
    {
        cout<<str2[i];
    }
    
    cout<<endl;
} 

int main() 
{
    while(1)
    {
        char str[100];
    
        cout<<"\n Enter an string : "; 
        cin.getline(str,100); 
        
        int len=strlen(str); 
    
        encrypt(&str,&len);
    }
    
    return 0;
} 

/*
 My program will resets it's Encryption for  
 every loop cycle, even for the same words.
*/