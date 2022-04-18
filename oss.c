#include "config.h"

//Global variables
int shmem_id;
int sem_id;
int numOfProcs = 0;
int proc_num = 0;
int log_line_num = 0;
int numOfForks = 0;
FILE* logfile_ptr;
sh_mem_struct* sh_mem_ptr;

//Stats on how processes terminated, as well as deadlock detection stats
int instant_resource_allo = 0;
int waited_for_allo = 0;
int term_by_deadlock = 0;
int deadlockdet_run = 0;

//Timer variables
unsigned long sec_until_fork = 0;
unsigned long nsec_until_fork = 0;
unsigned long nano_time_pass = 0;

int main(int argc, char *argv[])
{
    //Signal handlers for timer, CTRL-C, and random termination

    //Signal handling for child termination

    //Open logfile

    //Initialize semaphore for resource access

    //Initialize shared memory

    //Print shared resources in their initial state

    //Set alarm for 5 seconds

    //Begin main loop
    while(1)
    {
        //Sem wait

        //Fork processes, but make sure not to create more than 18 at a time, 

        //Sem signal

        //Update logical clock

    }

    return 0;
}