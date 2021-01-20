#include <iostream>
#include <cstdlib>
#include <cstring>


using namespace std;

int main(){
	int width=1;
	char str[5];
	while(1){
		cin>>str;
		width=1;

		if(atoi(str)==0)
			break;
		//cout<<strlen(str)<<endl;
		for(int i=0;i<strlen(str);i++){
			switch(str[i]){
				case '0':
					width+=5;
					break;
				case '1':
					width+=3;
					break;
				case '2':
					width+=4;
					break;
				case '3':
					width+=4;
					break;
				case '4':
					width+=4;
					break;
				case '5':
					width+=4;
					break;
				case '6':
					width+=4;
					break;
				case '7':
					width+=4;
					break;
				case '8':
					width+=4;
					break;
				case '9':
					width+=4;
					break;
			}
		}
		//cout<<"width is "<<width<<endl;
		cout<<width<<endl;

	}
	return 0;
}