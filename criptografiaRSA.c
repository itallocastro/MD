#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
int primo(int a)
{
	int contador=0,inicia;
	if(a % 2 ==0 || a==1)
	{
		return 0;
	}
	else if(a==2)
	{
		return 1;
	}
	else
	{
		for(i=3;i<=sqrt(a);i+=2)
		{
			if(a%i==0)
			{
				contador++;
			}
		}
		if(contador==0)
		{
			return 1;
		}
		
		return 0;
		
	}
}
int mdc(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return mdc(b,a%b);
	}
}
int combinacaolinear(long long int a,long long int b,quocientes[],resposta[])
{
	
}