#include <stdio.h>

void bump ( int &n ) {
	fprintf( stderr, "n:%0lx\n", & n ) ;
	n = n + 4 ;
}

int main ( void ) {
	int val = 5 ;
	fprintf( stderr, "val:%0lx\n", & val ) ;
	bump( val ) ;
	printf( "val = %d\n", val ) ;
	return 0 ;
}
