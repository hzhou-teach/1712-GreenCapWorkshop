// Brian Lu
// 45 mins **********

#include <fstream>
#include <iostream>
#include <vector>
#include <set>
#include <math.h>
#include <algorithm>
#include <limits>

int main()
{
    int x1,y1,x2,y2,//Billboard1
        x3,y3,x4,y4,//Billboard2
        x5,y5,x6,y6;//Truck
    
    FILE *input = fopen("billboard.in", "r");
    fscanf(input, "%d %d %d %d", &x1, &y1, &x2, &y2);
    fscanf(input, "%d %d %d %d", &x3, &y3, &x4, &y4);
    fscanf(input, "%d %d %d %d", &x5, &y5, &x6, &y6);
    fclose(input);

    int billboarddiffx, billboarddiffy, area=0;

    billboarddiffx = std::max(0, std::min(x2,x6)-std::max(x5,x1));
    billboarddiffy = std::max(0, std::min(y2,y6)-std::max(y1,y5));

    area+=billboarddiffx * billboarddiffy;
    billboarddiffx = std::max(0, std::min(x4,x6)-std::max(x5,x3));
    billboarddiffy = std::max(0, std::min(y4,y6)-std::max(y3,y5));

    area+=billboarddiffx * billboarddiffy;

    FILE *output = fopen("billboard.out", "w");
    fprintf(output, "%d\n", (x2-x1)*(y2-y1)+(x4-x3)*(y4-y3)-area);
    fclose(output);

    return 0;
}