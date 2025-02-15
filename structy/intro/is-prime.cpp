#include <math.h>

// Optimal solution - O(sqrt(n))
bool isPrime(int n) {
  if (n < 2)
    return false;
  for( int i=2;i<=std::sqrt(n);i++) {
    if( n%i == 0)
      return false;
  }
  return true;
}
