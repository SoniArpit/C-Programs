#include<stdio.h>

int main(){
    int d[5];
    int NumberOfCoins(int [5],int,int);
    int n,N;

    printf("Enter Unit: ");
    scanf("%d",&n);

    printf("Enter the value of coins\n");
    for(int i=1;i<=n;i++)
        scanf("%d",&d[i]);
    
    printf("Enter total units for which the changes if required: ");
    scanf("%d",&N);

    printf("Mininum number of coins %d",NumberOfCoins(d,n,N));

}

int minval(int x, int y){
    if(x<y)
        return x;
    else
        return y;
}

int NumberOfCoins(int d[], int n, int N){
    int minval(int x, int y);
    int i,j;
    int c[10][10];
    for(i=0;i<=n;i++)
        for(j=0;j<=N;j++)
            c[i][j]=9999;
    for(i=0;i<=n;i++)
        c[i][0]=0;
    for(j=1;j<=N;j++)
        c[0][j]=j;
    
    for(j=1;j<=N;j++){
        for(i=1;i<=n;i++){
            if(i==1){
                if(j<d[i])
                    c[i][j]=9999;
                else
                    c[i][j]=1+c[1][j-d[1]];
            }
            else if(j<d[i])
                c[i][j]=c[i-1][j];
            else
                c[i][j]=minval(c[i-1][j],1+c[i][j-d[i]]);
        }
    }
    printf("Printing the table for number of coins\n");
    for(i=0;i<=n;i++){
        for(j=0;j<=N;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return c[n][N];
}

