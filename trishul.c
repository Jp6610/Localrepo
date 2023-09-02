#include<stdio.h>

int main()
{
	int i,j;
	
	for(i=1;i<=13;i++)
	{
		for(j=1;j<=13;j++)
		{
			if(j==7)
			{
				printf("*");

			}
			 else if((i==3)&&(j==4||j==5||j==6||j==8||j==9||j==10))
			{
				printf("*");
			}
		       else if((i==1||i==2||i==3)&&(j==3||j==11))
			{
				printf("*");
			}
			else if((i==1)&&(j==1||j==2||j==12||j==13))
			{
				printf("*");
			}
			else{
				printf(" ");
			}

		}


		printf("\n");

	}
	return 0;


}