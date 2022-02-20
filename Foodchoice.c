#include<stdio.h>
int main()
{
	int ch;
	printf("Food Menu:\n1. Pizza,Rs 239\n2. Burger,Rs 129\n3. Pasta,Rs 179\n4. French Fries,Rs 99\n5. Sandwich,Rs 149\n");
	printf("Enter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
			printf("Food item - Pizza\nPrice - 239");
			break;
		}
		case 2:
		{
			printf("Food item - Burger\nPrice - 129");
			break;
		}
		case 3:
		{
			printf("Food item - Pasta\nPrice - 179");
			break;
		}
		case 4:
		{
			printf("Food item - French Fries\nPrice - 99");
			break;
		}
		case 5:
		{
			printf("Food item - Sandwich\nPrice - 149");
			break;
		}
		default:
		{
	        printf("Invalid choice");
	  }
	}
	return 0;
}
