#include<stdio.h>
#define DRAW_STAR printf("*")
#define DRAW_SPACE printf(" ")
#define NEW_LINE printf("\n")

int main(void) {
    const int TRIANGLE_HEIGHT = 5;

    /* Triangle 1 - left-aligned, growing */
    for (int row = 1; row <= TRIANGLE_HEIGHT; row++) {
        for (int star = 1; star <= row; star++) {
            DRAW_STAR;
        }
        NEW_LINE;
    }
    NEW_LINE;

    /* Triangle 2 - left-aligned, shrinking */
    for (int row = TRIANGLE_HEIGHT; row >= 1; row--) {
        for (int star = 1; star <= row; star++) {
            DRAW_STAR;
        }
        NEW_LINE;
    }
    NEW_LINE;

    /* Triangle 3 - right-aligned, growing */
    for (int row = 1; row <= TRIANGLE_HEIGHT; row++) {
        for (int space = 1; space <= TRIANGLE_HEIGHT - row; space++) {
            DRAW_SPACE;
        }
        for (int star = 1; star <= row; star++) {
            DRAW_STAR;
        }
        NEW_LINE;
    }
    NEW_LINE;

    /* Triangle 4 - right-aligned, shrinking */
    for (int row = TRIANGLE_HEIGHT; row >= 1; row--) {
        for (int space = 1; space <= TRIANGLE_HEIGHT - row; space++) {
            DRAW_SPACE;
        }
        for (int star = 1; star <= row; star++) {
            DRAW_STAR;
        }
        NEW_LINE;
    }

    return 0;
}