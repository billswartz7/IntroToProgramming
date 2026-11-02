#include <stdio.h>

void bump ( int *n ) {
	*n = *n + 4 ;
}

int main ( void ) {
	int val = 5 ;
	bump( &val ) ;
	printf( "val = %d\n", val ) ;
	return 0 ;
}
