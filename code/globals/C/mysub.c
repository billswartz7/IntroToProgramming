#include <stdio.h>
extern int countG ;	/* global reference   */
static int resetS ;	/* a different resetS */
 
void my_sub ( void ) {
	countG = 2 ;
	resetS = 0 ;
	fprintf ( stderr, "countG in my_sub is %d\n", countG ) ;
	fprintf ( stderr, "resetS in my_sub is %d\n", resetS ) ;
}

