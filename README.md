"# TE-IT-OS-Assignments" 

# Operating Systems Assignments (C Programming)

This repository contains C implementations of various operating system concepts, covering basic Linux commands, process control, CPU scheduling, thread synchronization, deadlock avoidance, page replacement, inter-process communication, disk scheduling, and a kernel system call study.

## Table of Contents

1. [Basic Linux Commands](#basic-linux-commands)
2. [Address Book Program](#address-book-program)
3. [Process Control System Calls](#process-control-system-calls)
4. [CPU Scheduling Algorithms](#cpu-scheduling-algorithms)
5. [Thread Synchronization](#thread-synchronization)
6. [Deadlock Avoidance (Banker's Algorithm)](#deadlock-avoidance-bankers-algorithm)
7. [Page Replacement Algorithms](#page-replacement-algorithms)
8. [Inter-Process Communication (IPC)](#inter-process-communication-ipc)
9. [Disk Scheduling Algorithms](#disk-scheduling-algorithms)
10. [Kernel System Call Study](#kernel-system-call-study)

## Basic Linux Commands

This section covers the study of basic Linux commands like `echo`, `ls`, `read`, `cat`, `touch`, `test`, loops (arithmetic comparison, conditional), `grep`, `sed`, etc.  [Consider creating a separate file or directory to document these commands and their usage - e.g., `linux_commands.md`].

## Address Book Program

* **Description:**  A C program implementing an address book with the following options:
    * Create address book
    * View address book
    * Insert a record
    * Delete a record
    * Modify a record
    * Exit


## Process Control System Calls

* **Part A:** Sorting integers using `fork` and `wait`. Parent and child processes sort using different algorithms. Demonstration of zombie and orphan states.
* **Part B:** Sorting an array. Parent sorts and passes the sorted array to the child process via `execve`. Child process reverses and displays the array.

## CPU Scheduling Algorithms

* **Algorithms:** Shortest Job First (Preemptive), Round Robin (with varying arrival times)
* **Language:** C


## Thread Synchronization

* **Part A:** Producer-Consumer problem with counting semaphores and mutex.
* **Part B:** Reader-Writer problem (reader priority) with mutex.
* **Language:** C


## Deadlock Avoidance (Banker's Algorithm)

* **Algorithm:** Banker's Algorithm
* **Language:** C


## Page Replacement Algorithms

* **Algorithms:** FCFS, LRU, Optimal (frame size >= 3)
* **Language:** C


## Inter-Process Communication (IPC)

* **Part A:** Full-duplex communication using FIFOs. Process 1 sends sentences; Process 2 analyzes and sends results back.
* **Part B:** Shared memory (System V) for client-server communication.
* **Language:** C

## Disk Scheduling Algorithms

* **Algorithms:** SSTF, SCAN, C-LOOK (head moving away from spindle)
* **Language:** C


## Kernel System Call Study

* **Description:** Implementation of a new system call in the kernel space. Includes kernel code, compilation instructions, and a user-space program to demonstrate the system call.
* **Kernel Source:**
* **Architecture:** 
* **Distribution:** 
* **Language:** C


