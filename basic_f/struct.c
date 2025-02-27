#include <stdio.h>

struct square {
    int length;
    int width;
};

int area(struct square s) {
    return s.length*s.width;
}

int perimeter(struct square s) {
    return (s.length+s.width)*2;
}

int main() {
    struct square a = {30,20};
    printf("perimeter is %d\n", perimeter(a));
    printf("area is %d\n", area(a));
    return 0;
}