/*
Name: Molly Johnson
ONID: johnsmol
CS 344 Winter 2019
Due: 3/3/19
All information used to create this code is adapted from the OSU CS 344 Winter 2019
lectures and assignment instructions/hints unless otherwise specifically indicated.
Note: Also adapted from my own work from 11/14/18 (took the class in the Fall 2018 term but
am retaking this term for a better grade).

fflush(stdout) used after every printf() in this assignment at the advice of the instructor
in the assignment instructions.
*/

//added #define _GNU_SOURCE before #include <stdio.h> to prevent "implicit function declaration" 
//warnings with getline. Adapted from:
//https://stackoverflow.com/questions/8480929/scratchbox2-returns-implicit-declaration-of-function-getline-among-other-weir
#define _GNU_SOURCE

//include all header files
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <fcntl.h>
#include <time.h>
#include <pthread.h>
#include <dirent.h>
#include <signal.h>
#include <errno.h>

//constant macro definitions
//max values for chars and args were determined by the CS344 assignment3 instructions
//(max chars is actually 2048 but i added one for the null terminator)
#define MAX_CHARS 2049
#define MAX_ARGS 512
#define EXIT "exit"
#define CD "cd"
#define STATUS "status"
#define FALSE 0
#define TRUE 1
#define INVALID "INVALID"

//global variables

//flag for if background is possible (if SIGSTP command given, should ignore "&" and
//just run it as a foreground command)
int backgroundPossibleGlobal = TRUE;

//exit status for the program. set to 0 to start w/ by default, can be changed if program
//encounters errors and needs to exit w/ a non-zero status
int exitStatusGlobal = 0;

//function declarations

/*
NAME

SYNOPSIS

DESCRIPTION

*/
void GetInputString(char *userInputString)
{
	
}

/*
NAME

SYNOPSIS

DESCRIPTION

*/
int main(){
	//create string for user input
	char *userInput = malloc(MAX_CHARS * sizeof(char));
	if(userInput == NULL){
		printf("ERROR, UNABLE TO ALLOCATE MEMORY FOR USER INPUT\n");
		fflush(stdout); exit(1);
	}
	memset(userInput, '\0', sizeof(userInput));

	//get user input as long as the user hasn't entered "exit"
	/*do
	{
		GetInput(userInput);

	}while(
	*/
	strcpy(userInput, "heyooooo");
	printf("%s\n", userInput);
	//GetInputString(userInput);
	
	//free user input string and set to NULL
	free(userInput);
	userInput = NULL;

	return 0;
}
