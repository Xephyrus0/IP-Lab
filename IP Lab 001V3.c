#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int getRand1,getRand11,guess1;
	int times1=0;
	getRand1=rand()%1000;
	getRand11=getRand1+32;
	//Generate random numbers using the srand function
	
    while(1)//It's an endless loop
	{
	    printf("First Game\n");
		printf("Let's guess a random number .\n");
        scanf("%d",&guess1);//The player enters the guessed number here
		if(guess1!=getRand1)
		{
			printf("You guessed wrong.\n");//Feedback on guesswork
			guess1<getRand1?printf("Too low!\n"):printf("Too high!\n");//Use the ternary operator to give feedback on the magnitude of the value
			times1++;//Round plus one
			printf("Times are %d\n",times1);
		}
		else
		{break;}
	}
	printf("Correct,you made it in just %d times.\n",times1+1);
    if(times1<5)
    {printf("You win!");}//Judging the number of guesses
	else 
    
	{
    srand(time(NULL));
    int getRand2,getRand22,guess2;
    getRand2=rand()%1000;
    getRand22=getRand2+32;
    int times2=0;
	//Play the game again to generate different random numbers
    while(1)//It's an endless loop
	{   
	    printf("Second Game\n");//Play a second game
		printf("Let's guess a random number .\n");
		scanf("%d",&guess2);
		if(getRand2!=guess2)
		{
			printf("You guessed wrong\n");
			guess2<getRand2?printf("Too low!\n"):printf("Too high!\n");//Use the ternary operator to give feedback on the magnitude of the value
			times2++;//Round plus one
			printf("Times are %d\n",times2);
		}
		else
		{break;}
	}
	printf("Correct,you made it in just %d times.\n",times2+1);
		times2<=times1?printf("Your final score is %d\n",times2+1):printf("Your final score is %d\n",times1+1);//Use the ternary operator to calculate the total score
		if(times2<=times1)
        {
		if(times2+1<5)
        {
		printf("You win!\n");
		}
		else
		{
        srand(time(NULL));
        int getRand3,getRand33,guess3;
        getRand3=rand()%1000;
        getRand33=getRand3+32;
        int times3=0;
       	//Play the game again to generate different random numbers
        while(1)//It's an endless loop
     	{   
	    printf("Second Game\n");//Play a second game
		printf("Let's guess a random number .\n");
		scanf("%d",&guess3);
		if(getRand3!=guess3)
		{
			printf("You guessed wrong\n");
			guess3<getRand3?printf("Too low!\n"):printf("Too high!\n");//Use the ternary operator to give feedback on the magnitude of the value
			times3++;//Round plus one
			printf("Times are %d\n",times3);
		}
		else
		{break;}
    	}
    	printf("Correct,you made it in just %d times.\n",times3+1);
    	times3<=times1&&times2?printf("Your final score is %d\n",times3+1):printf("Your final score is %d\n",times2+1);//Use the ternary operator to calculate the total score
		if(times3<=times1&&times2)
        {
		if(times3+1<5)
        {
		printf("You win!\n");
		}
		else
		{
		printf("You lose!\n");
		}
		}
    }
	return 0;
    }
}
}


