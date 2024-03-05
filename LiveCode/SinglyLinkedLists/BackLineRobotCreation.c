#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "RobotHeader.h"

/**
 * 
*/

robot_s *add_robot_end(robot_s **MotherBoard, char *name, int age, char *phrase)
{
    // as before, we'll create a new robot and set it to NULL
    // but this time we'll also create a temporary robot
    // to help us keep track of where we're at in our army
    robot_s *new_robot = NULL;
    robot_s *temp_robot;

    // just like before, let's find some space for our robot
    new_robot = malloc(sizeof(robot_s));

    //Let's check to make sure we have space in our army
    //For our new robot
    if (new_robot == NULL)
        return NULL;

    // Time to assign our Robot their attributes!
    (new_robot)->name = name;
    (new_robot)->Catchphrase = phrase;
    (new_robot)->age = age;

    // ***VERY IMPORTANT!!!***
    // Since this will be the last robot in our army,
    // We need to make sure it points to NULL,
    // Signifying we will have reached the end
    // When we go to add a new robot at the end again
    (new_robot)->next = NULL;

    // Even though we know we have more robots,
    // Let's check to see if the list is empty anyway
    if (*MotherBoard == NULL)
    {
        // If we have an empty list
        // We can go ahead and assign the robot to the top
        *MotherBoard = new_robot;
    }
    // Else, we need to traverse to the end of the line
    // We'll use temp_robot to help us with that
    else
    {
        // we'll assign temp_robot 
        // to the same robot MotherBoard is pointing to
        temp_robot = *MotherBoard;

        // Let's loop through the robots until
        // we find the one pointing to NULL
        // signifying the end of the line
        while ((temp_robot)->next != NULL)
        {
            // As temp_robot has the data for the next in line
            // We'll go ahead and just use that.
            temp_robot = (temp_robot)->next;
        }

        // Nice! We found the end of the line!
        // Since we've got a pointer to the last robot,
        // Let's assign its value to our new robot!
        (temp_robot)->next = new_robot;
    }

    // For posterities sake, 
    // let's go ahead and return our new robot
    return (new_robot);
}
