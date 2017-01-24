#include "vectors.h"

//vector init function
vector vector_init(float x, float y, float z){
 vector v;
 v.x=x;
 v.y=y;
 v.z=z;
 v.length=sqrt(x*x+y*y+z*z);
	return v;
}

//write vector_add function that takes two vectors as parameters and returns a vector that is the sum of the two vectors
vector vector_add(vector* v1, vector* v2) {
  vector v3 = vector_init((v1->x) + (v2->x), (v1->y) + (v2->y),
                          (v1->z) + (v2->z));
  return v3;
}

// Write vector_dot function that takes two vectors as parameters and returns a float which is the dot product (look it up if you don't know what a dot product is).
float vector_dot(vector* v1, vector* v2)  {
  float dot = ((v1->x) * (v2->x)) + ((v1->y) * (v2->y)) + ((v1->z) * (v2->z));
  return dot;
}

//write vector_normalize function that takes a pointer to a vector as a parameter and modify the vector by dividing each of the x,y,z components by its length. Check if the length is zero and return 1 if it is zero (unsuccessful normalization) , otherwise return 0 (successful normalization)
int vector_normalize(vector* v1)  {
  vector temp = *v1;
  if(temp.length == 0)  {
    return 1;
  } else  {
    temp.x = temp.x/temp.length;
    temp.y = temp.y/temp.length;
    temp.z = temp.z/temp.length;
    *v1 = temp;
    return 0;
  }
}

//write vector_print function that prints out the x,y,z and length of a vector on separate lines
void vector_print(vector v1)  {
  printf("x: %g\n", (v1.x));
  printf("y: %g\n", (v1.y));
  printf("z: %g\n", (v1.z));
}
