#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "RobotHeader.h"

/**
 * 
*/

int main(void)
{
    // Let's go ahead and set up MotherBoard
    robot_s *MotherBoard;
    MotherBoard = NULL;

    // Awesome! Let's add a robot to the beginning.
    // We'll pass the address of MotherBoard, 
    // Since she's pointing to the beginning of the line.
    // For my reference, here's the info for the first robot:
    // name - Wall-E, age - 0 (he doesn't exist yet)
    // catchprase - WaaAAaall-Eeeee
    printf("Adding Robot: Wall-E\n");
    add_robot_beginning(&MotherBoard, "Wall-E", 0, "WaaAAll-EEEE");

    // Let's run a robo report!
    printf("Running Report\n");

    // Shall we add another robot?
    // I think it's Push's Turn!
    // name - Push, age - 29
    // catchprase - Thank you for keeping the park clean!
    // printf("Adding Robot: Push\n");

    // Another report!
    // printf("Running Report\n");

    // And finally, let's not let Wall-E be the last line of defense.
    // name - Red Tornado, age - 64
    // catchprase - "Whoosh"
    // printf("Adding Robot: Red Tornado\n");

    // One last report! Let's see them in the order we added them
    // printf("Running Report\n");

    // What other robots should we add?

    return (0);
}