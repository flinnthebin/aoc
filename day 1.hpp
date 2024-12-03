#ifndef day_1_hpp
#define day_1_hpp

namespace day_1 {

  auto solution(const char *path) {
    freopen(path, "r", stdin);

    auto res = int{}; auto idx = int{};
    auto x = int{}; auto y = int{};
    auto x_arr = std::array<int, 1000>{}; auto y_arr = std::array<int, 1000>{};

    while (std::cin >> x >> y) {
      x_arr[idx] = x;
      y_arr[idx] = y;
      idx++;
    }

    std::stable_sort(x_arr.begin(), x_arr.end());
    std::stable_sort(y_arr.begin(), y_arr.end());

    for (auto z = 0; z < idx; ++z) {
      res += abs(x_arr[z] - y_arr[z]);
    }
    std::cout << "Part 1: " << res << "\n";

    idx = 0;
    auto z_arr = std::array<std::pair<int, int>, 1000>{};

    for (const auto& val : x_arr) {
      const auto num = std::count(y_arr.begin(), y_arr.end(), val);
      z_arr[idx] = std::make_pair(val, num);
      idx++;
    }

    auto sum = int{};
    for (const auto& pair : z_arr) {
      sum += (pair.first * pair.second);
    }

    std::cout << "Part 2: " << sum << "\n";
  }

}

#endif // day_1_hpp
