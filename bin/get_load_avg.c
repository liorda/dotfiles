// print system load average
// compile with gcc -Ofast -o get_load_avg get_load_avg.c

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
  double d[3];
  getloadavg(d, 3);
  printf("%.2f,%.2f,%.2f\n", d[0], d[1], d[2]);
  return 0;
}

