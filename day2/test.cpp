#include <bits/stdc++.h>

auto main() -> int {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  auto count = 0;

  freopen("input.txt", "r", stdin);
  std::string s;
  while (std::getline(std::cin, s)) {
    std::stringstream line(s);
    auto num = int{};
    auto prev = INT_MIN;
    auto first = true;
    auto inc = true, dec = true, skip = false;
    auto dampener_used = false; // Track if dampener was used
    auto dampener_num = int{};  // Track skipped number, if any

    while (line >> num) {
      if (first) {
        prev = num;
        first = false;
        continue;
      }

      // Handle dampener case
      if (dampener_used) {
        if (num > prev && dampener_num > prev) {
          inc = false; // Dampener invalidates increasing order
        }
        if (num < prev && dampener_num < prev) {
          dec = false; // Dampener invalidates decreasing order
        }
        // Reset dampener state
        dampener_used = false;
      }

      if (num > prev) {
        if (!inc) {
          if (!dampener_used) {
            dampener_used = true;
            dampener_num = num;
            continue; // Skip this number
          } else {
            skip = true;
            break;
          }
        }
        dec = false;
      } else if (num < prev) {
        if (!dec) {
          if (!dampener_used) {
            dampener_used = true;
            dampener_num = num;
            continue; // Skip this number
          } else {
            skip = true;
            break;
          }
        }
        inc = false;
      }

      if (num == prev || abs(num - prev) > 3) {
        if (!dampener_used) {
          dampener_used = true;
          dampener_num = num;
          continue; // Skip this number
        } else {
          skip = true;
          break;
        }
      }

      prev = num; // Update prev only after handling dampener
    }

    if (!skip && (inc || dec)) {
      count++;
    }
  }

  std::cout << count << "\n";
}
