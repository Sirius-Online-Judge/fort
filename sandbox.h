#ifndef SANDBOX_H
#define SANDBOX_H

#include <seccomp.h>

int ssc_seccomp_init(scmp_filter_ctx ctx, const int *rules, int whitelist);
int ssc_seccomp_add(scmp_filter_ctx ctx, const int* rules, uint32_t action);
int ssc_seccomp_load_manually(char *path, int argc, char **argv);
void kill_child_process();

/* code */
#endif //SANDBOX_H

