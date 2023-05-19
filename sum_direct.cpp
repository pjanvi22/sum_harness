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
   printf(" inside direct_sum problem_setup, N=%ld \n", N);
   // Directly intializiung from 1 to N
   for(int64_t i=0;i<N;i++){
      A[i]=i+1;
   }
}

int64_t
sum(int64_t N, uint64_t A[])
{
   printf(" inside direct_sum perform_sum, N=%ld \n", N);
   //Direct suming the values N values in A
   int64_t result = 0;
   for(int64_t i=0;i<N;i++){
      result+=A[i];
   }
   
   return result;
}

