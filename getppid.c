#include <stdio.h> // include standard input/output library
#include <unistd.h> // include unix standard library for getppid() function

int main(void)
{
  pid_t parent_pid; // delcare a var of type pid_t to store the PPID

  parent_pid = getppid(); // call getppid() function to get the parent process ID and store
  printf("%u\n", parent_pid); // print the parent process ID as an unsigned integer
  return (0); // return 0 to indicate successful program execution
}
