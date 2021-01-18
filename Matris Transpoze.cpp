#include <stdio.h>
#include <conio.h>
using namespace std;
int main(){
    int a, b, i, j;
    
    printf("Matris Satir Sayisi Giriniz: ");
    scanf("%d", &a);
    printf("Matris Sutun Sayisi Giriniz: ");
    scanf("%d", &b);
    
    int matris[a][b], matrisT[b][a];
    
 
    for(i=0; i<a; i++)
        for(j=0; j<b; j++){
            printf("%dx%d elemanini giriniz: ", i+1, j+1);
            scanf("%d", &matris[i][j]);
        }
        
 
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            matrisT[j][i] = matris[i][j];
        }
    }
        
    
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
   
    printf("Transpozu\n");
    for(i=0; i<b; i++){
        for(j=0; j<a; j++){
            printf("%d ", matrisT[i][j]);
        }
        printf("\n");
    }
    
    getch();
    return 0;
}
