//PLOT for game
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
char yourFriend[50];
char fName[50];
int stressLevel;
double GPA, randMin, randMax, randNum;

void RandonNum();
void RandonNum()
{
	srand ( time(NULL) );
	randNum = rand() % randMax + randMin;
	return 0;
}

//validation functions
int validateYN(char* variable);
int validateYN(char* variable)
{ 
	while(strcmp(variable, "y") == 1 || strcmp(variable, "n") == 1)
	{
		printf("Reenter your choice only \"y\" and \"n\" are allowed here!\n");
	}
	
	return 0;
}

void validateNums(int variable);
void validateNums(int variable)
{
	while (variable != 1 || variable != 2 || variable != 3 || variable != 4 
	  || variable != 5 )
	{
		printf("Only the numbers 1 through 5 are accepted here!\n");
	}
	//add else to write into &variable....
  }

// Checks the stress level of the character. Prints warning messages if stress level gets too high, and eventually 
// kills off character and ends game if stressLevel reaches 20.
void isStressed();
void isStressed()
{
	if (stressLevel == 17)
	{
		printf("Your current stress level is:");
		printf("%d\n", stressLevel);
		printf("Warning stress level is high. You are breaking out all over your face and have trouble sleeping. Do something fun, and watch your choices or else.");
	}
	
	else if (stressLevel == 19)
	{
		printf("Your current stress level is:");
		printf("%d\n", stressLevel);
		printf("WARNNG STRESS LEVELS ARE THROUGH THE ROOF. You are hallucinating and feel very twitchy. Do something fun to chill out.");
	}
	
	else if (stressLevel == 20)
	{
		printf("You died. RIP.")	
		break;
	}
	else 
	{
		printf"Your current stress level is:");
		printf("%d\n", stressLevel);
	}
}
//Checks the GPA of student. Prints warning messages if it falls too low, eventually failing the student if their
//GPA reaches 0, ending the game. 
void isFailing();
void isFailing()
{
	if (GPA > 3.7)
	{
		printf("Your current GPA is:");
		printf("%f\n", GPA);
		printf("A, good job!");
	}
	else if (GPA > 3.3)
	{
		printf("Your current GPA is:");
		printf("%f\n", GPA);
		printf("A-");
	}
	else if (GPA > 3)
	{
		printf("Your current GPA is:");
		printf("%f\n", GPA);
		printf("You have a B+");
	}
	else if (GPA > 2.7)
	{
		printf("Your current GPA is:");
		printf("%f\n", GPA);
		printf("B");
	}
	else if (GPA > 2.3)
	{
		printf("Your current GPA is:");
		printf("%f\n", GPA);
		printf("B-");
	}
	else if (GPA > 2)
	{
		printf("Your current GPA is:");
		printf("%f\n", GPA);
		printf("C+, don't let yourself fall too far behind.");
	}
	else if (GPA > 1.7)
	{
		printf("Your current GPA is:");
		printf("%f\n", GPA);
		printf("C, don't let yourself fall too far behind.");
	}
	else if  (GPA > 1.3);
	{
		printf("Your current GPA is:");
		printf("%f\n", GPA);
		printf("C-, don't let your grade drop too low.");
	}
	else if  (GPA > 1.0);
	{
		printf("Your current GPA is:");
		printf("%f\n", GPA);
		printf("D+, try to improve your grade before it's too late.");
	}
	else if  (GPA > 0.7);
	{
		printf("Your current GPA is:");
		printf("%f\n", GPA);
		printf("D, you're on the verge of failing improve your grades now!");
	}
	else if (GPA > 0.0)
	{
		printf("Your current GPA is:");
		printf("%f\n", GPA);
		printf("D-, you're barely keeping a passing grade fix it while you still can")
	}
	else if (GPA == 0.0)
	{
		printf("Your current GPA is:");
		printf("%f\n", GPA);
		printf("Sorry, but its over. You failed out. You spent too much time hanging out with friends and having a good time than studying. Shoulda studied more. Re-apply in the fall.");
		break;
	}
}


void playTGCs();
void playTGCs()
{	
	//function for wanting to play a children's card game and deciding what is
	// the best choice 
	int tcg;
	printf("\t==~~~~~~~~~~~~~~~~~~~~==\t\n");
	printf("You have recently became obsessed with playing a children's card game...\n");
	printf("You have decided that you don't want to work on anything school related today ");
	printf("and want to relax for once.\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("================================================================================");
	printf("You have several options to consider:\n");
	printf("You can either watch the Television show associated with the card game, or go ");
	printf("out and buy a whole bunch of cards and force %s to play with you.\n", yourFriend);
	printf("You realize that if you want to play the card game that also means you also \n");
	printf("have to go out and buy some cards to use...  Of course you friend will go \n");
	printf("along with you for the ride, but do you really want to spend the money?\n");
	printf("Either way %s has decided to support you with your unproductive choices!\n", yourFriend);
	printf("What a great friend...\n");
	printf("\t==~~~~~~~~~~~~~~~~~~~~==\t\n");
	printf("MAKE YOUR CHOICE, CHOOSE WISELY!\n\n");
	printf("1) Play the children's card game go out to the grocery store and buy cards and \n");
	printf("spend three hours to complete this task\n");
	printf("2) Watch the television show associated with the card game, spend up to fours \n");
	printf("hours completing this task\n");
	printf("3) Do nothing because you don't want to admit being obsessed with the children's \n");
	printf("card game!\n");
	scanf("%d", &tcg);
	printf("You Picked %d", tcg);
	printf("================================================================================");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	if (tcg == 1)
	{
		printf("You spent three hours palying a children's card game when you \n");
		printf("should have been studying!");
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		printf("================================================================================");

	}
	else if(tcg ==2)
	{
		printf("Your stress level did decrease because you watched television but \n");
		printf("you also lost four hours of your day that could have been spent\n");
		printf("more productively.");
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		printf("================================================================================");

	}
	else if (tcg==3)
	{
		printf("Too much of a wimp to admit what you really enjoy in life\n");
		printf("Or do you finally realize how important your finals are?\n");
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		printf("================================================================================");

	}
	else (tcg!=3)
	{
		printf("Choose again from the choices listed!");
		scanf("%d", &tcg);
		//this needs to go back up to option one to display the results...
	}
	

} 

void socialclubEvent();
void socialclubEvent()
{
	char *yesNo;
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("================================================================================");
	printf("Today you have a social meeting for your favorite club, it is a different kind \n");
	printf("of meeting than most and you want to go because there will be free food.\n");
	printf("You also have an important exam tomorrow, and need to decide what you want to do.\n");
	printf("You can choose to either go to your club meeting or to go home and study.");
	printf("\t==~~~~~~~~~~~~~~~~~~~~==\t\n");
	printf("MAKE YOUR CHOICE, CHOOSE WISELY!\n\n");
	printf("Do you want to go to your club meeting and have fun with your friends? (y/n)\n");
	yesNo = (char*)getchar();
	validateYN(yesNo);
	//printf("Go home and study!\n");
}

int intro();
int intro()
{		//need to make sure fName is global in case it is added into other functions for directions or story
		int intro;
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		printf("================================================================================");
		printf("You woke up this morning and you don't feel good at all, \n");
		printf("you can't remember your name... What is your name? \n");
		scanf("%s", fName);
		printf("Your name is: %s", fName);
		printf("You look around and fine that you are a student at Purdue,\n");
		printf("you hope your memories return, you wander into the other room and \n"		);
		printf("you decide to make the best of the end of the semster.\n");
		printf("================================================================================");
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		printf("\n\n");
		printf("You are beginning to regain your memories, you find that you are a CIT student,\n");
		printf(" and that you have a ton of projects and exams to take before you can go home.\n");
		
		printf("================================================================================");
		printf("You decide to make the most of the day and go to class!");
		printf("You meet your best friend on your way to class, their name is...\n");
		printf("What is your best friends name?\n");
		scanf("%s", yourFriend);
		printf("Your best friend's name is: %s", yourFriend);
		printf("%s: Hi, %s, how was your weekend?", yourFriend, fName);
		printf("You think to yourself about how to respond to your friend, after all you \n");
		printf("can't remember much about who you are...\n"); 
		printf("You decide to tell your friend the following: \n");
		printf("MAKE YOUR CHOICE, CHOOSE WISELY!\n\n");
		printf("1) SAY: Hi, %s, I'm fine I just had a rough night is all.\n", yourFriend); 
		printf("2) SAY: Who are you again?  Do I know you?\n");
		printf("3) SAY: Looks like it's time to go to school!\n");
		scanf("%d", &intro);
		return intro;

  }
void schoolday();
void schoolday()
{
	printf("================================================================================");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("You go to your first class and learn about Spam and \n");	
	printf("take a quiz over DNS and email, you hope you did ok.");
	printf("After class you go to lunch and tell %s that", yourFriend);
	printf("you can't remember who you are and that you need help\n");
	printf("figuring out how to complete the semster without \n");
	printf("remembering who you are.\n");
	printf("================================================================================");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("You go back to your dorm and decide to take a break before dinner.\n");
	printf("\n\n");
	//printf("%s"); 
}
  
void watchmovie();
void watchmovie()
{
	printf("================================================================================");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	//function for watching a movie and wasting time.
}

void party();
void party()
{
	int choice;
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("================================================================================");	
	printf("Your phone buzzes in your pocket. You look at it and there's a text from %s.", yourFriend);
	printf("It says: Hey wanna go to a party this Friday night? My good friends on the"
	printf("rugby team are having a party. You should come it will be fun.\n");
	printf("You have a big exam Monday morning that you need to study for, so you're not");
	printf(" sure if it would be a good idea to go out. What do you want to do?\n");
	printf("1) Go to the party with %s.", yourFriend);
	printf("2) Stay in and relax that night.");
	printf("3) Stay in and study for your exam.");
	scanf("%d", &choice);
	if (choice == 1)
	{
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		printf("================================================================================");	
		printf("The party was really fun! You met a bunch of cool people, dancing all night,");
		printf("sipped on drank, and just had a good ol time. The only bad part is that you");
	  printf(" woke up at Saturday and couldn't do any work the whole day because of you")
	  printf(" had a headplitting headache the rest of the day, from getting so dehydrated.");
		RandMin = 2;
		RandMax = 5;
		RandomNum()
		stresslevel = stressLevel - randNum;
		RandMin = 0.2;
		RandMax = 0.5;
		RandomNum()
		GPA = GPA - randNum;
		isStressed();
		isFailing();
	}
	else if (choice == 2)
	{
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		printf("================================================================================");	
		printf("You text your friend back and decline the invitation. Come Friday night you");
		printf(" flip on Netflix, cuddle up in your snuggly blanket, just chill out and");
		printf(" catch up on all those episodes of Trailer Park Boys you've missed. It was a");
		printf(" good night.");
		RandMin = 3;
		RandMax = 4;
		RandomNum()
		stresslevel = stressLevel - randNum;
		RandMin = 0.1;
		RandMax = 0.4;
		RandomNum()
		GPA = GPA - randNum;
		isStressed();
		isFailing();
	}
	else if (choice == 3)
	{
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		printf("================================================================================");	
		printf("You text %s back and decline the invivation, apologizing saying that you really", yourFriend);
		printf("need to study because you have a huge exam on Monday. Come Friday night you hit ");
		printf("the books HARD. Going over the textbook, poweroint slides, old notes. After a night of studying, you feel like you learned a lot and after studying more the rest of the weekend you dominate the exam. Good job!");
		RandMin = 3;
		RandMax = 4;
		RandomNum()
		stresslevel = stressLevel + randNum;
		RandMin = 0.2;
		RandMax = 0.4;
		RandomNum()
		GPA = GPA + randNum;
		isStressed();
		isFailing();
	}
	else
	{
		printf("Please enter 1, 2, or 3");	
	}
	}
}
