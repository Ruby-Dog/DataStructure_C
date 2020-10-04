#include <stdio.h>
#include <stdlib.h>

/*多項式的運算*/

//polynomial 多項式

void showPoly(double poly[]);
void addPolys(double poly1[],double poly2[],double poly3[]);
void subPolys(double poly1[],double poly2[],double poly3[]);
void mutiPolys(double poly1[],double poly2[],double poly4[]);

double max_doble_value(double a,double b);

int main(void) {
  // 5x^4 + 4x^3 - 2x^2 + 7
  double poly1[]={ 4.0 , 5.0 ,4.0 , 2.0 ,0.0 , 7,0 } ;
  // 3x^5 + 2x^4 + 4x^1 +2  
  double poly2[]={ 5.0 , 3.0 ,2.0 , 0.0 ,0.0 , 4,0 , 2.0 } ;
  
  //For evaluation poly
  // n + 2
  double poly3[7]; //For addition and substraction     (5+2)
  double poly4[11]; //For multipilation    ((4+5)+2)

  //show polynomial
  printf("polynomial 1:\n");
  showPoly(poly1);
  printf("polynomial 2:\n");
  showPoly(poly2);

  //Doing addition of polynomial 1 and polynomial 2
  addPolys(poly1,poly2,poly3);
  //show result;
  printf("poly1 + poly2 = \n");
  showPoly(poly3);


  //Doing substraction of polynomial 1 and polynomial 2
  subPolys(poly1,poly2,poly3);
  //show result;
  printf("poly1 - poly2 = \n");
  showPoly(poly3);
  
  //Doing multipilation of polynomial 1 and polynomial 2
  subPolys(poly1,poly2,poly4);
  //show result;
  printf("poly1 * poly2 = \n");
  showPoly(poly4);
  




  return 0;
}
