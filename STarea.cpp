/*

#include <cstdio>
#include <cstdlib>
#include <cmath>
#include "mpi.h"

int main(int argc, char **argv)
{
  int i, ii;
  double sum;

  int pid, np;
  MPI_Init(&argc, &argv);
  MPI_Comm_rank(MPI_COMM_WORLD, &pid);
  MPI_Comm_size(MPI_COMM_WORLD, &np);

  int N;
  double p = 0.0 ;

  if (0 == pid) {
  std::printf("Por favor escriba el tamaño del arreglo:\n");
  std::scanf("%d", &N);
  std::printf("%d\n", N);

  std::printf("Por favor escriba el valor de p:\n");
  std::printf("%lf", &p);
  std::printf("%d\n", p);
  }

  MPI_Bcast(&N, 1, MPI_INT, 0, MPI_COMM_WORLD);

  MPI_Bcast(&p, 1, MPI_DOUBLE, 0, MPI_COMM_WORLD);

  double * V = new double [N];

  int npros = N/np;
  int imin = pid*npros;

  for ( i = imin; i < imin + npros; ++i) {
    V[i] = 2*i;
  }


  for ( ii = imin; ii < imin + npros; ++ii) {
    sum += std::pow(V[ii],p);
  }

  double total = 0;
  MPI_Reduce(&sum, &total, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);

 if (0 == pid) {
  double ftotal = 0;
  ftotal = std::pow(total, 1.0 / p);
    std::printf("La norma p es %lf\n", ftotal);
 }

     delete [] V;

  MPI_Finalize();

  return 0;
}

*/