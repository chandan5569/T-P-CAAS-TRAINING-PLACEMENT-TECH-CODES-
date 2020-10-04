#include<stdio.h>

int fact(int);

int comb(int,int);

void pascal(int);

/* defining factorial, combination and pascaltriangle function.
*/

int fact(int n)
{

int f=1;

while(n!=0)
{

f=f*n;

n--;
}

return (f);

}


int comb(int n,int r)
{

return (fact(n)/fact(n-r)/fact(r));

}

void pascal(int l)
{

int i,j,k,r;

for(i=1; i<=l; i++)
k=1; 
r=0;
{
for(j=1; j<=(2*l-1); j++)
{

if(j>=l+1-i && j<=l-1+i && k)
{

printf("%d",comb(i-1,r));

k=0;

r++;

}

else
{

printf(" ");

k=1;

}

}

printf("\n");
}
}

int main()

{

pascal(4);
return 0;
}



