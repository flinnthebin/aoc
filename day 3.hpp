#ifndef day_3_hpp
#define day_3_hpp

#include <bits/stdc++.h>

namespace day_3 {

auto solution(const char *path) -> void {
  std::ifstream file(path);

  std::regex pattern(R"(^mul\(\d{1,3},\d{1,3}\)$)");

  std::string s;
  while (std::getline(file, s)) {
    std::stringstream line(s);
    auto container = std::string{};
    auto idx = int{};
    while (line >> container) {
      std::cout << idx << ": " << std::regex_search(container, pattern) << "\n";
      idx++;
    }
  }

  std::cout << "Part 1: " << "Unsolved" << "\n";
  std::cout << "Part 2: " << "Unsolved" << "\n";
}

}
#endif // day_3_hpp
