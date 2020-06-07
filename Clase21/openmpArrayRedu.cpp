/*

#include <omp.h>
#include <iostream>
#include <cstdio>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cstdlib>
#include <cmath>


const int N = 100000000;

int main(int argc, char *argv[]) 
{
  std::vector<double> data(N);
  std::fill(data.begin(), data.end(), 1.5); 
  int nthreads = std::atoi(argv[1]);
  double suma = 0.0;

#pragma omp parallel for reduction(+:suma) num_threads(nthreads)
  for (int ii = 0; ii < N; ++ii) {
    suma += std::sin(data[ii]); 
  }

  std::cout << "mean calculada: " << suma/N << std::endl;
  //std::cout << "mean esperada : " << 1.5 << std::endl;

  return 0;
}

*/