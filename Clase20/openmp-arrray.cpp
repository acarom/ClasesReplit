
/*
#include <omp.h>
#include <cstdio>
#include <iostream>
#include <vector>
#include <numeric>
#include <cstdlib>
#include <algorithm>

const int N = 10000;

int main(int argc, char *argv[]) {

  //int nthreads = 1;
 std::vector<double> data (N);
 std::iota(data.begin(), data.end(), 0);
  int nthreads = std::atoi(argv[1]);
  //omp_set_num_threads(nthreads);
 std::vector<int> sumas(nthreads, 0);
 std::fill(sumas.begin(), sumas.end(), 0);

#pragma omp parallel num_threads(nthreads)  //private(tid) 
  {
    int tid = omp_get_thread_num();
   
    int size = N/nthreads; 
    int imin = tid * size;
    
    for (int ii = imin; ii < imin + size ; ++ii) {
      sumas[tid] = sumas[tid] + data[ii]; // OJO
    }
  }  
  
  int suma = 0;
  for(auto & x : sumas) {
   suma+=x;
  }
  
  //nthreads = omp_get_num_threads();
   std::cout << "suma: " << suma << std::endl;

  return 0;
}

*/
