#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/wait.h>
#include <sys/socket.h>

#define PORT 81
#define BACKLOG 10
#define LENGTH 1024

char httpweb[] = {"HTTP/1.0 200 OK\r\n"
                  "Date:Mon, 24 Nov 2005 10:26:00 GMT\r\n"
		              "Server:microHttp/1.0 ZHIYUAN Electronics CO, LTD\r\n"
		              "Accept-Ranges:bytes\r\n"
		              "Connection:Keep-Close\r\n"
		              "Content-Type:text/html\r\n"
		              "\r\n"};

char web[] = {"<HTML>\r\n"
              "<HEAD>\r\n"
	            "<TITLE>YL ARM Experiment</TITLE>\r\n"
	            "<BODY aLink=green bgColor=#flfldd link=red\r\n"
	            "vLink=#321afd>\r\n"
	            "<H1>HELLO WELCOME TO ARM</H1>\r\n"
	            "<UL>\r\n"
	            "<LI><A HREF=\"http://www.zyinside.com/\">happy</A>\r\n"
	            "</BODY>"
	            "</HTML>\r\n"};

char httpgif[] = {"HTTP/1.0 200 OK\r\n"
                  "Date:Mon,24Nov 2005 10:26:00 GMT\r\n"
		              "Server:microHttp/1.0 ZHIYUAN\r\n"
		              "Connection:Keep-Close\r\n"
		              "Content-Type:image/bmp\r\n"
		              "\r\n"};
		
int main()
{
  	int sockfd;
  	int nsockfd;
  	int i, num;
  	int flag = 1;
  	int sin_size;
  	char revbuf[LENGTH];
  	struct sockaddr_in addr_local;
  	struct sockaddr_in addr_remote;
}
