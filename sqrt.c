/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
int is_actual_integer(const char *str)
{
   // Handle negative numbers.
   //
   if (*str == '-')
      ++str;

   // Handle empty string or just "-".
   //
   if (!*str)
      return 0;

   // Check for non-digit chars in the rest of the stirng.
   //
   while (*str)
   {
      if (!isdigit(*str))
         return 0;
      else
         ++str;
   }

   return 1;
}
// this is the modified code 
int main(int argc, char* argv[]) {
// argc being count of arguments
// argv being value of arguments
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}
	if(!is_actual_integer(argv[1]))
	{
		printf("Usage: Input should be a valid number\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	if(argv[1][0]=='-')
	{
		input=-input;
		printf("Sqrt of %d is %fi\n",input,sqrt(input));
	}
	else
		printf("Sqrt of %d = %f\n",input,sqrt(input));
	printf("End of program. Exiting.");
	return(0);

} // end main