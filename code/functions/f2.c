#include <stdio.h>

int bump ( int n ) {
	n = n + 4 ;
	return( n ) ;
}

int main ( void ) {
	int val = 5 ;
	bump( val ) ;
	printf( "val = %d\n", val ) ;
	return 0 ;
}
