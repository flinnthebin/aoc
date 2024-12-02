#include <bits/stdc++.h>

auto main() -> int {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  freopen("input.txt", "r", stdin);

  auto x = int{}; auto y = int{};
  auto vx = std::vector<int>{}; auto vy = std::vector<int>{};

  while (std::cin >> x >> y) {
    vx.push_back(x);
    vy.push_back(y);
  }

  stable_sort(vx.begin(), vx.end());
  stable_sort(vy.begin(), vy.end());

  auto vz = std::vector<std::pair<int, int>>{};

  for (const auto& val : vx) {
    auto const num = std::count(vy.begin(), vy.end(), val);
    vz.push_back(std::make_pair(val, num));
  }

  auto sum = int{};

  for (const auto& pair : vz) {
    sum += (pair.first * pair.second);
  }

  std::cout << sum << "\n";
}
