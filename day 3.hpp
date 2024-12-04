#ifndef day_3_hpp
#define day_3_hpp

#include <bits/stdc++.h>

namespace day_3 {

auto solution(const char *path) -> void {
  std::ifstream file(path);

  std::regex pattern(R"(mul\(\d{1,3},\d{1,3}\))");
  std::regex intpattern(R"(\d{1,3})");

  auto sum = 0;

  auto s = std::string{};
  while (std::getline(file, s)) {
    auto it = std::sregex_iterator(s.begin(), s.end(), pattern);
    auto end = std::sregex_iterator();
    
    auto idx = int{};
    for (; it != end; ++it) {
      auto ss = it->str();
      auto jt = std::sregex_iterator(ss.begin(), ss.end(), intpattern);
      auto jend = std::sregex_iterator();
      std::cout << idx << ": " << jt->str() << "\n";
      idx++;
    }

  }

  std::cout << "Part 1: " << "Unsolved" << "\n";
  std::cout << "Part 2: " << "Unsolved" << "\n";
}

}
#endif // day_3_hpp
