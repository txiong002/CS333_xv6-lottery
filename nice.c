//nice.c

#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char * argv[])
{
    int new_nice;

    if(argc < 2){
        printf(2, "Required information: <nice> <program> <#processes> ", argv[0]);
        exit();
    }
    new_nice = atoi(argv[1]);
    renice(new_nice, getpid());
    //count = atoi(argv[3]);
    exec(argv[2], &(argv[2]));

    //for(i = 0; i < count; i++){
    //    pid = 14;
    //    renice(new_nice, pid);
    //}
    exit();
}
