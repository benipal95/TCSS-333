testVectors:  testVectors.o vectors.o vectors.h
  gcc -o  testVectors vectors.o testVectors.o -lm

vectors.o:  vectors.c vectors.h
  gcc -o  vectors.o -c  vectors.c

testVectors.o: testVectors.c vectors.c
  gcc -o  testVectors.o -c  testVectors.c

clean:
  rm  *.o
  rm  testVectors
