#include <stdio.h>

int main(void) {
  int i, o, c, card=2, x=0, y=0, cont;
  printf("Digite a largura e o comprimento separados por um espaço em branco:\n");
  scanf("%d %d", &i, &o);
  c = i*o;
  char cord[c];
  printf("Digite agora o caminho percorrido pelo robô:\n");
  printf("Sendo F = 1 casa pra frente;\n");
  printf("Sendo T = 1 casa pra tras;\n");
  printf("Sendo E = 1 casa pra esquerda;\n");
  printf("Sendo D = 1 casa pra direita;\n");
  printf("Sendo 0 para não se locomover;\n");
  scanf("%s", &cord);
  for(cont=0; cont<strlen(cord); cont++){
    if(cord[cont] == 'E'){
      card = card -1;
      if(card < 0){
        card = 3;
      }
    }
    else if(cord[cont] == 'D'){
      card = card + 1;
      if(card>3){
        card = 0;
      }
    }
    if(card == 2){
      if(cord[cont] == 'F'){
        y++;
        if(y>i){
          y=i;
        }
      }
      else if(cord[cont] == 'T'){
        y--;
        if(y<0){
          y=0;
        }
      }
    }
    else if(card == 1){
      if(cord[cont] == 'F'){
        x--;
        if(x<0){
          x=0;
        }
      }
      else if(cord[cont] == 'T'){
        x++;
        if(x>o){
          x=o;
        }
      }
    }
    else if(card == 0){
      if(cord[cont] == 'F'){
        y--;
        if(y<0){
          y=0;
        }
      }
      else if(cord[cont] == 'T'){
        y++;
        if(x>i){
          y=i;
        }
      }
    }
    else if(card == 3){
      if(cord[cont] == 'F'){
        x++;
        if(x>o){
          x=o;
        }
      }
      else if(cord[cont] == 'T'){
        x--;
        if(x<0){
          x=0;
        }
      }
    }
  }
  if(card == 0){
    printf("S %d %d", x, y);
  }
  else if(card == 1){
    printf("O %d %d", x, y);
  }
  else if(card == 2){
    printf("N %d %d", x, y);
  }
  else if(card == 3){
    printf("L %d %d", x, y);
  }
  return 0;
}
