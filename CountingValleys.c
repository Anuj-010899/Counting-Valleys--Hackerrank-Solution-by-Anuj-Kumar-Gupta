#include<stdio.h>
#include<string.h>
main()
{

    int n,count=0,valley=0;
   
    scanf("%d",&n);
    char s[n];
     
    for(int i=0;i<n;i++)
    scanf("%s",&s[i]);
    
    for(int i=0;i<n;i++){
    if(s[i]=='U'||s[i]=='D')
    {
            if(s[i]=='D')
            count=count-1;
             if(s[i]=='U')
            {
            count=count+1;
            
            if(count==0)
            valley++;
            }
        
       
    }
    }
    printf("%d",valley);
}
