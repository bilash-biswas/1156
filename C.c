#include<stdio.h>
int main()
{
    int i,j;
    double sum=0;
    for(i=1,j=1;j<=39;i=i*2,j=j+2)
    {
        sum=sum+j/(double)i;
    }
    printf("%.2lf\n",sum);

    return 0;
}
