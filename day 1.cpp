#include <bits/stdc++.h>

auto main() -> int {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  freopen("day1_input.txt", "r", stdin);

  auto res = int{}; auto count = int{};
  auto x = int{}; auto y = int{};
  auto xvec = std::vector<int>{}; auto yvec = std::vector<int>{};

  while (std::cin >> x >> y) {
    xvec.push_back(x);
    yvec.push_back(y);
    count++;
  }

  std::stable_sort(xvec.begin(), xvec.end());
  std::stable_sort(yvec.begin(), yvec.end());

  for (auto z = 0; z < count; ++z) {
    res += abs(xvec[z] - yvec[z]);
  }
  std::cout << res;
  return res;
}
