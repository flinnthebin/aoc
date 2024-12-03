#include <bits/stdc++.h>

auto main() -> int {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  auto count = 0;

  freopen("input.txt", "r", stdin);
  std::string s;
  while (std::getline(std::cin, s)) {
    std::stringstream line(s);
    auto num = int{}; auto prev = INT_MIN;
    auto first = true; auto increase = true; auto decrease = true; auto skip = false;
    while (line >> num) {
      if (first) {
        prev = num;
        first = false;
        continue;
      }
      if (num > prev) {
        decrease = false;
      } else if (num < prev) {
        increase = false;
      }

      if (num == prev || abs(num - prev) > 3) {
        skip = true;
        break;
      }
      prev = num;
    }

    if (!skip && (increase || decrease)) {
      count++;
    }

  }
  std::cout << count << "\n";
}
