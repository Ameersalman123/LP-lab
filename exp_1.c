#include<stdio.h> 
int main()
{ 
    char patt[100];
    int state=0;
    int i=0;
    printf("Enter the string :\n");
    scanf("%s",patt);
    while(patt[i]!='\0')
    { 
        if(patt[i]=='a'&&state==0) 
            state=1;
        else if(patt[i]=='b'&&state==0) 
            state=0;
        else if(patt[i]=='a'&&state==1) 
            state=1;
        else if(patt[i]=='b'&&state==1) 
            state=2;
        else if(patt[i]=='a'&&state==2) 
            state=1;
        else if(patt[i]=='b'&&state==2) 
            state=3;
        else if(patt[i]=='a'&&state==3) 
            state=1;
        else if(patt[i]=='b'&&state==3) 
            state=0;
        else 
            state=4;
        i++;
    }
    if(state==3) 
        printf("VALID STRING!!!\n");
    else
        printf("INVALID STRING!!!\n");
} 
