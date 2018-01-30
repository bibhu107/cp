// remove_if example
#include <iostream>     // std::cout
#include <algorithm>    // std::remove_if

bool IsOdd (int i) { return ((i%2)==1); }

int main () {
  string str;
  std::cin>>str;
  myints=s;          // 1 2 3 4 5 6 7 8 9

  // bounds of range:
  str.erase(remove_if(str.begin(), str.end(), isspace), str.end());
  int* pbegin = myints;                          // ^
  int* pend = myints+sizeof(myints)/sizeof(int); // ^                 ^

  pend = std::remove_if (pbegin, pend, isspace());   // 2 4 6 8 ? ? ? ? ?


  return 0;
}
