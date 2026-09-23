
#include <iostream>

class sample {
  uint32_t adc_counts ;
  float psi ;
  uint64_t timestamp_ms ;
} ;

class reading {
  sample sensor_sample ;
public:
  uint8_t sensor_id ;
} ;


typedef struct reading2 {
  sample *sensor_sample ;
  uint8_t sensor_id ;
} reading2_t ;

int main() {
    int sum = 0; 

    reading my_reading ;
    for (int i = 1; i <= 10; i++) {
        sum += i; 
    }

    std::cout << "The sum of the first 10 integers is: " << sum << std::endl;
    std::cout << "The sensor id is: " << my_reading.sensor_id << std::endl;
    return 0;
}

