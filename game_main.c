/** game_main.c
*
*
* Name:Lucy Gotwals, Luella Stonecipher, Sabrina Hsu, Katie Sigurdson, Patrick Hess
* Course: CNIT 315
* Group Project
* Date:4/27/15
*
*
*/
#include <stdio.h>
#include <stdlib.h>
#include "plot_lib.c"

int main()
{
  //implement game
  
  intro();
  int cont = 0;
  int dayNumber = 1;
  
  while(cont == 0)
  {
  	if (dayNumber >= 119)
  	{
  		printf("You have finished the semester. Congratulations!\n");
  		printf("YOU WIN!!\n");
  		break;
  	}
  	printf("It is day number: %d\n", dayNumber);
  	oneDay(dayNumber);
  	dayNumber++;
  	printf("Would you like to continue playing? (0 for yes, 1 for no):\n");
  	scanf("%d", &cont);
  }
  
  printf("You have ended the game.\n");
  printf("I guess you win...\n");
  
  return 0;


}
