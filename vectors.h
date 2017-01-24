//enter the necessary includes - hint 3 different includes needed - google for which includes need to be added for the C functions used
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct {
  float x ;
  float y ;
  float z ;
  float length ;
  
 //enter definition for float fields for x,y,z,length
} vector;

//header for vector_init fucniton
vector vector_init(float x, float y, float z);
vector vector_add(vector* v1, vector* v2);
float vector_dot(vector* v1, vector* v2);
int vector_normalize(vector* v1);
void vector_print(vector v1);
//header for vector_add function, vector_dot function, vector_normalize function and vector_print function
