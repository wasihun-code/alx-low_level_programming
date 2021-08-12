#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
void perror(const char *msg, char *name);

int main( int argc,char *argv[] )
{
    char buf;
    int sourcefile,destfile,n;

    if(argc!=3)
    {
        write(STDOUT_FILENO,"usage: <sourcefile> <destination file>\n",50);   
        exit (97);
    }
    else
    {
         sourcefile = open(argv[1],O_RDONLY);
         if(sourcefile == -1)
         {
            perror("Error: Can't read from %s\n", argv[1]);
            exit(98);
         }
         else
         {
            destfile = open(argv[2],O_WRONLY | O_CREAT , 0664);
            if(destfile == -1)
            {
                perror("Error: Can't write to %s", argv[2]);
                exit(0);
            }
            else
            {
                while((n=read(sourcefile,&buf,1)) != -1)
                {
                    write( destfile, &buf, 1 );
                }
                write(STDOUT_FILENO, "FILES COPIED\n" , 15);    
                close(sourcefile);
                close(destfile);
            }
        }
    }
	if (close(sourcefile) < 0)
	{
		perror("Error: Can't close %d\n", sourcefile);
		exit(100);
	}

	if (close(sourcefile) < 0)                                                                                  
        {                                                                                                           
                perror("Error: Can't close %d\n", sourcefile);
		 exit(100);
        }      	
    return 0;
}