cmake_minimum_required(VERSION 3.10)
project(rse)

# C++のバージョンを指定
set(CMAKE_CXX_STANDARD 17)

# gcc 指定
set(CMAKE_C_COMPILER "gcc")
set(CMAKE_CXX_COMPILER "g++")
# コンパイルオプション
set(CMAKE_CXX_FLAGS "-pthread")

# Spotのインクルードパスとライブラリパスを指定
include_directories("/root/usr/include")
link_directories("/root/usr/lib")

# ソースファイルの指定
add_executable(rse /root/rse/src/main.cpp)

# Spotのライブラリをリンク
target_link_libraries(rse spot)
target_link_libraries(rse bddx)
