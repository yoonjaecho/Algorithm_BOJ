#include <stdio.h>
#define MAX 1000

void printResult(int []);
void copy(int a[], int b[]) {
    int i, n=a[0];
	for(i=0;i<MAX;i+=1) { b[i]=a[i]; }
}
void clear(int a[]) {
    int i;
	for(i=0;i<MAX;i+=1) { a[i]=0; }
		a[0]=1;
}
void add(int a[], int b[], int r[]) {
    int i, j, x=0;
	clear(r);
	r[0]=a[0];
	if(b[0]>r[0]) { r[0]=b[0]; }
		for(i=1;i<=r[0];i+=1) {      
		    x=a[i]+b[i]+x;             
	        r[i]=x%10000;            
	        x=x/10000;             
	    }
	    if(x!=0) { 
	        r[0]+=1;
	        r[r[0]]=x;
	    } 
}

void printResult(int result[]) {
	    int i, x;
	    x=result[0];
	    printf("%d", result[x]);
	    for(i=1;i<x;i+=1) {
	        printf("%04d", result[x-i]);
	    }
	    printf("\n");
}

int main() {
    int a[MAX]={1,0,};  
    int b[MAX]={1,0,}; 
    int c[MAX]={1,1,};  
    int i, n;

    scanf("%d", &n);
	for(i=0; i<n; i++) {
		copy(b, a);   
    	copy(c, b);    
		add(a, b, c); 
	}
	printResult(b);
}

