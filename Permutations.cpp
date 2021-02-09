#include<bits/stdc++.h>
using namespace std;

void swap(char* x,char* y){
	char temp=*x;
	*x=*y;
	*y=temp;
}

void combination(char* inp,int len,int fix){
	if(fix>=len)
		cout<<inp<<endl;
	else
		for(int i=fix;i<len;i++){
			swap( *(inp+ fix) ,*(inp+i) );
			combination(inp,len,fix+1);
			swap(*(inp+fix),*(inp+i));
		}

}

int main(int argc, char **argv){
	combination(argv[1],strlen(argv[1]),0);
	return 0;
}


