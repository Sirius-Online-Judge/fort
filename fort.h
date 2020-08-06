//
// Created by sirius on 2020/8/6.
//

#ifndef FORT_FORT_H
#define FORT_FORT_H


struct arguments {
    int time_limit;
    int memory_limit;
    int output_limit;
    int pids_max;
    int uid;
    int gid;
    int fd;
    int execve_argc;
    char *bin;
    char *stdout;
    char *stderr;
    char **args;
    char *execve_argv[20];
};


#endif //FORT_FORT_H
