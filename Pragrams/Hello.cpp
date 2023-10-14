#include<bits/stdc++.h>
using namespace std;
#define ld long double

int check(ld h,ld k,ld arr_x[],ld arr_y[],int n){
    int step = 0;
    for(int j=0;j<n;j++){
        ld xx=h-arr_x[j];
        ld yy=k-arr_y[j];
        if(xx==0 && yy==0){
          step+=0;
        }
        else if((xx==0 && yy!=0) || (xx!=0 && yy==0) ){
          step+=1;
        }
        else if(abs(xx)==abs(yy)){
          step+=1;
        }
        else step+=2;
    }
    return step;
}

void meeting_point() {
	int n;
	cin>>n;
    ld arrX[n],arrY[n];
    ld a,b;
    for(int i=0;i<n;i++){
        cin>>arrX[i];
	}
    for(int i=0;i<n;i++){
        cin>>arrY[i];
    }
    int steps=INT_MAX;
    for(int i=0;i<n;i++){
        for(int l=0;l<n;l++){
            //mean_point
            a=(arrX[i]+arrX[l])/2;
            b=(arrY[i]+arrY[l])/2;
            steps=min(steps,check(a,b,arrX,arrY,n));
            //x & y intersection points
            a = arrX[i];
            b = arrY[l];
            steps=min(steps,check(a,b,arrX,arrY,n));
            //x+y=c1 and x-y=c2 intersection points
            ld c1=arrX[i]+arrY[i];
            ld c2=arrX[l]-arrY[l];
            a = (c1+c2)/2;
            b = (c1-c2)/2;
            steps=min(steps,check(a,b,arrX,arrY,n));
            //x+y=c and x intersection
            ld c3=arrX[i]+arrY[i];
            a = arrX[l];
            b = c3-a;
            steps=min(steps,check(a,b,arrX,arrY,n));
            //x+y and y intersection
            ld c4=arrX[i]+arrY[i];
            b = arrY[l];
            a = c4-b;   
            steps=min(steps,check(a,b,arrX,arrY,n));
            //x-y and X
            ld c5=arrX[i]-arrY[i];
            a = arrX[l];
            b = a-c5;
            steps=min(steps,check(a,b,arrX,arrY,n));
            //x-y and y
            ld c6=arrX[i]-arrY[i];
            b = arrY[l];
            a = c6+b; 
            steps=min(steps,check(a,b,arrX,arrY,n));
        }
    }
    cout<<steps<<"\n";
}

int main(){

  	int t;cin>>t;
  	while(t--){
     	 meeting_point();
  	}
  	return 0;
}