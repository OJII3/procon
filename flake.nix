{
  description = "A procon flake.nix";

  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs?ref=nixpkgs-unstable";
    flake-parts.url = "github:hercules-ci/flake-parts";
    systems.url = "github:nix-systems/default";
  };

  outputs =
    inputs@{ self, systems, nixpkgs, flake-parts, ... }:
    flake-parts.lib.mkFlake { inherit inputs; } {
      systems = import inputs.systems;
      perSystem = { config, pkgs, system, ... }:
        {
          # When execute `nix develop`, you go in shell installed nil.
          devShells.default = pkgs.mkShell {
            packages = with pkgs; [
              gcc14
              python312Packages.online-judge-tools
              (clang-tools.overrideAttrs (old: {
                enableLibcxx = true;
                postPatch = ''
                  # Create bits directory and stdc++.h for competitive programming
                  mkdir -p $out/include/bits/
                  cat > $out/include/bits/stdc++.h << 'EOF'
                  #pragma once

                  #include <algorithm>
                  #include <array>
                  #include <bitset>
                  #include <cassert>
                  #include <cctype>
                  #include <cerrno>
                  #include <cfenv>
                  #include <cfloat>
                  #include <chrono>
                  #include <cinttypes>
                  #include <climits>
                  #include <clocale>
                  #include <cmath>
                  #include <complex>
                  #include <csetjmp>
                  #include <csignal>
                  #include <cstdarg>
                  #include <cstddef>
                  #include <cstdint>
                  #include <cstdio>
                  #include <cstdlib>
                  #include <cstring>
                  #include <ctime>
                  #include <cwchar>
                  #include <cwctype>
                  #include <deque>
                  #include <exception>
                  #include <fstream>
                  #include <functional>
                  #include <iomanip>
                  #include <ios>
                  #include <iosfwd>
                  #include <iostream>
                  #include <istream>
                  #include <iterator>
                  #include <limits>
                  #include <list>
                  #include <locale>
                  #include <map>
                  #include <memory>
                  #include <new>
                  #include <numeric>
                  #include <ostream>
                  #include <queue>
                  #include <random>
                  #include <regex>
                  #include <set>
                  #include <sstream>
                  #include <stack>
                  #include <stdexcept>
                  #include <streambuf>
                  #include <string>
                  #include <tuple>
                  #include <type_traits>
                  #include <typeinfo>
                  #include <unordered_map>
                  #include <unordered_set>
                  #include <utility>
                  #include <valarray>
                  #include <vector>

                  using namespace std;
                  EOF
                '';
              }))
            ];
          };
        };
    };
}

