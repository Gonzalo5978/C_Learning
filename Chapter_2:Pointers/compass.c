#include <stdio.h>

// Now we take the address value of the variable passed
void go_south_east(int *lat, int *lon) {
  // Then operate directly on the memory values
  *lat = *lat - 1;
  *lon = *lon + 1;
}

int main() {
  int latitude = 32;
  int longitude = -64;
  go_south_east(
      &latitude,
      &longitude); // We deliver variable pointer address to the function
  printf("Avast! Now at: [%i, %i]", latitude, longitude);
  return 0;
}
