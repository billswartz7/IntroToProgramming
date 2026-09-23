
#include <stdio.h>
#include <stdint.h>

typedef struct sample {
  uint32_t adc_counts ;
  float psi ;
  uint64_t timestamp_ms ;
} sample_t ;

typedef struct reading {
  sample_t sample ;
  uint8_t sensor_id ;
} reading_t ;


typedef struct reading2 {
  sample_t *sample ;
  uint8_t sensor_id ;
} reading2_t ;


int main( int argc, char *argv[] )
{
	reading_t my_reading ;
	int sum = 0 ;
	for( int i = 1 ; i <= 10 ; i++ ){
		sum += i ;
	}
	fprintf( stdout, "The sum is %d\n", sum ) ;
	fprintf( stdout, "the sensor id is %d\n", my_reading.sensor_id ) ;
}
