#include <stdio.h>
#include <netdb.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <math.h>
#define MAX 80
#define PORT 8080
#define SA struct sockaddr


int main()
{
   int fd = socket(AF_INET,SOCK_STREAM,0);

   struct sockaddr_in sock {
       sa_family_t sin_family;
       in_port_t sin_port;
       struct in_addr sin_addr;
   };

   struct in_addr {
       in_addr_t s_addr;
   };

   if (fd == -1) { //erreur creation socket

   } else{ //on est dans le socket

    int connect(fd,sock,sizeof(sock));

    char[100] buf = "";

    if (connect != 0 ) { //erreur lors de la connexion
        exit(0);
    } else {
        ssize_t envoie = write(sock,buf,sizeof(buf);
        printf(envoie);

        ssize_t recois = read(sock,buf,sizeof(buf));
        printf(recois);

        int res = 0;
        double nombre1
        int nombre2;

        //calcul SQRT
        double racineC
        racineC = sqrt(nombre);

        res = racineC* nombre2


        if (recois == 0) {
            close(sock);
            exit(0);
        }
    }


exit(0);


    }
    exit(0);
   }
