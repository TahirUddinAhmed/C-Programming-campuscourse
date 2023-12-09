#include <stdio.h>

 int add(int a, int b) {
    return a + b;
  }

  float fn1(float f) {
    return 520.34;
  }

  char fn2(char c) {
    return c; // 'F'
  }

int main() {
    // int res = add(5, 5);

    // float fn_res = fn1(15.2);

    // printf("%f\n", fn_res);

    char res2 = fn2('F');

    printf("%c\n", res2);

    // printf("Addition is %d\n", res);
    return 0;
}