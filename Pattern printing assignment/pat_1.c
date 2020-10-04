
#include<stdio.h>

int main()

{


int i,j,k=0;

for(i=1; i<=9; i++)

{

i<=5?k++:k--;

int t=k;

for(j=1; j<=9; j++)

{

if(j==k || j==10-k)

printf("%d",t);

else
printf(" ");

}

printf("\n");

}
return 0;
}
