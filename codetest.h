#include <stdio.h>
#include <stdlib.h>

/*
��λ���ظ������� 
*/ 
void Test0001(){
    
    int  data[]={1,2,3,4,5,6,7,8,9,0};
    int i,j,k;
  
    //��ȡ���鳤�� 
    int length  = sizeof(data)/sizeof(data[0]);

    //int i,j,k;
    printf("\n");
    for(i=0;i<length;i++) { // ����Ϊ����ѭ��
        for(j=0;j<length;j++) {
            for (k=0;k<length;k++) { // ȷ��i��j��k��λ������ͬ
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
	scanf("�������");
	bonus1=bonus1*0.001;
	
	
	
	
	 
	
	
}

