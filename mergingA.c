#include<stdio.h>

int main()
{
    int a[500],s,n,m,i,j,b[500];
    printf("Enter size of arrray a & b");
    scanf("%d%d",&m,&n);
    printf("Enter array 1");
    for(i=0;i<m;++i)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter array 2");
    for( j=0;j<n;++j)
    {
        scanf("%d",&b[i]);
    }
    printf("Array after merging");
    for( i=m,j=0;i<m+n;++i,++j)
    {
        a[i]=b[j];
    }
    for( i=0;i<n+m;++i)
    {
        printf("ARRAY is\n%d\t",&a[i]);
    }
    return 0;
}
