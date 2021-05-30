#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <dirent.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <errno.h>
int main(void)
{
    	int pid = 47073;
struct dirent *de;
	char filename[1000];
    sprintf(filename, "/proc/%d/map_files", pid);
	 DIR *dr = opendir(filename);
	if (dr == NULL )  // opendir returns NULL if couldn't open directory
    {
        printf("Could not open current directory" );
        return 0;
    }

    while ((de = readdir(dr)) != NULL)
            printf("%s\n", de->d_name);
  
    closedir(dr);  


 return 0;
}
