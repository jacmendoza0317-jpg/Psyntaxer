// SPDX-License-Identifier: GPL-3.0-or-later
// Copyright (c) 2025 Jac

#include <cstring>

extern "C" {
  void dispatch(const char* input) {
    if (strstr(input, "[BF]")) {
      run(input + 4); // Skip tag
    } else if (strstr(input, "[F]")) {
      route(input + 3); // Skip tag
    } else {
      std::cout << "Unknown signal format\n";
    }
  }
}
