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
   dirname = opendir(dirname_location);

 
  // Repeatly read and print entries
   while((dp = readdir(dirname))!=NULL){
   file_name = dp -> d_name;
   printf("file_name: \"%s\"\n",file_name);
    }


  
  // Close directory
  closedir(dirname);
  return 0;
}