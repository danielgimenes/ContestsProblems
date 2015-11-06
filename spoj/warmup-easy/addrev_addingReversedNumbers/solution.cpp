#include <stdio.h>
#include <sstream>
#include <string.h>
#include <algorithm>
#include <iostream>

using namespace std;

int reversed(int n) {
    stringstream stream;
    stream << n;
    string str = stream.str();
    reverse(str.begin(), str.end());
    return atoi(str.c_str());
}

int main() {
    int instances;
    scanf("%d\n", &instances);

    int m, n, sum;
    for (; instances > 0; instances--)
    {
        scanf("%d %d\n", &m, &n);
        sum = reversed(m) + reversed(n);
        printf("%d\n", reversed(sum));
    }
    return 0;
}
