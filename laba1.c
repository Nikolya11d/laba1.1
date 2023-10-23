#include<stdio.h>
#include<math.h>
float z(float x,float y)
{
    float q = ((7.38906)*(pow(cos(y),3))/log(fabs(x/y)));
    float w =(sin(pow((x*x*x*x*x)/y+1,1/4))-(1/(pow(x,1/3))));
    if (q>w&&q>w) return q;
    if (w>q&&w>q) return w;
}
int main()
{
    for(float x=1;x<=3;x+=1.3)
{
    for(float y=2;y<=4;y+=1.5)
{
    printf("x=%f y=%f z(x,y)=%f/n",x,y,z(x,y));
}
}
}