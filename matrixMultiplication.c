#include<stdio.h>
int main(){
    int r1,c1,r2,c2;
    printf("ENTER NO OF ROWS AND COLUMNS OF MAT-1=");
    scanf("%d %d",&r1,&c1);
    printf("ENTRER NO OF ROW AND COLUMNS OF MAT-2=");
    scanf("%d %d",&r2,&c2);
    int mat1[r1][c1];
    int mat2[r2][c2];
    int mat3[r1][c2];
    printf("MATRIX-1:");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d\n",mat1[i][j]);
        }
    }
    printf("%d",mat1[r1][c1]);
    printf("MATRIX-2");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d\n",mat2[i][j]);
        }
    }
    printf("%d",mat2[r2][c2]);
    if(c1!=r2){
        printf("MULTIPLICATION NOT POSSIBLE");
        return 0;
    }
    else{
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
           mat3[i][j]=mat1[i][j]*mat2[j][i]; 
        }
    }
        }   
    printf("%d",mat3[r1][c2]);
    return 0;
}