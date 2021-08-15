#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int main(){
  errno = 0;
  execl("/bin/echo", "",  "first", NULL);
  
  if(errno != 0)
    perror(strerror(errno));

  return -1;
}

