#include <stdio.h>
#include <stdlib.h>

int main() {
  char card_name[3];
  puts("Enter card_name:");
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
  default:
    val = atoi(card_name);
  }

  /*Here checks if value is 3 to 6*/
  if ((val >= 3) && (val <= 6)) {
    puts("Count up");
    /*If value is not equal to previous "if" the evaluate lettered cards*/
  } else if ((val == 10) || (val == 11)) {
    puts("Count down");
  }
  return 0;
}
