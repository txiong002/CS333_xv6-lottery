#include "rand.h"

#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    int r, nloops;
    unsigned int seed;

    if(argc != 3) {
        printf(2, "Usage: %s <seed> <nloops>\n", argv[0]);
        exit();
    }

    seed = atoi(argv[1]);
    nloops = atoi(argv[2]);

    srand(seed);
    for (int j = 0; j < nloops; j++) {
        r = rand();
        printf(1,"random number is:  %d\n", r);
    }
    exit();
}
