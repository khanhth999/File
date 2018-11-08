#include <stdio.h>
int main(){
  int t,g;
  char sp;
  char* str;
  scanf("%d %c",&t,&sp);
  switch (sp){
      case 'C': g=12000;str="Cocacola";break;
      case 'P': g=12000;str="Pepsi";break;
      case '7': g=11000;str="7up";break;
      case 'S': g=10000;str="Sprite";break;
      case 'F': g=7000;str="Fanta";break;
      case 'L': g=5000;str="Lavie";break;
      default: printf("%d",t);return 0; break;
  }

  if(t>g){
      printf("%s %d",str,t-g);
  }else if(t<g){
      printf("Con thieu %d de mua %s",g-t,str);
  }else{
       printf("%d",t);
  }
    return 0;
}
