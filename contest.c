#include<stdio.h>
#include<math.h>
int main(){
float x1,y1,x2,y2,x3,y3,xp,yp,temp1,temp2,temp3;
while(scanf(" %f %f %f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3,&xp,&yp)==8){
temp1=sqrt(pow(fabs(x1-xp),2)+pow(fabs(y1-yp),2));
temp2=sqrt(pow(fabs(x2-xp),2)+pow(fabs(y2-yp),2));
temp3=sqrt(pow(fabs(x3-xp),2)+pow(fabs(y3-yp),2));
if(temp1<temp2&&temp1<temp3)
    printf("%.3f",temp1);
else if(temp2<temp1&&temp2<temp3)
    printf("%.3f",temp2);
else if(temp3<temp2&&temp3<temp1)
    printf("%.3f",temp3);
}
return 0;
}
