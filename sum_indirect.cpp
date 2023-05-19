#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>



void 
setup(int64_t N, uint64_t A[])
{
   printf(" inside sum_indirect problem_setup, N=%ld \n", N);
   std::vector<int> values(N);
   for(int64_t i=0;i<N;i++){
      values[i]=i+1;
   }
   // Copying the vector to passed vectore that is A
   std::copy(values.begin(),values.end(),A);
}

int64_t
sum(int64_t N, uint64_t A[])
{
   printf(" inside sum_indirect perform_sum, N=%ld \n", N);

   int64_t result = 0;
   for(int64_t i=0;i<N;i++){
      result+=A[i];
   }
   return result;
}

