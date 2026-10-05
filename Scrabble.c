#include <stdio.h>
#include <string.h>
#define Lim 100
int checkandsum(char str[],int size){
    //int s= strlen(str);
    int sum=0;

    int points[]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    
    for(int i=0;str[i]!='\0';i++){
        char c=str[i];
         
        if(c>='a'&&c<='z'){
             c=c+'A'-'a';
        }
       sum+=points[c-65];
    }
    return sum;
}

int main(){

    char word1[Lim]="";
    printf("Enter a word for person 1");
    scanf("%99s",&word1);
    
    char word2[Lim]="";
    printf("Enter a word for person 2");
    scanf("%99s",&word2);
    
   int s1,s2=0;
   s1 = checkandsum(word1,Lim);
   s2 = checkandsum(word2,Lim);

   if(s1>s2){
    printf("Player 1 Wins");
   }
   else if(s1<s2){
    printf("Player 2 Wins");
   }
   else if(s1==s2){
    printf("Its a tie");
   }
    return 0;
}
// int checkandsum(char str[],int size){
//     //int s= strlen(str);
//     int sum=0;

//     int points[]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    
//     for(int i=0;str[i]!='\0';i++){
//         char c=str[i];
         
//         if(c>='a'&&c<='z'){
//              c=c+'A'-'a';
//         }
//        sum+=points[c-65];
//     }
//     return sum;
// }