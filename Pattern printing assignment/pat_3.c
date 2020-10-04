
#include<stdio.h>

int main()

{


int i,j,k;

for(i=1; i<=7; i++)

{

/* we are assinging new variable that is K with the values 1 2 3 4 3 2 1 with respect to variable i. */

i<=4?k++:k--;

int n=k+1;

k<=4?n++:n--;

for(j=1; j<=4; j++)

{

if(j>=1 && j<=k)
{

printf(" %d ",n);

}
else
{
printf(" ");

/* we are decreasing the value after row 4. */

if(k==4)
n--;

}

}
printf("\n");

}
return 0;
}
