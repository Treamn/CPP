# CMake generated Testfile for 
# Source directory: /home/whyy/Code/CPP/cmake/cmake-3.26.3-tutorial-source/Step5
# Build directory: /home/whyy/Code/CPP/cmake/cmake-3.26.3-tutorial-source/Step5/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(Runs "/home/whyy/Code/CPP/cmake/cmake-3.26.3-tutorial-source/Step5/build/Tutorial" "25")
set_tests_properties(Runs PROPERTIES  _BACKTRACE_TRIPLES "/home/whyy/Code/CPP/cmake/cmake-3.26.3-tutorial-source/Step5/CMakeLists.txt;53;add_test;/home/whyy/Code/CPP/cmake/cmake-3.26.3-tutorial-source/Step5/CMakeLists.txt;0;")
add_test(Usage "/home/whyy/Code/CPP/cmake/cmake-3.26.3-tutorial-source/Step5/build/Tutorial")
set_tests_properties(Usage PROPERTIES  PASS_REGULAR_EXPRESSION "Usage.*number" _BACKTRACE_TRIPLES "/home/whyy/Code/CPP/cmake/cmake-3.26.3-tutorial-source/Step5/CMakeLists.txt;58;add_test;/home/whyy/Code/CPP/cmake/cmake-3.26.3-tutorial-source/Step5/CMakeLists.txt;0;")
add_test(StandardUse "/home/whyy/Code/CPP/cmake/cmake-3.26.3-tutorial-source/Step5/build/Tutorial" "4")
set_tests_properties(StandardUse PROPERTIES  PASS_REGULAR_EXPRESSION "4 is 2" _BACKTRACE_TRIPLES "/home/whyy/Code/CPP/cmake/cmake-3.26.3-tutorial-source/Step5/CMakeLists.txt;64;add_test;/home/whyy/Code/CPP/cmake/cmake-3.26.3-tutorial-source/Step5/CMakeLists.txt;0;")
subdirs("MathFunctions")
