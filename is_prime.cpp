#include <bits/stdc++.h>

using namespace std;

int main() {
  int n = 1000000;
  for (int i = 3; i < n; i += 2) {
    bool is_prime = true;
    for (int j = 3; j < i; j++) {
      if (i % j == 0) {
        is_prime = false;
        break;
      }
    }
    if (is_prime) {
      cout << i << ", ";
    }
  }
}
