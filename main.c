#include <stdio.h>

struct Vector
{
    int x;
    int y;
    int dir;
    int spd;
};


struct Main {
    int a;
    int b;
};

int dereferMainStruct(struct Main *str) {
    printf("%d \n", str->a);
    printf("%d \n", str->b);
    return 0;
}

int dereferVectorStruct(struct Vector *vec) {
    printf("VectorPosX: %d \nVectorPosY: %d \nVectorDirection: %d \nVectorSpeed: %d \n", vec->x, vec->y, vec->dir, vec->spd);
    return 0;
}

int main() {
    struct Main myMain;
    struct Vector newVector;

    myMain.a = 100;
    myMain.b = 20;

    newVector.x = 0;
    newVector.y = 0;
    newVector.spd = 100;
    newVector.dir = 1;
    dereferMainStruct(&myMain);
    dereferVectorStruct(&newVector);
    return 0;
}