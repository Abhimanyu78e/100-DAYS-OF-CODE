//Area=x1×(y2−y3)+x2×(y3−y1)+x3×(y1−y2)

#include<stdio.h>
int main()
{
int x1,x2,x3,y1,y2,y3,a;
printf("Enter the value of x1:");
scanf("%d",&x1);
printf("Enter the value ofy1:");
scanf("%d",&y1);
printf("Enter the value ofx2:");
scanf("%d",&x2);
printf("Enter the value of y2:");
scanf("%d",&y2);
printf("Enter the value ofx3:");
scanf("%d",&x3);
printf("Enter the value of y3:");
scanf("%d",&y3);
a=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
if (a==0){
    printf("The points are collinear..");
}
else{
    printf("The points is not collinear");
}
return 0;






}
