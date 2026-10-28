
#include <stdio.h>
extern void my_sub ( void ) ;
int countG ;	   /* global definition */
static int resetS ;/*	static definition */

int main ( int argc, char *argv[] ) {
	countG = 1 ;
	resetS = 1 ;
	my_sub ( ) ;
	fprintf ( stderr, "countG is %d not 1\n", countG ) ;
	fprintf ( stderr, "reset is still %d\n", resetS ) ;
	return 0 ;
}

