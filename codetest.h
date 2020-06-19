#include <stdio.h>
#include <stdlib.h>

/*
三位无重复的数字 
*/ 
void Test0001(){
    
    int  data[]={1,2,3,4,5,6,7,8,9,0};
    int i,j,k;
  
    //获取数组长度 
    int length  = sizeof(data)/sizeof(data[0]);

    //int i,j,k;
    printf("\n");
    for(i=0;i<length;i++) { // 以下为三重循环
        for(j=0;j<length;j++) {
            for (k=0;k<length;k++) { // 确保i、j、k三位互不相同
                if (i!=k&&i!=j&&j!=k) { 
                    printf("%d,%d,%d\n",i,j,k);
                }
            }
        }
    }
    
}


void Test0002(){
	double i;
	double bonus1,bonus2,bonus3,bonus4,bonus6,bonus10,bonus;
	scanf("请输入金额：");
	bonus1=bonus1*0.001;
	
	
	
	
	 
	
	
}

