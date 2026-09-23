
#include <stdio.h>

int main( int argc, char *argv[] )
{
	int sum = 0 ;
	for( int i = 1 ; i <= 10 ; i++ ){
		sum += i ;
	}
	fprintf( stdout, "The sum is %d\n", sum ) ;
}
