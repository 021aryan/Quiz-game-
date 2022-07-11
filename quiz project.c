#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void mat();
void his();
void ani();
void geo();
void space();
void cor();
void wro();
void score(int);
int main()
     {
     int topic;
    
     char choice;
     
    
     
     printf("\t\t\t   C PROGRAM QUIZ \n");
     printf("\n\t\t________________________________________");
     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t     TO ");
     printf("\n\t\t\t   THE QUIZ ");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     scanf(" %c",&choice);
     choice=toupper(choice); // toupper= if user inputs r in lowercase it gets converted into uppercase
      system("clear");
     if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
        printf("\t\t\t Select your Topic:");
        printf("\n\t\t\t   Press 1 to select Basic Maths Quiz\n");
        printf("\t\t\t   Press 2 to select History Quiz\n");
        printf("\t\t\t   Press 3 to select Animal Kingdom Quiz\n");
        printf("\t\t\t   Press 4 to select Geography Quiz\n");
        printf("\t\t\t   Press 5 to select Quiz about The Space\n");
        scanf("%d",&topic);
        system("clear");
        
        
        switch(topic)
        {
            case 1: mat();break;
            case 2: his();break;
            case 3: ani();break;
            case 4: geo();break;
            case 5: space(); break;
        }
    }
    return 0;
}
void cor()
{
    system("clear");
     int i,num, lower = 1, upper = 4, count = 1;
  
    
    srand(time(NULL));
  
 
    for (i = 0; i < count; i++) {
         num = (rand() %
           (upper - lower + 1)) + lower;
    }
    printf("%d",num);
    switch(num)
    {
        case 1:printf("\t\tNice\n\n");break;
        case 2:printf("\t\tVery good\n\n");break;
        case 3:printf("\t\tExcellent\n\n");break;
        case 4:printf("\t\tPerfect\n\n");break;
    }

}
void wro()
{       
        system("clear");
         int i,num, lower = 1, upper = 4, count = 1;
  
    
    srand(time(NULL));
  
 
    for (i = 0; i < count; i++) {
         num = (rand() %
           (upper - lower + 1)) + lower;
    }
    switch(num)
    {
        case 1:printf("\t\tBetter luck next time\n\n");break;
        case 2:printf("\t\tBad luck\n\n");break;
        case 3:printf("\t\tOops,its wrong\n\n");break;
        case 4:printf("\t\tWrong answer\n\n");break;
    }
}
void score(int p)
{
    switch(p)
    {
        case 0: printf("\t\t\t Excuse me, Are you taking this seriously?");
        break;
        case 1: printf("\t\t\t Atleast you tried. They say 1 is the loneliest number.");
        break;
        case 2: printf("\t\t\t You need improvement. Better luck next time.");break;
        case 3: printf("\t\t\t Halfway there. I believe you can do better.");break;
        case 4: printf("\t\t\t Good Job. Almost a perfect score.");break;
        case 5: printf("\t\t\t PERFECT SCORE!!");break;
    }
}

//maths
void mat()
{
    int r,i,p=0;
    char ans;
    printf("\t\t\t   You chose Basic Maths Quiz\n\t\t\tThere will be 5 Questions \n");
    printf("\t\t\t   Rememember to answer only with lower or uppercase A B C or D");
     for(i=0;i<5;i++){
     r=i;
     system("clear");
     switch(r)
     {
    case 0 : 
        printf("\nQ1. 0.003 × 0.02 = ?\n");
		printf("\n\nA. 0.06\t\tB. 0.006\n\nC. 0.0006\tD. 0.00006");
		printf("\nYour Answer: ");
		scanf(" %c",&ans);
		ans=toupper(ans);
			if (ans=='D')
			{
			    cor();
			    p++;
			    
			    break;
            }
		    else
		    {
		           wro();
		       break;
		   }
    case 1 : 
        printf("\n\n2. What is the average of the numbers: 4, 10, 5, and 1 ?");
		printf("\n\nA. 4\t\tB. 3\n\nC. 5\t\tD. 20");
		printf("\nYour Answer: ");
		scanf(" %c",&ans);

		ans=toupper(ans);
			if (ans=='C')
			{
			    cor();
			    p++;
			    break;
            }
		    else
		    {
		           wro();
		       break;
		   }
    case 2 : 
        printf("\n\n3. What is the percentage rate of discount if a car which was priced at $4,000 was sold for $3,200 ?");
		printf("\n\nA. 14\t\tB. 16\n\nC. 18\t\tD. 20");
		printf("\nYour Answer: ");
		scanf(" %c",&ans);

		ans=toupper(ans);
			if (ans=='D')
			{
			    cor();
			    p++;
			    break;
            }
		    else
		    {
		           wro();
		       break;
		   }
    case 3 : 
        printf("\n\n4. |–5| + |5| – 5 + 5 = ?");
		printf("\n\nA. 10\t\tB. 0\n\nC. 15\t\tD. -5");
		printf("\nYour Answer: ");
		scanf(" %c",&ans);

		ans=toupper(ans);
			if (ans=='A')
			{
			    cor();
			    p++;
			    break;
            }
		    else
		    {
		           wro();
		       break;
		   }
    case 4 : 
        printf("\n\n5. What is the value of x in the equation 3x – 15 – 6 = 0 ?");
		printf("\n\nA. 8\t\tB. 7\n\nC. -9\t\tD. 9");
		printf("\nYour Answer: ");
		scanf(" %c",&ans);

		ans=toupper(ans);
			if (ans=='B')
			{
			    cor();
			    p++;
			    break;
            }
		    else
		    {
		           wro();
		       break;
		   }
     }
    
     
     }
     printf("\n\t\t\t YOUR SCORE WAS %d OUT OF 5\n",p);
     score(p);
    
    
}
void his()
{
    int r,i,p=0;
    char ans;
    printf("\t\t\t   You chose History Quiz\n\t\t\tThere will be 5 Questions \n");
    printf("\t\t\t   Rememember to answer only with lower or uppercase A B C or D");
     for(i=0;i<5;i++){
     r=i;
     system("clear");
     switch(r)
     {
    case 0 : 
        printf("\nQ1.Where did the British open their factory in Eastern part of India ?\n");
		printf("\n\nA. Bihar\t\tB. Assam\n\nC. Kerala\tD. Orissa");
		printf("\nYour Answer: ");
		scanf(" %c",&ans);
		system("clear");
		ans=toupper(ans);
			if (ans=='D')
			{
			    cor();
			    p++;
			 
			    break;
            }
		    else
		    {
		           wro();
		       break;
		   }
    case 1 : 
        printf("\n\n2. In which place was the Satyagraha first started by Mahatma Gandhi ?");
		printf("\n\nA. Delhi\t\tB. Calcutta\n\nC. Champaran\t\tD. Baroda");
		printf("\nYour Answer: ");
		scanf(" %c",&ans);
		system("clear");
		ans=toupper(ans);
			if (ans=='C')
			{
			    cor();
			    p++;
			    break;
            }
		    else
		    {
		           wro();
		       break;
		   }
    case 2 : 
        printf("\n\n3. Number of years required to build the Taj Mahal ?");
		printf("\n\nA. 14\t\tB. 16\n\nC. 18\t\tD. 22");
		printf("\nYour Answer: ");
		scanf(" %c",&ans);
		system("clear");
		ans=toupper(ans);
			if (ans=='D')
			{
			    cor();
			    p++;
			    break;
            }
		    else
		    {
		           wro();
		       break;
		   }
    case 3 : 
        printf("\n\n4. Use of Zero and Decimal system was introduced during the period of which dynasty ?");
		printf("\n\nA. Gupta\t\tB. Pallav\n\nC. Maurya\t\tD. Kushan");
		printf("\nYour Answer: ");
		scanf(" %c",&ans);
		system("clear");
		ans=toupper(ans);
			if (ans=='A')
			{
			    cor();
			    p++;
			    break;
            }
		    else
		    {
		           wro();
		       break;
		   }
    case 4 : 
        printf("\n\n5. In which year did India get its freedom from The British Rule?");
		printf("\n\nA. 1948\t\tB. 1947\n\nC. 1949\t\tD. 1959");
		printf("\nYour Answer: ");
		scanf(" %c",&ans);
		system("clear");
		ans=toupper(ans);
			if (ans=='B')
			{
			    cor();
			    p++;
			    break;
            }
		    else
		    {
		           wro();
		       break;
		   }
     }
    
     
     }
     printf("\n\t\t\t YOUR SCORE WAS %d OUT OF 5\n",p);
     score(p);
    
    
}
void ani()
{
    int r,i,p=0;
    char ans;
    printf("\t\t\t   You chose Animal Kingdom Quiz\n\t\t\tThere will be 5 Questions \n");
    printf("\t\t\t   Rememember to answer only with lower or uppercase A B C or D");
     for(i=0;i<5;i++){
     r=i;
     system("clear");
     switch(r)
     {
    case 0 : 
        printf("\nQ1. Salamander belongs to which class ?\n");
		printf("\n\nA. Aves\t\tB. Reptiles\n\nC. Pisces\tD. Amphibians");
		printf("\nYour Answer: ");
		scanf(" %c",&ans);
		system("clear");
		ans=toupper(ans);
			if (ans=='D')
			{
			    cor();
			    p++;
			   
			    break;
            }
		    else
		    {
		           wro();
		       break;
		   }
    case 1 : 
        printf("\n\n2. Which class has the largest number of animals ?");
		printf("\n\nA. Birds\t\tB. Reptiles\n\nC. Insects\t\tD. Mammals");
		printf("\nYour Answer: ");
		scanf(" %c",&ans);
		system("clear");
		ans=toupper(ans);
			if (ans=='C')
			{
			    cor();
			    p++;
			    break;
            }
		    else
		    {
		           wro();
		       break;
		   }
    case 2 : 
        printf("\n\n3. What food makes up nearly all (around 99 Percent) of a Giant Panda’s diet? ?");
		printf("\n\nA. Fruits\t\tB. Meat\n\nC. Leaves\t\tD. Bamboo");
		printf("\nYour Answer: ");
		scanf(" %c",&ans);
		system("clear");
		ans=toupper(ans);
			if (ans=='D')
			{
			    cor();
			    p++;
			    break;
            }
		    else
		    {
		           wro();
		       break;
		   }
    case 3 : 
        printf("\n\n4. What is the fastest land animal in the world ?");
		printf("\n\nA. Cheetah\t\tB. Jaguar\n\nC. Leopard\t\tD. Tiger");
		printf("\nYour Answer: ");
		scanf(" %c",&ans);
		system("clear");
		ans=toupper(ans);
			if (ans=='A')
			{
			    cor();
			    p++;
			    break;
            }
		    else
		    {
		           wro();
		       break;
		   }
    case 4 : 
        printf("\n\n5. What is the largest land animal in the world ?");
		printf("\n\nA. Rhino\t\tB. Elephant\n\nC. Whale\t\tD. Giraffe");
		printf("\nYour Answer: ");
		scanf(" %c",&ans);
		system("clear");
		ans=toupper(ans);
			if (ans=='B')
			{
			    cor();
			    p++;
			    break;
            }
		    else
		    {
		           wro();
		       break;
		   }
     }
    
     
     }
     printf("\n\t\t\t YOUR SCORE WAS %d OUT OF 5\n",p);
     score(p);
    
    
}
void geo()
{
    int r,i,p=0;
    char ans;
    printf("\t\t\t   You chose Geography Quiz\n\t\t\tThere will be 5 Questions \n");
    printf("\t\t\t   Rememember to answer only with lower or uppercase A B C or D");
     for(i=0;i<5;i++){
     r=i;
    
     switch(r)
     {
    case 0 : 
        printf("\nQ1. Which is the largest country in the world ?\n");
		printf("\n\nA. Japan\tB. China\n\nC. Australia\tD. Russia");
		printf("\nYour Answer: ");
		scanf(" %c",&ans);
		system("clear");
		ans=toupper(ans);
			if (ans=='D')
			{
			    cor();
			    p++;
			    
			    break;
            }
		    else
		    {
		           wro();
		       break;
		   }
    case 1 : 
        printf("\n\n2. Which country has the largest population in the world ?");
		printf("\n\nA. India\t\tB. Australia\n\nC. China\t\tD. Japan");
		printf("\nYour Answer: ");
		scanf(" %c",&ans);
		system("clear");
		ans=toupper(ans);
			if (ans=='C')
			{
			    cor();
			    p++;
			    break;
            }
		    else
		    {
		           wro();
		       break;
		   }
    case 2 : 
        printf("\n\n3. In which country would you find the Leaning Tower of Pisa ?");
		printf("\n\nA. Japan\t\tB. America\n\nC. India\t\tD. Italy");
		printf("\nYour Answer: ");
		scanf(" %c",&ans);
		system("clear");
		ans=toupper(ans);
			if (ans=='D')
			{
			    cor();
			    p++;
			    break;
            }
		    else
		    {
		           wro();
		       break;
		   }
    case 3 : 
        printf("\n\n4. The United States consists of how many states ?");
		printf("\n\nA. 50\t\tB. 40\n\nC. 15\t\tD. 35");
		printf("\nYour Answer: ");
		system("clear");
		scanf(" %c",&ans);
		ans=toupper(ans);
			if (ans=='A')
			{
			    cor();
			    p++;
			    break;
            }
		    else
		    {
		           wro();
		       break;
		   }
    case 4 : 
        printf("\n\n5. How many deserts does Africa have ?");
		printf("\n\nA. 8\t\tB. 3\n\nC. 4\t\tD. 9");
		printf("\nYour Answer: ");
		scanf(" %c",&ans);
		system("clear");
		ans=toupper(ans);
			if (ans=='B')
			{
			    cor();
			    p++;
			    break;
            }
		    else
		    {
		           wro();
		       break;
		   }
     }
    
     
     }
     printf("\n\t\t\t YOUR SCORE WAS %d OUT OF 5\n",p);
     score(p);
    
    
}
void space()
{
    int r,i,p=0;
    char ans;
    printf("\t\t\t   You chose Planets Quiz\n\t\t\tThere will be 5 Questions \n");
    printf("\t\t\t   Rememember to answer only with lower or uppercase A B C or D");
     for(i=0;i<5;i++){
     r=i;
     system("clear");
     switch(r)
     {
    case 0 : 
        printf("\nQ1. What is the closest planet to the Sun ?\n");
		printf("\n\nA. Earth\t\tB. Mars\n\nC. Venus\tD. Mecury");
		printf("\nYour Answer: ");
		scanf(" %c",&ans);
		system("clear");
		ans=toupper(ans);
			if (ans=='D')
			{
			    cor();
			    p++;
			    
			    break;
            }
		    else
		    {
		           wro();
		       break;
		   }
    case 1 : 
        printf("\n\n2. What is the name of the 2nd biggest planet in our solar system ?");
		printf("\n\nA. Earth\t\tB. Mars\n\nC. Saturn\t\tD. Jupiter");
		printf("\nYour Answer: ");
		scanf(" %c",&ans);
		system("clear");
		ans=toupper(ans);
			if (ans=='C')
			{
			    cor();
			    p++;
			    break;
            }
		    else
		    {
		           wro();
		       break;
		   }
    case 2 : 
        printf("\n\n3. What planet is famous for its big red spot on it ?");
		printf("\n\nA. Mercury\t\tB. Venus\n\nC. Mars\t\tD. Jupiter");
		printf("\nYour Answer: ");
		scanf(" %c",&ans);
		system("clear");
		ans=toupper(ans);
			if (ans=='D')
			{
			    cor();
			    p++;
			    break;
            }
		    else
		    {
		           wro();
		       break;
		   }
    case 3 : 
        printf("\n\n4. What is the hottest planet in our solar system ?");
		printf("\n\nA. Venus\t\tB. Jupiter\n\nC. Mars\t\tD. Mercury");
		printf("\nYour Answer: ");
		scanf(" %c",&ans);
		system("clear");
		ans=toupper(ans);
			if (ans=='A')
			{
			    cor();
			    p++;
			    break;
            }
		    else
		    {
		           wro();
		       break;
		   }
    case 4 : 
        printf("\n\n5. What planet is known as the red planet ?");
		printf("\n\nA. Jupiter\t\tB. Mars\n\nC. Venus\t\tD. Mercury");
		printf("\nYour Answer: ");
		scanf(" %c",&ans);
		system("clear");
		ans=toupper(ans);
			if (ans=='B')
			{
			    cor();
			    p++;
			    break;
            }
		    else
		    {
		           wro();
		       break;
		   }
     }
    
     
     }
     printf("\n\t\t\t YOUR SCORE WAS %d OUT OF 5\n",p);
     score(p);
    
    
}
