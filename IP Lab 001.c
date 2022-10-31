#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int getRand1,guess1;
	int times1=0;
	getRand1=rand()%33;
	//Generate random numbers using the srand function
	
    while(1)
	{
	    printf("First Game\n");
		printf("Let's guess a random number .\n");
        scanf("%d",&guess1);//The player enters the guessed number here
		if(guess1!=getRand1)
		{
			printf("You guessed wrong.\n");//Feedback on guesswork
			guess1<getRand1?printf("Too low!\n"):printf("Too high!\n");//Use the ternary operator to give feedback on the magnitude of the value
			times1++;
			printf("Times are %d\n",times1);
		}
		else
		{break;}
	}
	printf("Correct,you made it in just %d times\n",times1);
    if(times1<5)
    {printf("You win!");}//Judging the number of guesses
	else 
    
	{
    srand(time(NULL));
    int getRand2,guess2;
    getRand2=rand()%32;
    int times2=0;
	
    while(1)
	{   
	    printf("Second Game\n");
		printf("Let's guess a random number .\n");
		scanf("%d",&guess2);
		if(getRand2!=guess2)
		{
			printf("You guessed wrong\n");
			guess2<getRand2?printf("Too low!\n"):printf("Too high!\n");
			times2++;
			printf("Times are %d\n",times2);
		}
		else
		{
			break;
		}
	}
	printf("Total times are %d\n",times2);
		times2<=times2?printf("Your score is %d\n",times2):printf("Your score is %d\n",times1);
		if(times2<=times1)
      {
		  if(times2<=4)
        {
		  	printf("You win!\n");
		  }
		  else
        {
		  	printf("You lose!\n");
		  }
		}
		else
      {
			printf("You lose!\n");
		}
    }
	return 0;
}


