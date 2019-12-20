#include<iostream>
#include<cmath>

using namespace std;

int main(){    
    double d,v,u,t1,t2;
    int n;
    
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>d>>v>>u;
        
        if(v>=u || u==0 || v==0){
            printf("Case %d: can't determine\n",i);
            continue;
        }
        
        t1=d/u;
        t2=d/sqrt(u*u-v*v);
        
        printf("Case %d: %.3lf\n",i,fabs(t2-t1));
    }
}
