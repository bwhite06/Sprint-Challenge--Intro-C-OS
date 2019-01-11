#include <stdio.h>
#include <dirent.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  char* dirname_location;
 DIR *dirname;
  // Parse command line
if(argc>=2) 
    { 
       printf("%s \n",argv[1]);
       dirname_location = argv[1];   
    }

    else{
      dirname_location = "..";
    }


  // Open directory
   struct dirent *dp;
   char * file_name;
   int file_serial;
   dirname = opendir(dirname_location);

 
  // Repeatly read and print entries
   while((dp = readdir(dirname))!=NULL){
   file_name = dp -> d_name;
   file_serial = dp -> d_ino;
   printf("file_name: ""%s  " "%d\n "  "", file_name, file_serial);
    }


  
  // Close directory
  closedir(dirname);
  return 0;
}