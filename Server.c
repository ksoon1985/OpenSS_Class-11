#pragma comment(lib, "ws2_32")  // 윈속 라이브러리 처

#include<winsock2.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define port 6666

int main(int argc, char **argv)
{
	WSADATA wsaData;
	SOCKET listen_sock, connect_sock;
	SOCKADDR_IN listen_addr, connect_addr;
	int sockaddr_in_size;
	char message[100];
	if(argc!=2){
		printf("다음과 같이 사용하세요 : %s <PORT번호>\n", argv[0]);
		exit(1);
}
