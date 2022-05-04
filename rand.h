#pragma once

#ifndef __RAND_H
# define __RAND_H

//#include "types.h"
//#include "stat.h"
//#include "user.h"

#define RAND_MAX (1 << 31)

int rand(void);

void srand(unsigned int);

#endif // __RAND_H
