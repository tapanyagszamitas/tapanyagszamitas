#include <stdio.h>
#include <stdlib.h>
#include "headertodo.h"

void menu()
{
    printf(
        "Todo application \n"
        "====================\n"
        "Commands:\n"
        " -a   Adds a new task\n"
        " -wr  Write current todos to file\n"
        " -rd  Read todos from a file\n"
        " -l   Lists all the tasks\n"
        " -e   Empty the list\n"
        " -rm  Removes a task\n"
        " -c   Completes a task\n"
        " -p   Add priority to a task \n"
        " -lp  Lists all the tasks by priority \n"
        " -x   Exit \n"
        " enter your commands and press enter\n");

}
