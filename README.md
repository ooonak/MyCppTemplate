# MyCppTemplate

### Build, test & run
```bash
$ cmake -S . -B build -G Ninja -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_BUILD_TYPE=Debug \
  -DCMAKE_INSTALL_PREFIX=$HOME/usr/local
$ cmake --build build
$ ctest --test-dir build

# Or access artifacts directly
$ ./build/tests/MyCppTemplateTests 
$ ./build/example/MyCppTemplateExample

# Install
$ cmake --install build

# Pack
$ cd build; cpack -G TGZ 
```

## Next step
  - nix
  - conan
  - set compiler flags
  - coverage
  - valgrind
  - cppcheck
  - clang-sanitizers

## References
  - https://github.com/mpusz/new-project-template
  - https://github.com/TheLartians/ModernCppStarter
  - https://cmake.org/cmake/help/latest/guide/tutorial/index.html
