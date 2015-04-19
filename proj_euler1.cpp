/**
 * @author    Tony Wu
 * @version   1.0
 * @since     04-18-15
 */

#include <iostream>

using namespace std;

int natural_sum_of_3_or_5(int n);

int main() {
  cout << natural_sum_of_3_or_5(1000) << endl;
  return 0;
}

int natural_sum_of_3_or_5(int n) {
  int result = 0;
  for (int i = 0; i < n; i++) {
    if ((i%3==0)||(i%5==0)) {
      result += i;
    }
  }
  return result;
}
