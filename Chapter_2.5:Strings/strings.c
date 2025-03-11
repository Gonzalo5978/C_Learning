#include <stdio.h>
#include <string.h>

char tracks[][80] = {
    "Jesus of Suburbia",
    "It's a wonderful day",
    "November Rain",
    "Thunderstruck",
};

void find_track(char song_name[]) {
  int i;
  for (i = 0; i < 5; i++) {
    if (strstr(tracks[i], song_name)) {
      printf("Track %i: '%s'\n", i, tracks[i]);
    }
  }
}

int main() {
  char song_name[80];
  printf("Introduce song name: ");
  /*fgets(search_for, 80, stdin); // returns \n so the strstr() search fails*/
  scanf("%79s", song_name);
  find_track(song_name);
  return 0;
}
