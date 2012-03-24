/*
  100 - The 3n + 1 problem
  UVa Online Judge
  Esteban Arango Medina
  marranoparael31@gmail.com
*/

#include<iostream>

int main(int argc, char *argv[]){
    
    int length = 0;    
    int lengthTemp = 0;
    int i;
    int temp;
    int iImpri;
    int jImpri;
    int j;
    int num;
    
    while (scanf("%d%d",&i,&j) != EOF){
          
          iImpri = i;
          jImpri = j;
          if(i>j){
                temp=i;
                i=j;
                j=temp;   
          }          
      do{   
                   
         num = i;               
    
        while(num>1){
               lengthTemp++;  

               if(num&1){ 
                      num = num*3 +1;   
               }else{
                    num = num/2;                    
               }
        }
        
        lengthTemp++;
        
        if(lengthTemp > length){
                  length = lengthTemp;
        }
        
        lengthTemp = 0;
        i++;
    }while(i<=j);
    
    printf ("%d %d %d\n",iImpri,jImpri,length);
    
    length = 0;
    
}
    
 return 0;  
}
