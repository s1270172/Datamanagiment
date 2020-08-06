#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ransu(int);

int main(){
    int i,r;
    int a=0,b=0;
    char s[10];

    printf("Who are you?\n");
    scanf("%s",s);
    printf("Hello,%s\n",s);
    printf("Tossing a coin...\n");
    
    srand((unsigned int)time(NULL));

    for(i=1;i<4;i++){
        printf("Round %d : ",i);

        r=ransu(rand()%2+1);

        if(r==1) a++;
        else b++;
    }

    printf("Heads: %d, Tails: %d\n",a,b);
    
    if(a>b) printf("%s won\n",s);
    else printf("%s losed\n",s);

    return 0;
}


int ransu(int x){
    if(x==1){
        printf("Heads\n");
        return 1;
    }
    else printf("Tails\n");

    return 2;
}
