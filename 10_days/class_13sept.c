#include<stdio.h>
int main()
{

int i1=0 , b1 = 1,nxt;

for(int i=0;i<=20;i++){
    printf("%d\n",i1);
    nxt=i1+b1;
    i1=b1;
    b1=nxt;
    
    
}
return 0 ;


}