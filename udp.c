#include<stdio.h>
#include<string.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
int main(){
 int socket_id=socket(AF_INET, SOCK_DGRAM, 0);
 printf("socket %d",socket_id);
 struct sockaddr_in sin;
 sin.sin_family=AF_INET;
 sin.sin_port=htons(1212); //you can add any listening port
 sin.sin_addr.s_addr=inet_addr("YOUR_PHONEs_IP");

 char sendmsg[1024];
 char recvmsg[1024];
 //sending part
 printf("Enter the message to send: ");
 fgets(sendmsg, sizeof(sendmsg), stdin);
 sendto(socket_id, sendmsg, strlen(sendmsg),
       0, (struct sockaddr*)&sin,sizeof(sin));

//recieving part
 struct sockaddr_in from;
 socklen_t fromlen=sizeof(from);
 int r=recvfrom(socket_id,recvmsg,sizeof(recvmsg)-1,0,(struct sockaddr*)&from,&fromlen);
 recvmsg[r]='\0';
 printf("Recieved message: %s",recvmsg);
 }