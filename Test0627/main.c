//
//  main.c
//  Test0627
//
//  Created by 20161104569 on 17/6/27.
//  Copyright © 2017年 20161104569. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    FILE  *fr;
    FILE  *fw;
    char a1[70];
    char a2[70];
    char lat[9],date[7],time[10],lon[11],high[7],rate[7],earth[10];
    int i;
    fr=fopen("//Users//a20161104569//Desktop//test0626//GPS170510.log","r+");
    fw=fopen("//Users//a20161104569//Desktop//test0626//GPS170510.log","w+");
    fscanf(fr,"%s%s",a1,a2);
    printf("结果:%s\n%s\n",a1,a2);
    for(i=0;i<9;i++)
        lat[i]=a1[i+16];
    lat[9]='\0';
    printf("纬度:%s\n",lat);
    for(i=0;i<6;i++)
        date[i]=a1[i+51];
    date[6]='\0';
    printf("日期:%s\n",date);
    for(i=0;i<6;i++)
        time[i]=a1[i+7];
    time[6]='\0';
    printf("时间:%s\n",time);
    for(i=0;i<8;i++)
        lon[i]=a1[i+27];
    lon[8]='\0';
    printf("经度:%s\n",lon);
    for(i=0;i<4;i++)
        high[i]=a2[i+43];
    high[4]='\0';
    printf("海拔:%sm\n",high);
    for(i=0;i<5;i++)
        rate[i]=a1[i+39];
    rate[5]='\0';
    printf("速度:%sm/s\n",rate);
    for(i=0;i<5;i++)
        earth[i]=a1[i+45];
    earth[5]='\0';
    printf("地面航向:%s\n",earth);
   
        printf("%s,%s,%s,%s,%s,%s,%s\n",lat,date,time,lon,high,rate,earth);
        fprintf(fw,"%s,%s,%s,%s,%s,%s,%s\n",lat,date,time,lon,high,rate,earth);
        fclose(fr);
        fclose(fw);
    return 0;
}

