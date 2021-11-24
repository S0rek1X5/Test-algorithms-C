#include <stdio.h>
int main(){
	int uno[11][21],k=12;
	for(int i=0;i<11;i++){
		for(int j=0;j<21;j++){
			uno[i][j]=1;
		}
	}
	for(int i=0;i<11;i++){
		for(int j=10;j<11;j++){
		    uno[i][j]=4;
		}
	}
	for(int i=1;i<11;i++){
		for(int j=9;j<12;j++){
		    uno[i][j]=4; 
		}
	}
	for(int i=2;i<11;i++){
		for(int j=8;j<13;j++){
		    uno[i][j]=4;
		}
	}
	for(int i=3;i<11;i++){
		for(int j=7;j<14;j++){
		    uno[i][j]=4;
		}
	}
	for(int i=4;i<11;i++){
		for(int j=6;j<15;j++){
		    uno[i][j]=4;
		}
	}
	for(int i=5;i<11;i++){
		for(int j=5;j<16;j++){
		    uno[i][j]=4;
		}
	}
	for(int i=6;i<11;i++){
		for(int j=4;j<17;j++){
		    uno[i][j]=4;
		}
	}
	for(int i=7;i<11;i++){
		for(int j=3;j<18;j++){
		    uno[i][j]=4;
		}
	}
	for(int i=8;i<11;i++){
		for(int j=2;j<19;j++){
		    uno[i][j]=4;
		}
	}
	for(int i=9;i<11;i++){
		for(int j=1;j<20;j++){
		    uno[i][j]=4;
		}
	}
	for(int i=10;i<11;i++){
		for(int j=0;j<21;j++){
		    uno[i][j]=4;
		}
	}
	for(int i=0;i<11;i++){
		for(int j=0;j<21;j++){
			printf("%d",uno[i][j]);
			}
		printf("\n");
	}
	return 0;
}
