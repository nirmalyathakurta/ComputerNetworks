#Nirmalya_Thakurta 
#B.Tech CSE(TCS)
#CN_lab
#1811100002052

#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netinet/in.h>

//CHAT CLIENT

int main()
{
	
	int valread;
    struct sockaddr_in serv_addr;
    char *hello = "Hello server!";
    char buffer[1024] = {0};
    
    int sock= socket(AF_INET, SOCK_DGRAM, 0);
    
   
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(7777);
    
    inet_pton(AF_INET, "230.1.1.1", &serv_addr.sin_addr);
    
    sendto(sock, (const char *)hello, strlen(hello), 0, (const struct sockaddr *) &serv_addr, sizeof(serv_addr));
    
    printf("Hello message sent.\n");
          
   
  
    close(sock);
	
	
	
	
	
	return 0;
}
