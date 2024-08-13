#include <stdio.h>

char ide[] = "integrated development environment";
char usb[] = "universal serial bus";
char cpu[] = "central processing unit";
char gpu[] = "graphics processing unit";
char lan[] = "local arena network";
char wan[] = "wide arena network";

int num;

void printAbbreviation(short num) {
  switch (num) {
    case 1:
      printf("stands for %s\n", ide); 
      break; 
    case 2:
      printf("stands for %s\n", usb); 
      break; 
    case 3:
      printf("stands for %s\n", gpu); 
      break; 
    case 4:
      printf("stands for %s\n", gpu); 
      break; 
    case 5:
      printf("stands for %s\n", lan); 
      break; 
    case 6:
      printf("stands for %s\n", wan); 
      break; 

  } 

}

int main() {
  printf("========== WELCOME TO COMPUTER ABBREVIATION ==========\n");
  printf("1. ide\n2. usb\n3. cpu\n4. gpu\n5. lan\n6. wan\n");
  printf("Please enter number here: ");
  scanf("%d", &num);
  printAbbreviation(num);
  return 0;
}


