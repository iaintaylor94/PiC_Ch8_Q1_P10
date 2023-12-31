// Function to find the minimum value of an array

#include <stdio.h>

// Declare functions
int minimum (int[], int);

int main(void) {

  // Declare and define arrays
  int array1[5] = { 157, -28, -37, 26, 10 };
  int array2[7] = { 12, 45, 1, 10, 5, 3, 22 };

  // Print the minimum of each array
  printf ("array1 minimum: %d\n", minimum (array1, 5));
  printf ("array2 minimum: %d\n", minimum (array2, 7));

  
  return 0;
}

// Define functions
int minimum (int values[], int numberOfElements) {
  int minValue, i;

  minValue = values [0];

  for (i = 1; i < numberOfElements; i++) {
    if (values[i] < minValue) 
      minValue = values[i];
  }

  return minValue;
}