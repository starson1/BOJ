#include<stdio.h>
#include<algorithm>
using namespace std;

int arr[1111];
int main(void)
{
    int n;
    int res =0;
    scanf("%d",&n);
    fflush(stdin);
    for(int i=0;i<n;i++)
    {
        scanf("%c",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]=='E'&&arr[i+1]=='W')
            res+=1;
    }
    printf("%d",res);

    return 0;
}
