#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int map1[10000][10000][2];
int main() {
	int a,x,y,mapsize,sum=0;
	freopen("in.txt","r",stdin);
		cin>>mapsize;
		cin>>a;
		for(int i=0; i<a; i++) {
			scanf("%d %d",&x,&y);
			map1[x+1][y+1][0]=1;
		}
		system("cls");
		cout<<"The 0"<<endl;
		for(int i=1; i<mapsize+1; i++) {
			for(int j=1; j<mapsize+1; j++) {
				if(map1[i][j][0]==1) printf("%c ",1);
				else printf("%c ",0);
				map1[i][j][1]=0;
			}
			printf("\n");
		}
		system("pause");
		
	fclose(stdin);
	return 0;
}
