//7A_2FIFO.c

#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
#include<string.h>

int main()
{
	int fd,fd1;
	char * myfifo = "myfifo";
	char * myfifo1 = "myfifo1";
	char buf[1024], ch[400];

	int words=1, character=0, line=1, i=0, j=0;
	FILE *fp;

	mkfifo(myfifo1, 0777);
	fd=open(myfifo, O_RDONLY);
	read(fd, buf, 1024);
	printf("\nFirst message received: \n\n%s\n\n",buf);
	
	while(buf[i]!='\0')
	{
		while(buf[i]==' ')
		{
			words++;
			i++;
		}
		while(buf[i]=='\n')
		{
			line++;
			i++;
		}
		i++;
		character++;
	}
	
	printf("\nTotal Words := %d\n", words);
	printf("\nTotal Lines := %d\n", line);
	printf("\nTotal Charactes := %d\n", character);

	fp=fopen("test.txt","w+");
	fprintf(fp,"\nTotal Words := %d\n", words);
	fprintf(fp,"\nTotal Lines := %d\n", line);
	fprintf(fp,"\nTotal Charactes := %d\n", character);

	fclose(fp);	
	fp=fopen("test.txt","r");

	while(!feof(fp))
	{
		ch[j]=fgetc(fp);
		j++;
	}
	fclose(fp);

	close(fd);

	unlink(myfifo);

	fd1=open(myfifo1,O_WRONLY);

	write(fd1,ch, strlen(ch));
	
	close(fd1);
	return 0;
}
