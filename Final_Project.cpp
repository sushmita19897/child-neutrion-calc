#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
int main();
void facts();
void password();
void screenheader();
void start();
void knc();

int g=8;
struct ncalc
{
	char name[30];
	int amugm;
	int cal;
	float fat_gm;
	float sod_mg;
	float carb_gm;
	float prot_gm;
	int nvalue();
}food[10]={
		{
			"apple",100,52,0.2,1,14,0.3
		},
		{
			"banana",100,89,0.3,1,23,1.1
		},
		{
			"orange",100,47,0.1,0,12,0.9
		},
		{
			"spinach",100,47,0.4,79,3.6,2.9
		},
		{
			"potato",100,77,0.1,6,17,2
		},
		{
			"cauliflower",100,25,0.3,30,5,1.9
		},
		{
			"rice",100,130,0.3,1,28,2.7
		},
		{
			"oats",100,389,7,2,66,17
		},
		{
			"noodles",100,138,2.1,5,25,4.5
		}
	};
	void facts()
{  char s[100]; int c;
	time_t a;
    time(&a);
	int b=a%10;
	printf("\nWELCOME TO DAILY FACTS\n\n");	


	switch(b)
	{ printf("\nFact of the day is::->  ");
		case 0:printf("Added Sugar Is a Disaster");
		break;
		case 1:printf("Omega-3 Fats Are Crucial and Most People Don't Get Enough");
		break;
		case 2:printf("Artificial Trans Fats Are Very Unhealthy and Should Be Avoided");
		break;
		case 3:printf("Eating Vegetables Will Improve Your Health");
		break;
		case 4:printf("It Is Critical to Avoid a Vitamin D Deficiency");
		break;
		case 5:printf("Refined Carbohydrates Are Bad for You");
		break;
		case 6:printf("Supplements Can Never Fully Replace Real Foods");
		break;
		case 7:printf("Unprocessed Food Is Healthiest");
		break;
		case 8:printf("Some Fats Are Good");
		break;
		case 9:printf("Sugary Drinks Are The Most Fattening Aspect of The Modern Diet");
		break;
		case 10:printf(" Weight Loss Supplements Almost Never Work");
		break;
	
	}

getch();
screenheader();
}
void screenheader()
 { 
   printf("\n\n");
   printf("\n                              ::     @@@@@@@@@@@@@@@@@@@@@@@     ::");
   printf("\n                              ::     @                     @     ::");
   printf("\n                              ::     @      WELCOME TO     @     ::");
   printf("\n                              ::     @                     @     ::");
   printf("\n                              ::     @    my PROJECT       @     ::");
   printf("\n                              ::     @                     @     ::");
   printf("\n                              ::     @@@@@@@@@@@@@@@@@@@@@@@     ::");
   printf("\n\n\n");
   getch();
 start();
 }
void start()
{

	 printf("\nHELLO EVERYONE! WELCOME TO MY PROJECT OF C PROGRAMMING");
 printf("\n\nTOPIC : KIDS NUTRIENT CALCULATOR");
 printf("\n\nName:    ");
 printf("\n\nSection: ");
 printf("\n\nRoll No.:");
 printf("\n\nReg No.:   ");
	getch();
knc();
	
}
void knc()
{
int sel;
ncalc cal;
	printf("\n\n\t\t\t\t<<<<<--KIDS NUTRIENT CALCULATOR-->>>>>\n\n");
    printf("Compare kids daily nutrient intake vs recommended intake\n\npress enter to continue.....!");
    getch();
    cal.nvalue();
}
int ncalc :: nvalue()
{
	system("CLS");
	int cal1[10];
	float fat_gm1[10];
	float sod_mg1[10];
	float carb_gm1[10];
	float prot_gm1[10];
	int i=0,k=0,h=0,result;
	char ch1[30],ch2[30];
	int amu[20];
	char nm[20][30];
	int index[20];
	char ch;
	printf("enter valid food that you had today !!\n\n");
	for(;;)
	{
	printf("Name\n");
	scanf("%s",&nm[i]);
    printf("\nAmount in gm \n");
    scanf("%d",&amu[i]);
	printf("that's all ---press Y or any other key to continue !!!s\n\n");
	scanf("%s",&ch);
	i+=1;
	if(ch=='y')
	{
		break;
	}
    }
	for(int j=0;j<i;j++) // retrieving from dictionary
	{
		strcpy(ch1,nm[j]);
		for(int l=0;l<g;l++)
		{
		
			strcpy(ch2,food[l].name);
		  result=strcmp(ch1,ch2);
			if(result==0)
			{
				index[h]=l;
				h+=1;
			}
		}
	}
	for(int j=0;j<h;j++)
	{
		
		cal1[j]=amu[j]*food[index[j]].cal;
		fat_gm1[j]=amu[j]*food[index[j]].fat_gm;
		sod_mg1[j]=amu[j]*food[index[j]].sod_mg;
		carb_gm1[j]=amu[j]*food[index[j]].carb_gm;
		prot_gm1[j]=amu[j]*food[index[j]].prot_gm;
	}
	int t_cal=0;
	float t_fat=0,t_sod=0,t_carb=0,t_prot=0;
	for(int j=0;j<h;j++)
	{
		t_cal=t_cal+cal1[j];
		t_fat=t_fat+fat_gm1[j];
		t_sod=t_sod+sod_mg1[j];
		t_carb=t_carb+carb_gm1[j];
		t_prot=t_prot+prot_gm1[j];
	}
	printf("\t\t consumed nutrients\n ");
	printf("\ncalorie=%d\nfat=%fgm\nsodium=%fmg\ncarbohydrate=%fgm\nprotein=%fgm\n\n",t_cal/100,t_fat/100,t_sod/100,t_carb/100,t_prot/100);
	printf("\t\t recommended nutrients\n ");
	printf("\ncalorie=%s\nfat=%dgm\nsodium=%dmg\ncarbohydrate=%dgm\nprotein=%dgm\n\n","1600-2500",65,2400,300,60);
	printf("Press 1 TO enter New Values , or any other key to exit");
	int choice;
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:knc();
		break;
		default:exit(0);
		break;
	}
	
}

int main()
{
	facts();

}
