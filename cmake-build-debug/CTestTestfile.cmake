# CMake generated Testfile for 
# Source directory: /home/duc/CLionProjects/advancedtopics
# Build directory: /home/duc/CLionProjects/advancedtopics/cmake-build-debug
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[tests]=] "./tests")
set_tests_properties([=[tests]=] PROPERTIES  ENVIRONMENT "CTEST_OUTPUT_ON_FAILURE=1" _BACKTRACE_TRIPLES "/home/duc/CLionProjects/advancedtopics/CMakeLists.txt;45;add_test;/home/duc/CLionProjects/advancedtopics/CMakeLists.txt;0;")
subdirs("_deps/catch2-build")
