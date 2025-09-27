// SPDX-License-Identifier: GPL-3.0-or-later
// Copyright (c) 2025 Jac

#include <iostream>
#include <vector>

extern "C" {
  void run(const char* code) {
    std::vector<unsigned char> memory(30000, 0);
    size_t ptr = 0;

    for (size_t i = 0; code[i]; ++i) {
      switch (code[i]) {
        case '>': ++ptr; break;
        case '<': --ptr; break;
        case '+': ++memory[ptr]; break;
        case '-': --memory[ptr]; break;
        case '.': std::cout << memory[ptr]; break;
        case ',': memory[ptr] = std::cin.get(); break;
      }
    }
  }
}
