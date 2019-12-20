#include <iostream>
#include<cmath>
using namespace std;

int main()
{
  long int count=1,n,cr=0,i,j;
    
    while(scanf("%ld",&n)==1)
    {
        
   
        if(n<0){
            break;
        }
        
        for(i=1; ; i++)
        {


            cr= pow(2,i);
            if(n ==1 )
            {
               printf("Case %ld: 0\n",count);
               break;
            }
            else if(cr>=n)
            {
                printf("Case %ld: %ld\n",count,i);
                break;
            }
        }
           
           
         count++;
        
        
        
    }
    

    return 0;
}

