/*Laboratory Session 1 - Exercise 2: Branching out! (50%)
Here is the program called "insult.c":
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char name[100];
	
	printf("Welcome to INSULT ...\n");
	printf("Please enter your name: \n");
	scanf("%s", name);
	
	if(strcmp(name, "John") == 0)
		printf("Hello, %s. Welcome to my program!\n", name);
	else
		printf("I don't like you, %s. Good bye!\n", name);
		
	printf("Bye from INSULT ... \n");
	
	return(EXIT_SUCCESS);
}
Using this as a basis, or template, develop (plan, code, test, correct) a program called "sport.c" which behaves as follows:

-Displays a suitable welcome/identification message.
-Ask the user to type in his or her favourite sport (one word only).
-If the topic is different than "Soccer", display the message: "What? SPORT? Not good enough! I like Soccer!, where in the place of "SPORT" you display the sport entered by the user.
-If the topic is "Soccer" display the message "Good Choice! I like SPORT, too!" instead. In the place of "SPORT" you display the sport entered by the user ("Soccer" in this case!)
-Finally display some suitable closing message

Test the program with different inputs.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char sport[100];

	printf("Welcome to SPORT ...\n");
	printf("Please enter your favourite sport:\n");
	scanf("%s", sport);

	if(strcmp(sport, "Soccer") == 0)
		printf("Good Choice! I like %s, too!\n", sport);
	else
		printf("What? %s? Not good enough! I like Soccer!\n", sport);

	printf("Bye from SPORT ...\n");
	
	return(EXIT_SUCCESS);
}
