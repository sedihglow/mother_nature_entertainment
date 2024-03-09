#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "buff.h"


#define PARITY -1
#define PA     0x0
#define YAHWEH 0x64


/*
 * init design for demoing what buffers do!
 *
 * - eventual dynamic buffer size based on individual needs
 *   - some buffers are just 1
 *   - some buffers empty in waves
 *   - some buffers fill X ammount in one burst then immediately drain
 *   - some buffers vary on ammounts of fuck ups being logged in the meta data
 *   - some buffers drain at random
 *   - some buffers are untested
 *   - some buffers empty at the same time every X interval
 *   - some buffers empty when full
 *   - all buffers do something when emptied
 *   - scale of the something when emptied may vary based on individual needs
 *   - The biggest buffer wins the grand prize, a place in earth lore history..
 *     for awhile.
 */


int main(int argc, char *argv[])
{



	exit(EXIT_SUCCESS);
}
