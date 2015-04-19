/**
* @author    Tony Wu
* @version   1.0
* @since     04-18-15
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int fibonacci(int n);
int even_sum_fib();

int main() {
  cout << "hi" << endl;
  cout << fibonacci(0) << endl;
  cout << fibonacci(1) << endl;
  cout << fibonacci(2) << endl;
  cout << fibonacci(3) << endl;
  cout << even_sum_fib() << endl;
  return 0;
}

int fibonacci(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  }

  return fibonacci(n-1) + fibonacci(n-2);
}

int even_sum_fib() {
  int n = 0;
  int sum = 0;
  int fib = fibonacci(n);

  while (fib < 4000000) {
    if (fib%2 == 0) {
      sum += fib;
      cout << "fib term: " << fib << endl;
      cout << "sum thus far: " << sum << endl;
    }
    n++;
    fib = fibonacci(n);
  }

  return sum;
}
