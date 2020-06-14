// Brian Lu
// 20 mins... segmentation fault?

#include <fstream>
#include <iostream>
#include <vector>
#include <set>
#include <math.h>
#include <algorithm>
#include <limits>

int main()
{
    int N;

    FILE *input = fopen("shuffle.in", "r");
    N = fscanf(input, "%d", &N);
    int places[N], ids[N], fin[101];
    for (int i = 0; i < N; i++) {
      fscanf(input, "%d", &places[N]);
    }
    for (int i = 0; i < N; i++) {
      fscanf(input, "%d", &ids[N]);
    }
    fclose(input);

    for (int i = 0; i < N; i++) {
      fin[places[i]-1] = ids[i];
    }
    
    
    FILE *output = fopen("shuffle.out", "w");
    for (int i = 0; i < N; i++) {
      fprintf(output, "%d\n", fin[N]);
    }
    fclose(output);

    return 0;
}