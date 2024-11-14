#include<stdio.h>

int main()
{
	int i;
	int ans1,ans2,ans3,ans4,ans5;
	int point1,point2,point3,point4,point5,point6,point7,point8,point9,point10;
	int point01,point02,point03,point04,point05,point06,point07,point08,point09,point010;
	int total1,total2,total3;
	
	printf("Welcome to the game\n\n");
	
	printf("> press 7 to start the game\n");
	printf("> press 0 to quize the game\n");
	
	scanf("%d",&i);
	
	if(i==7)
	{
		printf("the game started\n\n");
	
	}	
	else if(i==0)
	{
		printf("the game has ended\n\n");
	}
	else
	{
		printf("Invalid\n\n");
	}
	if(i==7)
	{
		printf("1) Which one is the first search engine in internet?\n\n");
		printf("1) google\n");
		printf("2) Archie\n");
		printf("3) Wais\n");
		printf("4) Altavista\n");
		
		printf("Enter your answer :");
		scanf("%d",&ans1);
		
		if(ans1==2)
		{
			printf("correct answer\n");
			point1 = 5;
			printf("you have scored %d point\n", point1);
		}
		else
		{
			printf("Worng answer\n");
			point1 = 0;
			printf("you have scored %d point\n", point01);
		}
		printf("2) Which one is the fierst web browser invented in 1990?\n\n");
		printf("1) internet explorer\n");
		printf("2) mosaic\n");
		printf("3) mozilla\n");
		printf("4) nexus\n");
		
		printf("Enter your answer : ");
		scanf("%d",&ans2);
		
		if(ans2==4)
		{
			printf("Correct answer\n");
			point2 = 5;
			printf("you have sconed %d point\n", point2);
				
		}
		else
		{
			printf("wrong answer\n");
			point2 = 0;
			printf("you have scored %d point\n", point2);
		}
		printf("3) Firest computer virus is know as ?\n\n");
		printf("1) Rabbit\n");
		printf("2) creeper virus\n");
		printf("3) Elk cloner\n");
		printf("4) SCA virus\n");
		printf("enter your answer : ");
		scanf("%d", &ans3);
		
		if(ans3==2)
		{
			printf("correct answer\n");
			point3 = 5;
			printf("you have scored %d point\n", point3);
		}
		else
		{
			printf("wrong answer\n");
			point3 = 0;
			printf("you have scored %d point\n", point03);
			
		}
		
		printf("4) Firewall in computer is used for?\n\n");
		printf("1) Security\n");
		printf("2) Data transmission\n");
		printf("3) Monitoring\n");
		printf("4) Authentication\n");
		
		printf("enter your answer: ");
		scanf("%d",&ans4);
		
		if(ans4==1)
		{
			printf("correct answer\n");
			point4 = 5;
			printf("you have scored %d point\n", point4);
		}
		else
		{
			printf("Wrong Answer\n");
			point04 = 0;
			printf("you have scored % point\n", point04);
			
		}
		printf("5) Which of the following is not a database management software?\n\n");
		printf("1) mysql\n");
		printf("2) oracle\n");
		printf("3) cobal\n");
		printf("4) sybase\n");
		
		printf(" enter your answer : ");
		scanf("%d", &ans5);
		
		if(ans5==3)
		{
			printf("carrent answer\n");
			point5 = 5;
			printf("you have scored %d point\n", point05);
			
		}
		else
		{
			printf("wong answer\n");
			point05 = 0;
			printf("you have scored %d point\n", point05);
		}
	
	
              } 
              return 0;
              
}
