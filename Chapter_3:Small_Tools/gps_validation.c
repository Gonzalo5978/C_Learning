#include <stdio.h>

int main() {
  float latitude;
  float longitude;
  char info[80];
  int started = 0;

  puts("data=[");
  while (scanf("%f, %f, %79[^\n]", &latitude, &longitude, info) == 3) {
    if (started)
      printf(",\n");
    else
      started = 1;
  }

  // Data validation
  if (latitude < -90 || latitude > 90) {
    printf("Latitude value error: %f", latitude);
    return 2;
  }
  if (longitude < -180 || longitude > 180) {
    printf("Longitude value error: %f", longitude);
    return 2;
  }
  // End validation

  printf("{latitude: %f, longitude: %f, info: '%s'}", latitude, longitude,
         info);
  puts("\n]");
  return 0;
}
