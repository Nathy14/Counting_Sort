#include <stdio.h>
int main(){
  int vet[10]= {1,2,4,2,4,6,7,10,8,9};
  int aux[100];
  int cont = 0;
  int n = 0;
  int tam_aux = 100;
  int tam_vet = 10;

  for(int i = 0; i< tam_aux;i++){
    aux[i] = 0;
  }

  for(int j = 0; j< tam_vet;j++){
    aux[vet[j]]+=1;
  }

  while(cont<10){
    if(aux[n]== 0)
      n++;
    else{
      vet[cont] = n;
      aux[n]--;
      cont++;
    }
  }

  for (int k = 0; k<tam_vet;k++){
    printf("%d ", vet[k]);
  }
return 0;
}
 
