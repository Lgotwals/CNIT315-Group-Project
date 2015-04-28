//PLOT for game
#include <stdio.h>
#include <string.h>
char yourFriend[50];
char fName[50];
int stressLevel;
double GPA;


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
		printf"Your current stress level is:");
		printf("%d\n", stressLevel);
		printf("Warning stress level is high. You are breaking out all over your face and have trouble sleeping. 
						Do something fun, and watch your choices or else.");
	}
	
	else if (stressLevel == 19)
	{
		printf"Your current stress level is:");
		printf("%d\n", stressLevel);
		printf("WARNNG STRESS LEVELS ARE THROUGH THE ROOF. You are hallucinating and feel very twitchy. Do 
						something fun to chill out out.");
	}
	
	else if (stressLevel == 20)
	{
		printf("You died. RIP.")	
		break;
	}
}
//Checks the GPA of student. Prints warning messages if it falls too low, eventually failing the student if their
//GPA reaches 0, ending the game. 
void isFailing();
void isFailing()
{
	if (GPA == 1.8)
	{
		printf("Your current GPA is:");
		printf("%f\n", GPA);
		printf("WARNING: GPA now below average C.");
	}
	else if (GPA == 1.4)
	{
		printf("Your current GPA is:");
		printf("%f\n", GPA);
		printf("WARNING: GPA is now D average");
	}
	else if  (GPA == 1.0);
	{
		printf("Your current GPA is:");
		printf("%f\n", GPA);
		printf("WARNING: GPA is below D average");
	}
	else if(GPA == 0.4)
	{
		printf("Your current GPA is:");
		printf("%f\n", GPA);
		printf("WARNING:GPA very low. Do not let it get to 0 or you will fail out.")
	}
	else if (GPA == 0.0)
	{
		printf("Your current GPA is:");
		printf("%f\n", GPA);
		printf("Sorry, but its over. You failed out. You spent too much time hanging out with friends and having a good time
						than studying. Shoulda studied more. Re-apply in the fall.");
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
	printf("tak a quiz over DNS and email, you hope you did ok.");
	printf("After class you go to lunch and tell %s that", yourFriend);
	printf("you can't remember who you are and that you need help\n");
	printf("figureing out how to complete the semster without \n");
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
