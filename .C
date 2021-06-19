#include <stdio.h>
#include<math.h>


int main() {
int a,b,n;
int c=0;
int t;
scanf ("%d",&t);
while(t--){
    

scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&n);
c=a+pow(2,0)*b;
printf ("%d ",c);
for(int i=1;i<n;i++)
{
    
    c=c+pow(2,i)*b;
    
    printf ("%d ",c);
}
printf("\n");
}
    return 0;
}
