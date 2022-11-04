#include <iostream>
using namespace std;
int sum(int n, int level, int &depth) {
   if (level > depth) {
      depth = level;
      cout << " level = " << level << endl;
   }
      if (n > 0) {
         return n % 10 + sum(n / 10, level + 1, depth);
      }
      else
      {
         return 0;
      }
}
int main() {
   int n;
   int depth = 0;
   cout << "n ="; cin >> n;
   cout << " rez =" << sum(n, 0, depth) << endl;
   cout << "depth = " << depth;
   return 0;
}