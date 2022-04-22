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

Issues: Sometimes, it seems that the child processes still try to run for a moment even after OSS closes. This doesn't show up in the logfile though. Also, sometime it seems OSS releases the same process multiple times, but it doesn't happen consistently. Something else strange was my clock sometimes jumping up large amounts of seconds, which causes the printing of the current allocation many times, as it is time based. After some testing on hoare, it seems my program runs differently. My logical clock never really got past 200 on my personal computer, but on hoare it could jump into the thousands. When I ran it on my PC, if I printed the resource allocations every 30 logical seconds or so it would be ok. On hoare though, that basically fills the entire logfile. If the log is filled with resource allocation tables, try changing the integer that is checks to see how long it has been since it has printed. I tried to make my deadlock detection run every 1 logical second, but this caused some strange bugs. I got it working best if it ran deadlock detection every loop. If you need, I can show how the project runs on my laptop.
