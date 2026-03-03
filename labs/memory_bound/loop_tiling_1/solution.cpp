#include "solution.hpp"
#include <algorithm>

bool solution(MatrixOfDoubles &in, MatrixOfDoubles &out) {
  static constexpr int TILE_SIZE = 4;
  int size = in.size();
  for (int ii = 0; ii < size; ii+= TILE_SIZE) {
    for (int jj = 0; jj < size; jj+= TILE_SIZE) {
      for (int j = jj; j < std::min(jj + TILE_SIZE, size); j++) {
      for (int i = ii; i < std::min(ii + TILE_SIZE, size); i++) {
          out[i][j] = in[j][i];
        }
      }
    }
  }

  return out[0][size - 1];
}
