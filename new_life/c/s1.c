#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>
#define ERR_EXIT(m) \
do\
{\
perror(m);\
exit(EXIT_FAILURE);\
}\
while (0);
void creat_daemon(void);
int main(void)
{
	time_t t;
	int fd;
	creat_daemon();
	while(1){
		fd = open("/home/reload/c/b/daemon.log",O_WRONLY|O_CREAT|O_APPEND,0644);
		if(fd == -1)
			ERR_EXIT("open error");
		t = time(0);
		char *buf = asctime(localtime(&t));
		write(fd,buf,strlen(buf));
		close(fd);
		sleep(60);
	}
	return 0;
}
void creat_daemon(void)
{
	pid_t pid;
	pid = fork();
	if( pid == -1)
		ERR_EXIT("fork error");
	if(pid > 0 )
		exit(EXIT_SUCCESS);
	if(setsid() == -1)
		ERR_EXIT("SETSID ERROR");
	chdir("/");
	int i;
	for( i = 0; i < 3; ++i)
	{
		close(i);
		open("/dev/null", O_RDWR);
		dup(0);
		dup(0);
	}
	umask(0);
	return;
}

/*
	s1.c是一个在linux创建的C语言程序，他可以在给定目录下创建一个日志文件，
	并创建一个守护进程，脱离控制终端，每分钟向日志文件传递时间。
	关闭守护进程
	ps ajx | grep "./linux_message_server.out" | grep -v "grep" |awk '{print $2}'
	./linux_message_server.out 是进程名字
	sudo kill 进程号
*/
