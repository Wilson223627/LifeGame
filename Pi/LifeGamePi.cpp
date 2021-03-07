#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int map1[10000][10000][2];
int main() {
	int a,x,y,mapsize,sum=0,times,moshi;
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	cout<<"Enter map's size: ";
	cin>>mapsize;
	cout<<"Enter input times: ";
	cin>>a;
	for(int i=0; i<a; i++) {
		cout<<"The"<<i+1<<"times   "<<"Enter x y : ";
		scanf("%d %d",&x,&y);
		map1[x+1][y+1][0]=1;
	}
	cout<<"Enter go times: ";
	scanf("%d",&times);
	cout<<"The 0"<<endl;
	for(int i=1; i<mapsize+1; i++) {
		for(int j=1; j<mapsize+1; j++) {
			if(map1[i][j][0]==1) printf("%c",1);
			else printf("%c ",0);
			map1[i][j][1]=0;
		}
		printf("\n");

	}
	for(int w=0; w<times; w++) {
		for(int i=1; i<mapsize+1; i++) {
			for(int j=1; j<mapsize+1; j++) {
				if(map1[i-1][j-1][0]==1)map1[i][j][1]++;
				if(map1[i][j-1][0]==1)map1[i][j][1]++;
				if(map1[i-1][j][0]==1)map1[i][j][1]++;
				if(map1[i+1][j-1][0]==1)map1[i][j][1]++;
				if(map1[i-1][j+1][0]==1)map1[i][j][1]++;
				if(map1[i+1][j+1][0]==1)map1[i][j][1]++;
				if(map1[i+1][j][0]==1)map1[i][j][1]++;
				if(map1[i][j+1][0]==1)map1[i][j][1]++;
			}
		}

		for(int i=1; i<mapsize+1; i++) {
			for(int j=1; j<mapsize+1; j++) {
				if(map1[i][j][1]==3)map1[i][j][0]=1;
				if(map1[i][j][1]>3)map1[i][j][0]=0;
				if(map1[i][j][1]<2)map1[i][j][0]=0;
			}
		}
		printf("\n");
		cout<<"The "<<w+1<<endl;
		for(int i=1; i<mapsize+1; i++) {
			for(int j=1; j<mapsize+1; j++) {
				if(map1[i][j][0]==1) printf("%c",1);
				else printf("%c ",0);
				map1[i][j][1]=0;
			}
			printf("\n");

		}
	}
	fclose(stdin);fclose(stdout);
	system("pause");	 
	return 0;
}
