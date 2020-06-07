/*

#include <omp.h>
#include <iostream>
#include <cstdlib>
#include <cmath>

const int N = 100000000;
const double XMIN = 0.0;
const double XMAX = 1000.0;
const double DX = (XMAX-XMIN)/N;

double f(double x);

int main(int argc, char *argv[]) 
{
  int nthreads = std::atoi(argv[1]);

  double suma = 0.0;
#pragma omp parallel for num_threads(nthreads) reduction(+:suma)  
  for (int ii = 0; ii < N; ++ii) {
    double x = XMIN + ii*DX;
    suma += DX*f(x); 
  }
  
  std::cout << "Integral calculada: " << suma << std::endl;
  //std::cout << "Integral esperada : " << (XMAX*XMAX*XMAX - XMIN*XMIN*XMIN)/3 << std::endl;

  return 0;
}

double f(double x)
{
  return x*std::sin(x)/(2+std::cos(x));
}
*/

//https://github.com/iluvatar1/2020-I-HerrComp/blob/master/2020-05-27-OpenMP-3/openmp-integral.cpp