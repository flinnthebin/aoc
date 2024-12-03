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
    auto first = true; auto inc = true; auto dec = true; auto skip = false;
    auto dampener = true;
    while (line >> num) {
      if (first) {
        prev = num;
        first = false;
        continue;
      }
      if (num > prev) {
        if (dampener && !inc) {
          dampener = false;
          continue;
        }
        dec = false;
      } else if (num < prev) {
        if (dampener && !dec) {
          dampener = false;
          continue;
        }
        inc = false;
      }

      if (num == prev || abs(num - prev) > 3) {
        if (dampener) {
          dampener = false;
          continue;
        } else {
          skip = true;
          break;
        }
      }
      prev = num;
    }

    if (!skip && (inc || dec)) {
      count++;
    }
  }
  std::cout << count << "\n";
}
