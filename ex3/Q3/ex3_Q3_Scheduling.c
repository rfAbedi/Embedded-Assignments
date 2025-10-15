#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define BUFFER1_SIZE 4 // From a1 to a0
#define BUFFER2_SIZE 3 // From a1 to a2
#define BUFFER3_SIZE 4 // From a2 to a3
#define BUFFER4_SIZE 6 // From a3 to a1


#define BUFFER1_INITIAL_TOKEN 4
#define BUFFER2_INITIAL_TOKEN 3
#define BUFFER3_INITIAL_TOKEN 4
#define BUFFER4_INITIAL_TOKEN 6

typedef struct {
    int *buffer;
    int size;
    int head;
    int tail;
    int count;
} CircularBuffer;

void init_buffer(CircularBuffer *cb, int size) {
    cb->buffer = (int *)malloc(sizeof(int) * size);
    cb->size = size;
    cb->head = 0;
    cb->tail = 0;
    cb->count = 0;
}

void free_buffer(CircularBuffer *cb) {
    free(cb->buffer);
}

bool push_token(CircularBuffer *cb, int value) {
    if (cb->count < cb->size) {
        cb->buffer[cb->tail] = value;
        cb->tail = (cb->tail + 1) % cb->size;
        cb->count++;
        return true;
    } else {
        return false;
    }
}

int pop_token(CircularBuffer *cb) {
    if (cb->count > 0) {
        int value = cb->buffer[cb->head];
        cb->head = (cb->head + 1) % cb->size;
        cb->count--;
        return value;
    } else {
        return -1;
    }
}

void a0() {
    printf("a0 fired.\n");
}

void a1() {
    printf("a1 fired.\n");
}

void a2() {
    printf("a2 fired.\n");
}

void a3() {
    printf("a3 fired.\n");
}

int q[4] = {2, 3, 1, 4};

CircularBuffer buffer1, buffer2, buffer3, buffer4;

void fire_actor(int actor) {
    switch (actor) {
        case 0:
            if (q[0] > 0 && buffer1.count >= 3) {
                a0();
                for (int i = 0; i < 3; ++i) {
                    pop_token(&buffer1);
                }
                q[0]--;
            }
            break;
        case 1:
            if (q[1] > 0 && buffer4.count >= 4) {
                a1();
                for (int i = 0; i < 2; ++i) {
                    push_token(&buffer1, 1);
                }
                push_token(&buffer2, 1);
                for (int i = 0; i < 4; ++i) {
                    pop_token(&buffer4);
                }
                q[1]--;
            }
            break;
        case 2:
            if (q[2] > 0 && buffer2.count >= 3) {
                a2();
                for (int i = 0; i < 4; ++i) {
                    push_token(&buffer3, 1);
                }
                for (int i = 0; i < 3; ++i) {
                    pop_token(&buffer2);
                }
                q[2]--;
            }
            break;
        case 3:
            if (q[3] > 0 && buffer3.count >= 1) {
                a3();
                for (int i = 0; i < 3; ++i) {
                    push_token(&buffer4, 1);
                }
                pop_token(&buffer3);
                q[3]--;
            }
            break;
    }
}

int main() {
    init_buffer(&buffer1, BUFFER1_SIZE);
    init_buffer(&buffer2, BUFFER2_SIZE);
    init_buffer(&buffer3, BUFFER3_SIZE);
    init_buffer(&buffer4, BUFFER4_SIZE);

    buffer1.count = BUFFER1_INITIAL_TOKEN;
    buffer2.count = BUFFER2_INITIAL_TOKEN;
    buffer3.count = BUFFER3_INITIAL_TOKEN;
    buffer4.count = BUFFER4_INITIAL_TOKEN;

    int schedule[] = {0, 1, 0, 2, 3, 3, 1, 3, 1, 3};
    int schedule_length = 10;

    printf("Initial Firing vector and Buffer vector\n");
    printf("q: [%d %d %d %d]\n", q[0], q[1], q[2], q[3]);
    printf("b: [%d %d %d %d]\n", buffer1.count, buffer2.count, buffer3.count, buffer4.count);

    for (int i = 0; i < schedule_length; ++i) {
        fire_actor(schedule[i]);
        printf("q: [%d %d %d %d]\n", q[0], q[1], q[2], q[3]);
        printf("b: [%d %d %d %d]\n", buffer1.count, buffer2.count, buffer3.count, buffer4.count);
    }

    free_buffer(&buffer1);
    free_buffer(&buffer2);
    free_buffer(&buffer3);
    free_buffer(&buffer4);

    return 0;
}
