#include <stdio.h>
#include <stdlib.h>

const int pins[2] = {1234, 4729};
const char* passwords[2] = {"Password1", "TopSecret"};

int main() {
  char entered_pin[8];
  char user[8];

  printf("Enter user id:");
  fgets(user, sizeof(char) * 8, stdin);

  int expected_pin = pins[atoi(user)];

  printf("Enter pin:");

  fgets(entered_pin, sizeof(entered_pin) * 8, stdin);

  if (expected_pin == atoi(entered_pin)) {
    printf("Pin accepted. Your stored password is %s\n", passwords[atoi(user)]);
  } else {
    printf("Invalid pin for user %s", user);
  }
}
