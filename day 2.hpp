#ifndef day_2_hpp
#define day_2_hpp

#include <bits/stdc++.h>

namespace day_2 {

  auto solution(const char *path) {
    freopen(path, "r", stdin);

    auto count = 0;
    std::string s;
    while (std::getline(std::cin, s)) {
      std::stringstream line(s);
      auto num = int{}; auto prev = INT_MIN;
      auto first = true; auto inc = true; auto dec = true; auto skip = false;
      while (line >> num) {
        
      }
   }

  }
}

#endif // day_2_hpp
