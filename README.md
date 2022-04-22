Author: Ryan Kelly

Class: Computer Science 4760 - Operating Systems

School: University of Missouri - Saint Louis

Assignment: Project 5 - Resource Allocator / Deadlock Detection

Due Date: 4/21/2022

Language Used: C

Description: A process named oss forks off process based off of a built in system clock that iterates in nanoseconds. Oss also creates resources with random amounts of instances. These child processes randomly request and release resources that are contained in a container in shared memory. A semaphore is used to control who accesses the clock and resources. Processes have a random chance to terminate, which OSS has to deal with. OSS should keep satisying requests, and should check for deadlocks. Once 5 real seconds have past, or OSS has forked 40 processes, then it should terminate. OSS periodically prints how the resources are allocated. OSS also gives a report when it terminates, which details statistics on how the program ran. The deadlock detection algorithm will kill processes that are holding resources and waiting.

Build Instructions (Linux Terminal): make 

Delete oss and process Executables and logfile: make clean 

How to Invoke: ./oss

Issues: Sometimes, it seems that the child processes still try to run for a moment even after OSS closes. This doesn't show up in the logfile though. Also, sometime it seems OSS releases the same process multiple times, but it doesn't happen consistently. Something else strange was my clock sometimes jumping up large amounts of seconds, which causes the printing of the current allocation many times, as it is time based.