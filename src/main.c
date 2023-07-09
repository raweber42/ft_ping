#include <unistd.h>
#include <stdio.h>

int main (int args, char **argv) {

  printf("args: %i, argv[0]: %s\n", args, argv[0]);
  // check if its a valid IP address
  // invalid number as ip -> "ping: 8.8.8.88888: Name or service not known"
  // invalid dns -> "ping: google: No address associated with hostname"
  // if valid ip/dns: "PING 8.8.8.123 (8.8.8.123) 56(84) bytes of data."




  // loop the ping / count the pings for -c flag if set
  // sends packet every second, endlessly by default
}
