#include<stdio.h>
float func(float x,float y);
int main()
{
    float m1,m2,m3,m4,m,h=0.3;
    float x=0.3, y=5,xn;
    scanf("%f",&xn);
while(x<xn)
    {
        m1=func(x,y);
        m2=func((x+h/2.0),(y+m1*h/2));
        m3=func((x+h/2.0),(y+m2*h/2));
        m4=func((x+h),(y+m3*h));
        m=((m1+2*m2+2*m3+m4)/6);
        y=y+m*h;
        x=x+h;
    }
    printf("y=%f",y);
    return 0;
}
float func(float x,float y)
{
    float m;
    m=(x*(x+1)-3*y*y*y)/10;
    return m;
}
