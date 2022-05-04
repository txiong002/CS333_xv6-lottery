//renice.c

#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char * argv[])
{
    int i, pid, change_nice;

    if(argc < 3){
        printf(2, "Requires following information: %s <pid> <nice>\n", argv[0]);
        exit();
    }

    change_nice = atoi(argv[1]);
   
    //start at i = 2, since we only want the pid number(s)
    for(i = 2; i < argc; i++){
        pid = atoi(argv[i]);
        renice(change_nice, pid);
    }
    exit();
}
