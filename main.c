#include <stdio.h>
/* Es un programa para convertir la longitud y peso de un objeto dado en  pies y libras )(sistema americano) a metros y Kilos (sistema internacional). Se van a usar variable de tipo real PIE, LIB, MET y KIL */

int main(void) {
  float PIE, LIB, MET, KIL;
  printf("Por favor ingrese los datos del objeto en:   Pies y   libras   -presione enter después de cada entrada\n");
  scanf("%f %f", &PIE, &LIB);
  MET= PIE*0.09290;
  KIL= LIB*0.45359;
  printf("\nLos datos del objeto son: \nLongitud en metros: %5.2f \t Peso en kilos:%5.2f",MET, KIL);
  printf("\nExcelente trabajo 11-7 ELECTRO!!!\n");
  return 0;
}