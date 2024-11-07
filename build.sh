#!/bin/bash

rm -rf build

# 创建构建目录（如果不存在）
mkdir -p build

# 进入构建目录
cd build

# 运行cmake
cmake ..

# 编译项目
make

make install

# 如果需要运行项目，可以添加如下命令
# ./3DShower

cd ..