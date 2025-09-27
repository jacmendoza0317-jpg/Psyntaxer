// SPDX-License-Identifier: GPL-3.0-or-later
// Copyright (c) 2025 Jac

#include <iostream>
#include <vector>

extern "C" {
  void route(const char* code) {
    for (size_t i = 0; code[i]; ++i) {
      switch (code[i]) {
        case '>': std::cout << "Move right\n"; break;
        case '<': std::cout << "Move left\n"; break;
        case 'v': std::cout << "Move down\n"; break;
        case '^': std::cout << "Move up\n"; break;
        case '@': std::cout << "End program\n"; return;
      }
    }
  }
}
