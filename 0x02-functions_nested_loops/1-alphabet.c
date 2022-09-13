#include "main.h"

void main()

{

	       int ch;

	        clrscr();

	        _putchar(“Putchar all uppercase letters followed by all lowercase letters on the next line :\n”);

	        /* putchar uppercase letters */
            
	         for (ch= ‘A’; ch<= ‘Z’; ch++)
                  putchar(ch);

	          putchar (‘\n’ ) ;

	          /* putchar lowercase letters */

		  for (ch= ‘a’; ch<= ‘z’; ch++)

                   putchar(ch);

                   putchar (‘\n’) ;

	           getch();

}
