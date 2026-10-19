
#include <stdio.h>
#include <stddef.h>
typedef struct {
      char sensor_index ;
      char *adc_sensor_name;
      double sensor_converted;
      float sensor_psi;
} sample_t ;

int main(void) {
  fprintf( stderr, "size of sample_t:%lu\n", sizeof( sample_t ) ) ;
  fprintf( stderr, "offset of sensor_index:%lu\n", offsetof( sample_t, sensor_index ) ) ;
  fprintf( stderr, "offset of adc_sensor_name:%lu\n", offsetof( sample_t, adc_sensor_name ) ) ;
  fprintf( stderr, "offset of sensor_converted:%lu\n", offsetof( sample_t, sensor_converted ) ) ;
  fprintf( stderr, "offset of sensor_psi:%lu\n", offsetof( sample_t, sensor_psi ) ) ;
  return 0 ;
}
