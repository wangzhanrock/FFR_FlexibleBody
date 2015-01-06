/*
 * unit_test_main.cc
 *
 *  Created on: 13.06.2013
 *      Author: zwang
 */

#include <iostream>

#include "gtest/gtest.h"

GTEST_API_ int main(int argc, char **argv) {
  std::cout << "Running main() from gtest_main.cc\n";

  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

