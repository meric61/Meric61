#include<math.h>
#include<conio.h>
#include <locale.h>
#define MAX 20 

int determinant(int a[MAX][MAX],int n);
using namespace std;
int main() 
{
setlocale(LC_ALL, "Turkish");  
 int i,j,r,c,a[MAX][MAX],b[MAX][MAX],deter=0;
 
 printf("\nLütfen matris satýr sayýsý giriniz= ");
 printf("\nLütfen matris sütun sayýsý giriniz= ");
 scanf("%d",&c);
 if(r==c)
 {
 printf("\nLütfen matrisin elemanlarýný sýrasýyla Enter tuþuna basarak giriniz=\n");
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 {
 scanf("%d",&a[i][j]);
 }
 }
 deter=determinant(a,r); 
 printf("\nVerilen matris:\n");
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 {
 printf("%d\t",a[i][j]);
 }
 printf("\n");
 }
 printf("\nMatrisin determinantý: %d\n",deter); 
 }
 else
 {
 printf("\nHATA! Determinantýn hesaplanmasý için matrisin satýr ve sütun sayýlarý eþit olmalýdýr.\n");
 }
getch();
 return 0;
}
int determinant(int a[MAX][MAX],int n) 

{
 int deter=0,p,h,k,i,j,gecici[MAX][MAX];
 float gercekdeter;
 if(n==1)
 {
 return a[0][0];
 }
 else if(n==2)
 {
 deter=(a[0][0]*a[1][1]-a[0][1]*a[1][0]); 
 return deter;
 }
 else
 {
 for(p=0;p<n;p++) 
 {
 h = 0;
 k = 0;
 for(i=1;i<n;i++)
 {
 for( j=0;j<n;j++)
 {
 if(j==p)
 {
 continue; 
 }
 gecici[h][k] = a[i][j]; 
 k++;
 if(k==n-1)
 {
 h++;
 k = 0;
 }
 }
 }

 
 deter=deter+a[0][p]*pow(-1,p)*determinant(gecici,n-1); 
   
 
 }
 return deter; 
 }
 
}
