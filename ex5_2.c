#include <stdio.h>
#include "stackL.h"

int main(void) {
   element item;
   top = NULL;
   printf("\n** 연결 스택 연산 **\n");
   printStack();

   push(1);  printStack();
   push(2);  printStack();
   push(3);  printStack();

   item = peek(); printStack();
   printf("peek => %d", item);

`  item = peek(); printStack();
   printf("\n pop => %d", item);

   item = peek(); printStack();
   printf("\n pop => %d", item);

   item = peek(); printStack();
   printf("\n pop => %d", item);

   getchar(); return 0;
}
