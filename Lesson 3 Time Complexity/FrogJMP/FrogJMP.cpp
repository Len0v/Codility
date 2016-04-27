#include <math.h>

using namespace std;

int solution(int X, int Y, int D) {
    double result = Y-X;
    result = result / D;
    return ceil(result);
}