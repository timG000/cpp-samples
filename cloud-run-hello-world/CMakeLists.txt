# ~~~
# Copyright 2020 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
# ~~~

# [START cloudrun_helloworld_makelist]
cmake_minimum_required(VERSION 3.10)

# Define the project name 
project(cpp-samples-cloud-run-hello-world CXX C)

# Configure the Compiler options, we will be using C++17 features.
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost 1.66 REQUIRED COMPONENTS program_options)
find_package(Threads)

add_executable(cloud_run_hello
              headers/utils.h
              src/cloud_run_hello.cpp)

target_link_libraries(
  cloud_run_hello PRIVATE Boost::headers Boost::program_options
                          Threads::Threads)

include(GNUInstallDirs)
install(TARGETS cloud_run_hello RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})

enable_testing()
add_executable(tester1 tests/simple_test.cpp)
add_executable(tester2 tests/simple_test2.cpp)
add_test(Tester1 tester1)
add_test(Tester2 tester2)
# [END cloudrun_helloworld_makelist]
