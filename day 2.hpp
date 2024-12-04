#ifndef day_2_hpp
#define day_2_hpp

#include <bits/stdc++.h>

namespace day_2 {

auto solution(const char *path) -> void {
  std::ifstream file(path);

  auto count = 0;

  std::string s;
  while (std::getline(file, s)) {
    std::stringstream line(s);
    auto num = int{}; auto prev = INT_MIN;
    auto first = true; auto inc = true; auto dec = true; auto skip = false;
    while (line >> num) {
      if (first) {
        prev = num;
        first = false;
        continue;
      }
      if (num > prev) {
        dec = false;
      } else if (num < prev) {
        inc = false;
      }

      if (num == prev || abs(num - prev) > 3) {
        skip = true;
        break;
      }
      prev = num;
    }

    if (!skip && (inc || dec)) {
      count++;
    }

  }
  std::cout << "Part 1: " << count << "\n";
  std::cout << "Part 2: " << "Unsolved" << "\n";
  file.close();
}

}

#endif // day_2_hpp
