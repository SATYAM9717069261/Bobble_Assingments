#include<bits/stdc++.h>
#include<fstream>
using namespace std;

void swap(char* x,char* y){
	char temp=*x;
	*x=*y;
	*y=temp;
}

void combination(char* inp,int len,int fix){
	if(fix>=len)
		cout<<inp<<"\t";
	else
		for(int i=fix;i<len;i++){
			swap( *(inp+ fix) ,*(inp+i) );
			combination(inp,len,fix+1);
			swap(*(inp+fix),*(inp+i));
		}

}

int main(int argc, char **argv){
	ifstream myfile;

	myfile.open(argv[1]);
	while(myfile.good()){
		string inp;
		getline(myfile,inp,'\n');
		cout<<"Input String => " << inp<<endl;
		combination(&inp[0],strlen(&inp[0]),0);
		cout<<endl;
	}
	return 0;
}


