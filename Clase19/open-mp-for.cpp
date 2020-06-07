/*

//g++ -fopenmp open-mp-for.cpp 
// for NT in 1 2 3 4 6 7 8; do echo "NTHREADS=$NT"; export OMP_NUM_THREADS=$NT; time ./a.out; done

#include <iostream>
#include <omp.h>
#include <cmath>

int main(void)
{
  const int N = 80000000;
  int * data = nullptr;
  data = new int [N];

#pragma omp parallel for
  for(int ii = 0; ii < N; ++ii) {
    data[ii] = 2*std::sin(ii);
  }

  std::cout << data[N/2] << std::endl;

  delete [] data;

  return 0;
}
*/

/*
#include <iostream>
#include <omp.h>

int main(void)
{
  const int N = 40000000;
  int * data = nullptr;
  data = new int [N];

#pragma omp parallel for
  for(int ii = 0; ii < N; ++ii) {
    data[ii] = 2*ii;
  }

  std::cout << data[N/2] << std::endl;

  delete [] data;

  return 0;
}
} */