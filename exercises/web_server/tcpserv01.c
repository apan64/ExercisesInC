#include	"unp.h"

void web_echo(int sockfd)
{
    char *arg1;
    char *arg2;
    char *arg3;
    ssize_t     n;
    char        line[MAXLINE];

    for ( ; ; ) {
        if ( (n = Readline(sockfd, line, MAXLINE)) == 0)
            return;     /* connection closed by other end */

        if (sscanf(line, "%s%s%s", &arg1, &arg2, &arg3) == 3)
            snprintf(line, sizeof(line), "%ld\n", arg1 + arg2);
        else
            snprintf(line, sizeof(line), "input error\n");

        n = strlen(line);
        Writen(sockfd, line, n);
    }
}


int main(int argc, char **argv)
{
    int	listenfd, connfd;
    pid_t childpid;
    socklen_t clilen;
    struct sockaddr_in cliaddr, servaddr;

    listenfd = Socket(AF_INET, SOCK_STREAM, 0);
    
    bzero(&servaddr, sizeof(servaddr));
    servaddr.sin_family      = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servaddr.sin_port        = htons(SERV_PORT);

    Bind(listenfd, (SA *) &servaddr, sizeof(servaddr));

    Listen(listenfd, LISTENQ);
    printf("Listening on port %d\n", servaddr.sin_port);

    for ( ; ; ) {
	clilen = sizeof(cliaddr);
	connfd = Accept(listenfd, (SA *) &cliaddr, &clilen);
	printf("Accepted\n");
	
	if ( (childpid = Fork()) == 0) {
	    printf("Forked\n");
	    Close(listenfd);
	    str_echo(connfd);
	    exit(0);
	}
	Close(connfd);
    }
}

