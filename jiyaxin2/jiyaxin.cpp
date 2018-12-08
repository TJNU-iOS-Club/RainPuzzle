//
//  main.cpp
//  ios_club_2
//
//  Created by 鑫鑫之火 on 2018/12/8.
//  Copyright © 2018年 鑫鑫之火. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int n,value=0,d=0;
    cout<<"请输入数据的个数:";
    cin>>n;
    int a[n-1];
    for(int i=0;i<n;i++)
        cin>>a[i];              //输入数据
    int max=a[0],max1=a[0];
    for(int i=1;i<n;i++){
       
        if(a[i]>=max)
        {
            max=a[i];
            d=i;               //最大值在第d列
        }
        
    }
    for (int i=1; i<=d; i++){
        if(a[i]>=max1)
        {
            max1=a[i];
            value=value+0;
            
        }
        else  value=value+(max1-a[i]);       //最大值这一列的左边可以接的雨水
    }
    
    int max2=a[n-1];
    for(int i=n-1;i>d;i--){
        
        if(a[i-1]>=max2)
        {
            max2=a[i-1];
            value=value+0;
        }
        else  value=value+(max2-a[i-1]);
    }
    cout<<"可以接 "<<value<<" 个单位的雨水"<<endl;
    
    
    return 0;
}
