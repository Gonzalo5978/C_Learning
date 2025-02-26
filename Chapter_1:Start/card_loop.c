#include <stdio.h>
#include <stdlib.h>

int main() {
  char card_name[3];
  int count = 0;
  while (card_name[0] != 'X') { // Check if first character it's X
    puts("\nEnter card_name:"); // User input
    scanf("%2s", card_name);
    int val = 0;
    switch (card_name[0]) {
    case 'K':
    case 'Q':
    case 'J':
      val = 10;
      break;
    case 'A':
      val = 11;
      break;
    case 'X':
      continue; /* break; don't break because we are on a switch. With
                   continue the switch evaluates again and detects condition
                   card_name[0]=X and stops */
    default:
      val = atoi(card_name);                  // Convert string to int
      if ((val > 10) || (val < 1)) {          // Checks if input it's valid
        printf("\nInvalid value: %i\n", val); // Show last input
        continue;
      }
    }

    /*Here checks if value is 3 to 6*/
    if ((val >= 3) && (val <= 6)) {
      count++;
      /*If value is not equal to previous "if" the evaluate lettered cards*/
    } else if ((val == 10) || (val == 11)) {
      count--;
    }
    printf("Current count: %i\n", count);
  }
  return 0;
}
