#include "trekscii.h"
#include <iostream>
#include <sys/ioctl.h>
#include <unistd.h>

int main(int argc, char **argv) {

  // random seeding copied from stackoverflow :)
  uint32_t seed = 0;
  FILE *devrnd = fopen("/dev/random", "r");
  fread(&seed, 4, 1, devrnd);
  fclose(devrnd);
  srand(seed);

  int dimX, dimY;

  if (argc == 3) {
    dimX = std::stoi(argv[1]);
    dimY = std::stoi(argv[2]);
  } else {
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);

    dimX = w.ws_col;
    dimY = w.ws_row;
  }

  Canvas canvas = Canvas(dimX, dimY - 2);
  canvas.generate();
  canvas.print();

  getchar();
  return 0;
}
