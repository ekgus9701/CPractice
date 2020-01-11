#include <stdio.h>
#include <Windows.h>
 
void draw_line(int n){
    int i;
 
    for( i = 0; i< n; i++){
        if (i%2 !=0) printf("☆");
        else printf("★");
    }
}
void draw_line_inverse(int n){
    int i;
 
    for( i = 0; i< n; i++){
        if (i%2 !=0) printf("★");
        else printf("☆");
    }
}
 
void draw_space(int n){
    int i;
 
    for(i=0; i<n; i++)
        printf(" ");
}
void draw_rect(int w, int h, int start){
    int j;
    
    for(j=0; j<h; j++)
    {
        draw_space(start);
        draw_line(w);
        printf("\n");
    }
}
 
void draw_tri(int n){
    int i;
 
    for(i=0; i<n; i++){
        draw_line(i+1);
        printf("\n");
    }
}
 
 
void draw_tree(int n, int start){
    int i; 
 
    for(i=0; i<n; i++){
        //공간찍고, 별찍기
        draw_space(start-i);
        draw_line(i+1);
        printf("\n");
    }
}
 
void draw_tree_inverse(int n, int start){
    int i; 
 
    for(i=0; i<n; i++){
        //공간찍고, 별찍기
        draw_space(start-i);
        draw_line_inverse(i+1);
        printf("\n");
    }
}
 
int main(){
   
    int w,h, t;
    int i, j;
 
    printf("크리스마트 트리 높이 : "); scanf("%d", &t);
    printf("트리 밑둥 가로 : "); scanf("%d", &w);
    printf("트리 밑둥 높이 : "); scanf("%d", &h);
    
    
    i=0; 
    while(1){
        if(i%2==0)     draw_tree(t, 40);  //콘솔 화면크기는 기본 80*25, 중간은 40
        else draw_tree_inverse(t, 40);  //콘솔 화면크기는 기본 80*25, 중간은 40
        
        draw_rect(w,h, (40)-w); //정확하진 않지만 대략 가로만큼 빼주자
        Sleep(700);   // 쉬기 : 1000이  1초입니다.
        system("cls");
        i++;
    }
}