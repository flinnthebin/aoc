#include "day 1.hpp"
#include "day 2.hpp"
#include "day 3.hpp"
#include "day 4.hpp"

auto main() -> int {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  std::cout << "========== Day 1 ==========\n";
  day_1::solution("in/d1_in.txt");
  std::cout << "===========================\n\n";
  std::cout << "========== Day 2 ==========\n";
  day_2::solution("in/d2_in.txt");
  std::cout << "===========================\n\n";
  std::cout << "========== Day 3 ==========\n";
  day_3::solution("in/d3_in.txt");
  std::cout << "===========================\n\n";
  std::cout << "========== Day 4 ==========\n";
  day_4::solution("in/d4_in.txt");
  std::cout << "===========================\n\n";



}
