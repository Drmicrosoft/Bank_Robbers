#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    
    int num ;
    int chr ;
    int R;
    scanf("%d", &R);
    int V=1;
    scanf("%d", &V);
     int C;
        int N;
        int total = 0 ;
        int vv[V];
    for (int i = 0; i < V; i++) {
       
        scanf("%d%d", &C, &N);
      fprintf(stderr, "R = %d\n",R);
        fprintf(stderr, "V = %d\n",V);
        fprintf(stderr, "C = %d\n",C);
        fprintf(stderr, "N = %d\n",N);
        fprintf(stderr,"\n\n",N);
    num = pow(10,N);
    chr = pow(5,C-N);
    vv[i]=num*chr;
    total = (num * chr) + total;
    fprintf(stderr, "total = %d\n",total);
     fprintf(stderr,"\n\n",N);
    }
    int w [R] ;
    
    
    
    
    
int omar = 0 ;

             for (int i = 0; i < V ; i++)
             {
                 
             for (int z = 0; z < R-1; z++) {
                 if(w[z]>w[z+1])
                 {
                     omar=z+1;
                 }
                 else
                 omar = z ; 
             }
             w[omar]=w[omar]+vv[i];
             
      for (int i = 0; i < R; i++) {
    fprintf(stderr, "*---* w[%d] = %d\n",i,w[i]);
      }

             }
         
       
        
     

fprintf(stderr, "\n\n\n\n\n\n\n");
      for (int i = 0; i < R; i++) {
    fprintf(stderr, "*'''''''''* w[%d] = %d\n",i,w[i]);
      }




    
    
    for (int i = 0; i < R; i++) {
        w[i]=0;
    }
    for (int i = 0; i <R; i++) {
     for( int j = i ; j<V;j=j+R)
     {
        //  if(j<=V)
        //  {  
         w[i]=w[i]+vv[j];
          fprintf(stderr, ">>>>>  w[%d] = %d \t j = %d \n",i,w[i],j);
        //  }
     }}
     
      for (int i = 0; i < R; i++) {
    fprintf(stderr, "w[%d] = %d\n",i,w[i]);
      }



    
    
    int max = vv[0] ; 
    fprintf(stderr, "vv[%d] = %d\n",0,vv[0]);
    fprintf(stderr,"\n\n",N);
    
    
    
    for (int i = 1; i < V; i++) {
    fprintf(stderr, "vv[%d] = %d\n",i,vv[i]);
     fprintf(stderr,"\n\n",N);
     
     if(max < vv[i])
     max = vv[i];
    }

    for (int i = 0; i < V; i++) {
     for( int j = i ; j<V;j++)
     {
         if(vv[i]>vv[j])
         {
             int tmp = vv[j];
             vv[j]=vv[i];
             vv[i]=tmp ; 
             
         }
     }
    }
    
    
    for (int i = 0; i < R; i++) {
        w[i]=0;
    }
    for (int i = 0; i <R; i++) {
     for( int j = i ; j<V;j=j+R)
     {
        //  if(j<=V)
        //  {  
         w[i]=w[i]+vv[j];
          fprintf(stderr, ">>>>>  w[%d] = %d \t j = %d \n",i,w[i],j);
        //  }
     }}

    for (int i = 0; i < V; i++) {
    fprintf(stderr, "vv[%d] = %d\n",i,vv[i]);
     fprintf(stderr,"\n\n",N);
     
     if(max < vv[i])
     max = vv[i];
    }
int max1 = w[0];
 for (int i = 0; i < R; i++) {
    fprintf(stderr, "w[%d] = %d\n",i,w[i]);
     if(max1 < w[i])
     max1 = w[i];
    
 }


    
    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    
   
   // total = num * chr * V; 
    
        
        fprintf(stderr, "R = %d\n",R);
        fprintf(stderr, "V = %d\n",V);
        fprintf(stderr, "C = %d\n",C);
        fprintf(stderr, "N = %d\n",N);

    
    
    
    printf("%d\n",max1);

    return 0;
}
