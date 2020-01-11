#include <stdio.h>
#include <Windows.h>
 
void draw_line(int n){
    int i;
 
    for( i = 0; i< n; i++){
        if (i%2 !=0) printf("��");
        else printf("��");
    }
}
void draw_line_inverse(int n){
    int i;
 
    for( i = 0; i< n; i++){
        if (i%2 !=0) printf("��");
        else printf("��");
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
        //�������, �����
        draw_space(start-i);
        draw_line(i+1);
        printf("\n");
    }
}
 
void draw_tree_inverse(int n, int start){
    int i; 
 
    for(i=0; i<n; i++){
        //�������, �����
        draw_space(start-i);
        draw_line_inverse(i+1);
        printf("\n");
    }
}
 
int main(){
   
    int w,h, t;
    int i, j;
 
    printf("ũ������Ʈ Ʈ�� ���� : "); scanf("%d", &t);
    printf("Ʈ�� �ص� ���� : "); scanf("%d", &w);
    printf("Ʈ�� �ص� ���� : "); scanf("%d", &h);
    
    
    i=0; 
    while(1){
        if(i%2==0)     draw_tree(t, 40);  //�ܼ� ȭ��ũ��� �⺻ 80*25, �߰��� 40
        else draw_tree_inverse(t, 40);  //�ܼ� ȭ��ũ��� �⺻ 80*25, �߰��� 40
        
        draw_rect(w,h, (40)-w); //��Ȯ���� ������ �뷫 ���θ�ŭ ������
        Sleep(700);   // ���� : 1000��  1���Դϴ�.
        system("cls");
        i++;
    }
}