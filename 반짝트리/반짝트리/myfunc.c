#include<stdio.h>
void draw_line(int n){
    int i;
 
    for(i=0; i<n; i++){
        if(i%2==0) printf("¢»");
        else printf("¢¼");
    }
}
void draw_space(int n){
    int i;
 
    for(i=0; i<n; i++){
        printf(" ");
    }
}
void draw_rect(int w, int h, int start){
    int j;
 
    for(j=0; j<h; j++){
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
 
void draw_eqtri(int n, int start){
    int i;
 
    for(i=0; i<n; i++){
        draw_space(start-i);
        draw_line(i+1);
        printf("\n");
    }
}
 
