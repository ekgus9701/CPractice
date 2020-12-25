#include <stdio.h>

void overflow(char z){
        if(z>'Z'){
                z='A';
        }
}

int main()
{
        int i,j,m;
        char arr[110][110]={{'\0'}};
        char k='A';
        scanf("%d",&m);
        if(m<100 && m>0 && m%2==1)
        {
                for(i=(m+1)/2;i>=1;i--){
                        for(j=i;j<=m-i+1;j++){
                                overflow(k);
                                arr[i][j]=k++;
                        }
                }
                for(i=1; i<=m; i++)
                {
                        for(j=1;j<=m;j++){
                                if(arr[j][i]!='\0')
                                printf("%c ",arr[j][i]);
                        }
                        printf("\n");
                }

        }
        else
        {
                printf("INPUT ERROR");
                return 0;
        }

        return 0;
}
