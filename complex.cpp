#include <stdio.h>

struct complex
{
  float real;
  float imag;
};

struct complex add(struct complex n1, struct complex n2) 
{
  struct complex result;
  result.real = n1.real + n2.real;
  result.imag = n1.imag + n2.imag;
  return result;
}

int main() 
{
  struct complex n1, n2, result;

  printf("Enter the first complex number (a + bi): ");
  scanf("%f %f", &n1.real, &n1.imag);

  printf("Enter the second complex number (a + bi): ");
  scanf("%f %f", &n2.real, &n2.imag);

  result = add(n1, n2);

  printf("The sum of the two complex numbers is: %f + %fi\n", result.real, result.imag);

  return 0;
}
