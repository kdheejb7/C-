#include <iostream>
#include <fstream> 
using namespace std;

class Maze{
	public:
	char state[12][12];
	int x0, y0;
	
	void load(std::string file){
		int i,j = 0;
		ifstream fin;
		fin.open(file);
		char ch;
		while (fin.get(ch)){
			this->state[i][j] = ch;
			if(j==11)
			{
				i++;
				j=0;
				fin.get(ch);
			}else j++;
		}	
		this->x0 = 0; this->y0 = 2;
		fin.close();
	}
	
	void print() {
	for (int i = 0; i < 12; i++)	
	{
		for (int j = 0; j < 12; j++)
		{
			cout << state[i][j] << " ";
		}
		cout << endl;
	}
	
} 
	
};

class RightHandMaze: public Maze{
	//오른쪽 벽잡고 가는 애.
	public:
		int f_dir; 		//앞쪽 
		int r_dir;		//앞쪽의 오른쪽   
		void rightwall(int &f, int &r)
		{
			//0: 동쪽, 1:남쪽, 2:서쪽, 3:북쪽  
			switch(f){
				case 0 :
					if(state[(this->y0)+1][(this->x0)]!='#')	//오른쪽이 벽이면.
						f=r; r=(f+1)%4;
					break;
				case 1 :
					if(state[(this->y0)][(this->x0)-1]!='#')
						f=r; r=(f+1)%4;
					break;
				case 2 : 
					if(state[(this->y0)-1][(this->x0)]!='#')
						f=r; r=(f+1)%4;
					break;
				case 3 : 
					if(state[(this->y0)][(this->x0)+1]!='#')
						f=r; r=(f+1)%4;
					break;					
			}
		}
		void goDirection(int &f,int &r, int &a, int&b)
		{
			switch(f){
				case 0 : 
					if(state[a][(b)+1]!='#')
					{
						state[a][b]='*';
						b++;
					}else{
						f=3; r=(f+1)%4;	//왼쪽으로 회전  
					}
					break;
				case 1 :
					if(state[a+1][b]!='#')
					{
						state[a][b]='*';
						(a)++;
					}else{
						f=0; r=(f+1)%4; 
					}
					break;
				case 2 :
					if(state[a][(b)-1]!='#')
					{
						state[a][b]='*';
						(b)--;
					}else{
						f=1; r=(f+1)%4;
					}
					break;
				case 3 :
					if(state[a-1][b]!='#')
					{
						state[a][b]='*';
						(a)--;
					}else{
						f=2; r=(f+1)%4;
					}
					break;
			}
		}
	 
	 
};


int main(){
	RightHandMaze m;
	m.load("maze.txt");
	
	m.f_dir=0;
	m.r_dir=1;
	
	do{
		m.rightwall(m.f_dir, m.r_dir);	//방향 판단
		m.goDirection(m.f_dir, m.r_dir, m.y0, m.x0);	//움직임  
		cout << endl;
		m.print();
		
	}while((m.x0<12)&&(m.y0<12)&&(m.x0>=0)&&(m.y0>=0));

	
}
