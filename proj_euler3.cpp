/**
* @author    Tony Wu
* @version   1.0
* @since     04-18-15
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> prime_factor(long n);

int main() {
  vector<int> primes = prime_factor(600851475143);
  return 0;
}

vector<int> prime_factor(long n) {
  long i = 2;
  vector<int> factors;

  while (i <= n) {
    if (n%i == 0) {
      cout << "Factor of number: " << int(i) << endl;
      factors.push_back(i);
      while (n%i == 0) {
        n /= i;
      }
    }
    i++;
  }
  return factors;
}
