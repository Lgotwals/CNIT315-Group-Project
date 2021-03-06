//PLOT for game
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

char yourFriend[50];
char fName[50];
int stressLevel = 10;
double GPA = 3.0, randMin, randMax, randNum;

/*
void randomNum(double, double);
void randomNum(double min, double max)
{
	
	float ran = (double) rand() / (double) max;
	randNum = min - max;
	randNum *= ran;
}
*/

void randomNum(int);
void randomNum(int max)
{
	int ran;
	if (max == 0)
	{
		max++;
	}
	srand ( time(NULL) );
	ran = rand()%max;
	randNum = ran;
}

//validation functions
int validateYN(int);
int validateYN(int variable)
{ 
	while(variable != 1 && variable != 0)
	{
		printf("Reenter your choice only \"0\" and \"1\" are allowed here!\n");
		printf("Enter 0 for Yes, 1 for No: ");
		scanf("%d", &variable);
	}
	
	return variable;
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
// Return 0 if character is still alive, return 1 if character dies.
int isStressed();
int isStressed()
{
	if (stressLevel == 17)
	{
		printf("Your current stress level is:");
		printf("%d\n", stressLevel);
		printf("Warning stress level is high. You are breaking out all over your face and \n");
		printf("have trouble sleeping. Do something fun, and watch your choices or else.\n");
	}
	
	else if (stressLevel == 19)
	{
		printf("Your current stress level is:");
		printf("%d\n", stressLevel);
		printf("WARNNG STRESS LEVELS ARE THROUGH THE ROOF. You are hallucinating and feel very\n");
		printf("twitchy. Do something fun to chill out.\n");
	}
	
	else if (stressLevel > 19)
	{
		printf("You died. RIP.");	
		return 1;
	}
	else 
	{
		printf("Your current stress level is:");
		printf("%d\n", stressLevel);
	}
	return 0;
}
//Checks the GPA of student. Prints warning messages if it falls too low, eventually failing the student if their
//GPA reaches 0, ending the game. 
//Returns 0 if player stays in school, returns 1 if player fails out
int isFailing();
int isFailing()
{
	if (GPA > 4.0)
	{
		GPA = 4.0;
		printf("Your current GPA is:");
		printf("%.2f\n", GPA);
		printf("A, good job!\n");
	}
	if (GPA > 3.7)
	{
		printf("Your current GPA is:");
		printf("%.2f\n", GPA);
		printf("A, good job!\n");
	}
	else if (GPA > 3.3)
	{
		printf("Your current GPA is:");
		printf("%.2f\n", GPA);
		printf("A-\n");
	}
	else if (GPA > 3)
	{
		printf("Your current GPA is:");
		printf("%.2f\n", GPA);
		printf("You have a B+\n");
	}
	else if (GPA > 2.7)
	{
		printf("Your current GPA is:");
		printf("%.2f\n", GPA);
		printf("B\n");
	}
	else if (GPA > 2.3)
	{
		printf("Your current GPA is:");
		printf("%.2f\n", GPA);
		printf("B-\n");
	}
	else if (GPA > 2)
	{
		printf("Your current GPA is:");
		printf("%.2f\n", GPA);
		printf("C+, don't let yourself fall too far behind.\n");
	}
	else if (GPA > 1.7)
	{
		printf("Your current GPA is:");
		printf("%.2f\n", GPA);
		printf("C, don't let yourself fall too far behind.\n");
	}
	else if  (GPA > 1.3)
	{
		printf("Your current GPA is:");
		printf("%.2f\n", GPA);
		printf("C-, don't let your grade drop too low.\n");
	}
	else if  (GPA > 1.0)
	{
		printf("Your current GPA is:");
		printf("%.2f\n", GPA);
		printf("D+, try to improve your grade before it's too late.\n");
	}
	else if  (GPA > 0.7)
	{
		printf("Your current GPA is:");
		printf("%.2f\n", GPA);
		printf("D, you're on the verge of failing improve your grades now!\n");
	}
	else if (GPA > 0.0)
	{
		printf("Your current GPA is:");
		printf("%.2f\n", GPA);
		printf("D-, you're barely keeping a passing grade fix it while you still can\n");
	}
	else if (GPA == 0.0)
	{
		printf("Your current GPA is:");
		printf("%.2f\n", GPA);
		printf("Sorry, but its over. You failed out. You spent too much time hanging out with\n");
		printf("friends and having a good time than studying. Shoulda studied more! \n");
		printf("Re-apply in the fall.\n");
		return 1;
	}
	
	return 0;
}


void playTGCs();
void playTGCs()
{	
	int continueMenu = 0;
	//function for wanting to play a children's card game and deciding what is
	// the best choice 
	int tcg;
	printf("\t==~~~~~~~~~~~~~~~~~~~~==\t\n");
	printf("You have recently became obsessed with playing a children's card game...\n");
	printf("You have decided that you don't want to work on anything school related today \n");
	printf("and want to relax for once.\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("================================================================================\n");
	printf("You have several options to consider:\n");
	printf("You can either watch the Television show associated with the card game, or go \n");
	printf("out and buy a whole bunch of cards and force %s to play with you.\n", yourFriend);
	printf("You realize that if you want to play the card game that also means you also \n");
	printf("have to go out and buy some cards to use...  Of course you friend will go \n");
	printf("along with you for the ride, but do you really want to spend the money?\n");
	printf("Either way %s has decided to support you with your unproductive choices!\n", yourFriend);
	printf("What a great friend...\n");
	printf("\t==~~~~~~~~~~~~~~~~~~~~==\t\n");
	printf("MAKE YOUR CHOICE, CHOOSE WISELY!\n");
	printf("1) Play the children's card game go out to the grocery store and buy cards and \n");
	printf("spend three hours to complete this task\n");
	printf("2) Watch the television show associated with the card game, spend up to fours \n");
	printf("hours completing this task\n");
	printf("3) Do nothing because you don't want to admit being obsessed with the children's\n");
	printf("card game!\n");
	scanf("%d", &tcg);
	printf("You Picked %d \n", tcg);
	printf("================================================================================\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	while (continueMenu == 0)
	{
		if (tcg == 1)
		{
			printf("You spent three hours playing a children's card game when you \n");
			printf("should have been studying!\n");
			printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			printf("================================================================================\n");
			//randMin = 2;
			randMax = 5;
			randomNum(randMax);
			stressLevel = stressLevel - randNum;
			//randMin = 0.2;
			randMax = 5;
			randomNum(randMax);
			GPA = GPA - randNum/10.0;
			isStressed();
			isFailing();
			continueMenu = 1;
	
		}
		else if(tcg ==2)
		{
			printf("Your stress level did decrease because you watched television but \n");
			printf("you also lost four hours of your day that could have been spent\n");
			printf("more productively.\n");
			printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			printf("================================================================================\n");
			//randMin = 2;
			randMax = 5;
			randomNum(randMax);
			stressLevel = stressLevel - randNum;
			//randMin = 0.2;
			randMax = 5;
			randomNum(randMax);
			GPA = GPA - randNum/10.0;
			isStressed();
			isFailing();
			continueMenu = 1;
	
		}
		else if (tcg==3)
		{
			printf("Too much of a wimp to admit what you really enjoy in life?\n");
			printf("Or do you finally realize how important your finals are?\n");
			printf("At least you were able to do some chores and study for exams instead.\n");
			printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			printf("================================================================================\n");
			//randMin = 1;
			randMax = 3;
			randomNum(randMax);
			stressLevel = stressLevel + randNum;
			///randMin = 0.2;
			randMax = 5;
			randomNum(randMax);
			GPA = GPA + randNum/10.0;
			isStressed();
			isFailing();
			continueMenu = 1;
	
		}
		else if (tcg!=3)
		{
			printf("Choose again from the choices listed!");
			scanf("%d", &tcg);
		}
	}
} 

void socialclubEvent();
void socialclubEvent()
{
	int yesNo;
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("================================================================================");
	printf("Today you have a social meeting for your favorite club, it is a different kind \n");
	printf("of meeting than most and you want to go because there will be free food.\n");
	printf("You also have an important exam tomorrow, and need to decide what you want to do.\n");
	printf("You can choose to either go to your club meeting or to go home and study.\n");
	printf("\t==~~~~~~~~~~~~~~~~~~~~==\t\n");
	printf("MAKE YOUR CHOICE, CHOOSE WISELY!\n");
	printf("Do you want to go to your club meeting and have fun with your friends?\n");
	printf("(0 for Yes, 1 for No)\n");
	scanf("%d", &yesNo);
	validateYN(yesNo);
	//printf("Go home and study!\n");
}

int intro();
int intro()
{		//need to make sure fName is global in case it is added into other functions for directions or story
		int intro;
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("================================================================================\n");
		printf("You woke up this morning and you don't feel good at all, \n");
		printf("you can't remember your name... What is your name? \n");
		scanf("%s", fName);
		printf("Your name is: %s\n", fName);
		printf("You look around and find that you are a student at Purdue,\n");
		printf("you hope your memories return, you wander into the other room and \n"		);
		printf("you decide to make the best of the end of the semster.\n");
		printf("================================================================================\n");
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("\n\n");
		printf("You are beginning to regain your memories, you find that you are a CIT student,\n");
		printf(" and that you have a ton of projects and exams to take before you can go home.\n");
		
		printf("================================================================================\n");
		printf("You decide to make the most of the day and go to class!");
		printf("You meet your best friend on your way to class, their name is...\n");
		printf("What is your best friends name?\n");
		scanf("%s", yourFriend);
		printf("Your best friend's name is: %s\n", yourFriend);
		printf("%s: Hi, %s, how was your weekend?\n", yourFriend, fName);
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
	printf("================================================================================\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("You go to your first class and learn about Spam and \n");	
	printf("take a quiz over DNS and email, you hope you did ok.\n");
	printf("After class you go to lunch and tell %s that\n", yourFriend);
	printf("you can't remember who you are and that you need help\n");
	printf("figuring out how to complete the semster without \n");
	printf("remembering who you are.\n");
	printf("================================================================================\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("You go back to your dorm and decide to take a break before dinner.\n");
	printf("\n");
	//printf("%s"); 
}
  
void watchmovie();
void watchmovie()
{
	int yesNo;
	printf("================================================================================\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("The next and greatest new superhero movie just released and %s wants you to go\n", yourFriend);
	printf("%s even offered to pay for it all and make sure you got some popcorn too.\n", yourFriend);
	printf("you think to yourself that this is a pretty good deal, don't have to pay for\n");
	printf("a ticket and get popocorn.  Not to mention getting to chat with your \n");
	printf("friends about the movie later.\n");
	printf("\t==~~~~~~~~~~~~~~~~~~~~==\t\n");
	printf("You have to decide if you want to go and watch the movie so you can later talk\n");
	printf("about it with all of your friends or if you want to stay home and finsih up \n");
	printf("your part of a group project and study some more for your exams.\n");
	printf("================================================================================\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("MAKE YOUR CHOICE, CHOOSE WISELY!\n");
	printf("Do you want to go to the movies with %s? (0 for Yes, 1 for No)\n", yourFriend);
	scanf("%d", &yesNo);
	validateYN(yesNo);
	//function for watching a movie and wasting time.
}

void party();
void party()
{
	int choice, continueMenu;
	continueMenu = 0;
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("================================================================================\n");	
	printf("Your phone buzzes in your pocket. You look at it and there's a text from %s.\n", yourFriend);
	printf("It says: Hey wanna go to a party this Friday night? My good friends on the\n");
	printf("rugby team are having a party. You should come it will be fun.\n");
	printf("You have a big exam Monday morning that you need to study for, so you're not\n");
	printf("sure if it would be a good idea to go out. What do you want to do?\n");
	printf("1) Go to the party with %s.\n", yourFriend);
	printf("2) Stay in and relax that night.\n");
	printf("3) Stay in and study for your exam.\n");
	scanf("%d", &choice);
	while (continueMenu == 0)
	{
		if (choice == 1)
		{
			printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			printf("================================================================================\n");	
			printf("The party was really fun! You met a bunch of cool people, dancing all night,\n");
			printf("sipped on drank, and just had a good ol time. The only bad part is that you\n");
		  printf("woke up at Saturday and couldn't do any work the whole day because of you\n");
		  printf("had a headplitting headache the rest of the day, from getting so dehydrated.\n");
			//randMin = 2;
			randMax = 5;
			randomNum(randMax);
			stressLevel = stressLevel - randNum;
			//randMin = 0.2;
			randMax = 5;
			randomNum(randMax);
			GPA = GPA - randNum/10.0;
			isStressed();
			isFailing();
			continueMenu = 1;
		}
		else if (choice == 2)
		{
			printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			printf("================================================================================\n");	
			printf("You text your friend back and decline the invitation. Come Friday night you\n");
			printf("flip on Netflix, cuddle up in your snuggly blanket, just chill out and\n");
			printf("catch up on all those episodes of Trailer Park Boys you've missed. It was a\n");
			printf("good night.\n");
			randMax = 4;
			randomNum(randMax);
			stressLevel = stressLevel - randNum;
			randMax = 4;
			randomNum(randMax);
			GPA = GPA - randNum/10.0;
			isStressed();
			isFailing();
			continueMenu = 1;
		}
		else if (choice == 3)
		{
			printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			printf("================================================================================\n");	
			printf("You text %s back and decline the invivation, apologizing saying that you really\n", yourFriend);
			printf("need to study because you have a huge exam on Monday. Come Friday night you hit \n");
			printf("the books HARD. Going over the textbook, powerpoint slides, old notes. After \n");
			printf("a night of studying, you feel like you learned a lot and after studying more\n");
			printf("the rest of the weekend you dominate the exam. Good job!\n");
			//randMin = 3;
			randMax = 4;
			randomNum(randMax);
			stressLevel = stressLevel + randNum;
			//randMin = 0.2;
			randMax = 4;
			randomNum(randMax);
			GPA = GPA + randNum/10.0;
			isStressed();
			isFailing();
			continueMenu = 1;
		}
		else
		{
			printf("Please enter 1, 2, or 3");
			printf("1) Go to the party with %s.\n", yourFriend);
			printf("2) Stay in and relax that night.\n");
			printf("3) Stay in and study for your exam.\n");
			scanf("%d", &choice);
		}
	}
}

void goToBars();
void goToBars()
{
	int choice, continueMenu;
	continueMenu = 0;
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("================================================================================\n");	
	printf("One of your group members for a project in your databases class is turing 21! He\n");
	printf(" invites you to go to the bars with him at midnight to celebrate. It's only\n");
	printf(" tradition to buy him lots of drink, and you should definitely take him to\n");
	printf(" Harry's for the one and only birthday shot! You're not sure if you should.\n");
	printf(" be out too late thoughHis birthday is Thursday night, and you have an 8:30am\n");
	printf(" class on Friday.");
	printf("What do you want to do?\n1)Go to the bars, YOLO.\n2)Stay in and get a good nights rest.\n");
	scanf("%d", &choice);
	while (continueMenu == 0)
	{
		if (choice == 1)
		{
			printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			printf("================================================================================\n");
			printf("You pregame really hard before the bars with your friend, so that by the time\n");
			printf(" you show up with your group member, you're good and ready. You start at\n");
			printf(" Harry's and work your way down State St, stopping at Brothers and then\n");
			printf(" finished the night at Where Else. At 3am after closing, you of course stop\n");
			printf(" next door at Taco Bell, and scarf down a crunchwrap supreme, washing it all\n");
			printf(" down with some Baja Blast. You stumble home and immediately pass out on your bed.\nBEEP BEEP BEEP. Your \n");
			printf("alarm clock wakes you. With a sign you push the snooze button then glance at the\n");
			printf("time.\n10:42AM\n\n NOOOOOOOOOOOO! You missed your 8:30 AND your 9:30 class. Your \n");
			printf("8:30 class always has attendance quizzes so you know for sure you missed some points.\n");
			printf("Your 9:30 class is a lab, so good luck making that up!\n");
			//randMin = 2;
			randMax = 5;
			randomNum(randMax);
			stressLevel = stressLevel + randNum;
			//randMin = 0.2;
			randMax = 5;
			randomNum(randMax);
			GPA = GPA - randNum/10.0;
			isStressed();
			isFailing();
			continueMenu = 1;
		}
		else if (choice ==2)
		{
			printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			printf("================================================================================\n");
			printf("You wish your group member a happy birthday, but let him know you can't make it \n");
			printf("out to the bars that night. It is important to make it to your 8:30am class, the \n");
			printf("professor always has attendance quizzes. Your group member seems dissapointed, so\n");
			printf("you reassure him you will go bar hopping with him some other time.\n");
			//randMin = 3;
			randMax = 4;
			randomNum(randMax);
			stressLevel = stressLevel - randNum;
			//randMin = 0.1;
			randMax = 4;
			randomNum(randMax);
			GPA = GPA + randNum/10.0;
			isStressed();
			isFailing();
			continueMenu = 1;
		}
		else
		{
			printf("Please enter 1 or 2.\n");
			printf("1)Go to the bars, YOLO.\n2)Stay in and get a good nights rest.\n");
			scanf("%d", &choice);
		}
	}
}
void sleepIn();
void sleepIn()
{
	int choice, continueMenu;
	continueMenu = 0;
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("================================================================================\n");	
	printf("BEEP BEEP BEEP. Your beside alarm wakes you up. You feel so tired. You barely\n");
	printf("got any sleep the night before, and stayed up last night working on homework\n");
	printf(" pretty late. Press snooze on the alarm or get up and start your day?\n");
	printf("1)Snooze your alarm.\n");
	printf("2)Get up and start your day.\n");
	scanf("%d", &choice);
	while (continueMenu == 0)
	{
		randMax = 1;
		randomNum(randMax);
		if (choice == 0)
		{
			if (randNum == 1)
			{
				printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
				printf("================================================================================\n");
				printf("You press snooze on your alarm and go back to sleep. You have the most fantastic\n");
				printf(" dream about getting a perfect on an exam. Until you wake up and realize that\n");
				printf("would never happen ever because you go to Purdue University. You glance at the\n");
				printf("time and realize you missed your first class. Oh well, atleast you're rested!\n");
				//randMin = 1;
				randMax = 4;
				randomNum(randMax);
				stressLevel = stressLevel - randNum;
				//randMin = 0.1;
				randMax = 4;
				randomNum(randMax);
				GPA = GPA - randNum/10.0;
				isStressed();
				isFailing();
				continueMenu = 1;
			}
			else
			{
				if (randNum == 1)
				{
					printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
					printf("================================================================================\n");
					printf("After sleeping some more you wake up feeling refreshed, and ready to make the\n");
					printf("most of your day. You open the curtains and the sun is shining, birds singing.\n");
					printf("That extra sleep was all you needed to feel healthy and happy.\n");
					//randMin = 1;
					randMax = 4;
					randomNum(randMax);
					stressLevel = stressLevel - randNum;
					isStressed();
					isFailing();
					continueMenu = 1;
				}
			}
		}
		else if (choice == 1)
		{
			//randMin = 1;
			randMax = 2;
			randomNum(randMax);
			if (randNum == 1)
			{
				printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
				printf("================================================================================\n");
				printf("You drag yourself out of bed. Its a real struggle. You take a quick shower to\n");
				printf("wake up. You make yourself breakfast, then head out to class. Good thing you\n");
				printf("didn't skip class, your professor is having an attendance quiz worth 10 extra\n");
				printf("credit points. Those are points you need!\n");
				//randMin = 1;
				randMax = 3;
				randomNum(randMax);
				stressLevel = stressLevel + randNum;
				//randMin = 0.1;
				randMax = 4;
				randomNum(randMax);
				GPA = GPA + randNum/10.0;
				isStressed();
				isFailing();
				continueMenu = 1;
			}
			else
			{
				printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
				printf("================================================================================\n");
				printf("You rise from your bed and feel very groggy. It is hard to wake up and clear the\n");
				printf("fog from your sleep. Lately you've been having very strange dreams, dreams\n");
				printf("about your identity. You try and grasp onto the details from your dreams, hoping\n");
				printf("that they may provide clues about who you are, but your memory fails you and the\n");
				printf("dreams blow away, far beyond the grasp of your mind.\nYou head off to your first\n");
				printf("class. Halfway through the powerhour, you fall asleep in your desk. You wake up\n");
				printf("20 minutes later. There's a pool of drool on your textbook and your professor is\n");
				printf("giving you a very dirty look. Oops.\n");
				//randMin = 1;
				randMax = 3;
				randomNum(randMax);
				stressLevel = stressLevel + randNum;
				isStressed();
				isFailing();
				continueMenu = 1;
			}
		}
		else
		{
			printf("Please enter either 1 or 2.\n");
			printf("1)Snooze your alarm.\n");
			printf("2)Get up and start your day.\n");
			scanf("%d", &choice);
		}
	}

}

void goToSportingEvent();
void goToSportingEvent()
{
	int choice;
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("================================================================================\n");
	printf("You find out that Purdue is playing IU tonight and %s wants to go.\n", yourFriend);
	printf("You have 3 quizzes tomorrow and a paper that you have not started yet.\n");
	printf("You can go to the game and stay up late finishing your work, stay until\nhalf time, or you can just miss the game and ask %s about the game.", yourFriend);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("================================================================================\n");
	do
	{
		printf("MAKE YOUR CHOICE, CHOOSE WISELY\n");
		printf("1. Go to the game and stay up late.\n");
		printf("2. Go to the game but only stay until half-time.\n");
		printf("3. Go to the game and don't do your homework.\n");
		printf("4. Don't go to the game and finish your work.\n");
		scanf("%d", &choice);
		
		if (choice == 1)
		{
			printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			printf("================================================================================\n");
			printf("You go to the game and enjoy yourself very much.\n");
			printf("However, because of the 3OT, you did not come home until very late.\n");
			printf("Because of this, you had to pull an all-nighter and did not get any sleep.\n");
			printf("But you did finish your homework.\n");
			//randMin = 1;
			randMax = 5;
			randomNum(randMax);
			stressLevel = stressLevel + randNum;
			//randMin = 0.1;
			randMax = 2;
			randomNum(randMax);
			GPA = GPA + randNum/10.0;
		}
		else if (choice == 2)
		{
			printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			printf("================================================================================\n");
			printf("You enjoyed an good first half of the game even though\n");
			printf("Purdue was losing when you left.\n");
			printf("Despite this, you were able to finish all your homework\n");
			printf("and get a good night's sleep.\n");
			//randMin = 0;
			randMax = 2;
			randomNum(randMax);
			stressLevel = stressLevel - randNum;
			//randMin = 0.1;
			randMax = 2;
			randomNum(randMax);
			GPA = GPA + randNum/10.0;
		}
		else if (choice == 3)
		{
			printf("That game was AWESOME. Purdue destroyed IU. The game\n");
			printf("was exciting from beginning to end. However, you\n");
			printf("did not do your homework.\n");
			//randMin = 4;
			randMax = 7;
			randomNum(randMax);
			stressLevel = stressLevel - randNum;
			//randMin = 0.1;
			randMax = 4;
			randomNum(randMax);
			GPA = GPA - randNum/10.0;
		}
		else if (choice == 4)
		{
			printf("You missed a great game but you finished all your homework\n");
			printf("and was able to catch up on sleep and read.\n");
			//randMin = 0;
			randMax = 2;
			randomNum(randMax);
			stressLevel = stressLevel - randNum;
			//randMin = 0.1;
			randMax = 3;
			randomNum(randMax);
			GPA = GPA + randNum/10.0;
		}
	} while (choice < 0 && choice > 5);
	
	isStressed();
	isFailing();
}

void oneDay();
void oneDay(int dayNumber)
{
	int randomEvent;
	randomEvent = rand() % 7;

		if (dayNumber % 7  == 1)
		{
			printf("It's Monday... =/\n");
		}
		else if (dayNumber % 7 == 2)
		{
			printf("It's Tuesday.\n");
		}
		else if (dayNumber % 7 == 3)
		{
			printf("It's Wednesday.\n");
		}
		else if (dayNumber % 7 == 4)
		{
			printf("It's Thursday.\n");
		}
		else if (dayNumber % 7 == 5)
		{
			printf("It's Friday!!!!\n");
		}
		else if (dayNumber % 7 == 6)
		{
			printf("It's Saturday!!!!\n");
		}
		else if (dayNumber % 7 == 0)
		{
			printf("It's Sunday!!\n");
		}
		
		if (randomEvent == 6)
		{
			sleepIn();
			randomEvent = rand() % 6;
		}
		
		else
		{		
			if (dayNumber % 7 < 6)
			{
				schoolday();
			}
		}
			
		switch (randomEvent)
		{
			case 0:
				party();
				break;
			case 1:
				watchmovie();
				break;
			case 2:
				playTGCs();
				break;
			case 3:
				socialclubEvent();
				break;
			case 4:
				goToBars();
				break;
			case 5:
				goToSportingEvent();
				break;
		}

	return;
}
