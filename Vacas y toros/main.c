#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdio.h>


void setup();
int v[4];
int main (int argc, char** argv) {

            
printf ("Para ganar es necesario tener 4 Toros \n Solo ingresa 4 digitios diferente (SI NO MI PROGRMA EXPLOTA D:)\n Empezemos! ");
    char w[3];
    do{
    int x,i,k,y=10,a,j=0,b[4];
    setup();
    printf ("%i %i %i %i",v[0],v[1],v[2],v[3]);
    do{
    k=0;
    printf ("\nIngresa el numero de 4 digitos\n");
    scanf ("%i",&x);
    a=4;
    b[0]=x/1000,b[1]=(x%1000)/100,b[2]=((x%1000)%100)/10,b[3]=((x%1000)%100)%10;
    int bin=0;
    for (i=0;i<4;i++){
        for (j=0;j<4;j++){
        if (b[i]==v[j]&&b[i]==v[4-a]){
        printf ("Toro\n");
        bin=1;
        k++;
        break;}
        else if (b[i]==v[j]){
        printf ("Vaca\n");
        bin=1;
        break;}
        }
    a--;    
    } 
    y--;
    if (k!=4){ 
    printf ("Te quedan %i intentos\n",y);
        if(y==0){ 
        printf ("**Perdiste**");
        printf ("\nEl numero era:%i%i%i%i\n",v[0],v[1],v[2],v[3]);
        k=4;}}
    if (bin==0) printf ("El numero es incorrecto\n");
    }while(k!=4);
    printf(" ¿Quieres jugar de nuevo?\n Escribe \"SI\" O \"NO\" \n");
    scanf (" %s",&w);
    }while(w[0]=='s');
    return(0);
}
void setup(){
    int i,j=0,k,false;
    do{
    false=0;
    srand (time(NULL));
    for (i=0;i<10;i++){
    v[j]=rand()%10;
    }
    if (j!=0){
    for (k=0;k<j&&false==0;k++){
        for (i=k+1;i<=j&&false==0;i++){
        if (v[k]==v[i])
        false=1;
        }
    }
    }
    if (false==0)
    j++;
    }while(j!=4);
}