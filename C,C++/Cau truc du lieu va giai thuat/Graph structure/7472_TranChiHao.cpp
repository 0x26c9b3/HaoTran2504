
// Chi ap dung voi Do thi hop le, vo huong, co the co trong so

#include<stdio.h>
#include<conio.h>
#define input "text6.txt"
#define MAX 20	//max so dinh cua do thi
using namespace std;
typedef struct GRAPH
{ 	int n;
	int a[MAX][MAX];
}DOTHI;

int LuuVet[MAX];
int ChuaXet[MAX];

//==============================================================
int DocMaTranKe(const char* TenFile,DOTHI &g)
{	FILE* f;
	f = fopen(TenFile,"rt");
	if(f==NULL)
	{
		printf("Khong mo duoc file\n");
		return 0;
	}
	fscanf(f,"%d",&g.n);
	for(int i=0;i<g.n;i++)
		for(int j=0;j<g.n;j++)
			fscanf(f,"%d",&g.a[i][j]);
	fclose(f);
	return 1;
}
//==============================================================
void XuatMaTranKe(DOTHI g)
{	printf("So dinh cua do thi = %d\n",g.n);
	printf("Ma tran ke cua do thi la:\n");
	for(int i=0;i<g.n;i++)
	{	for(int j=0;j<g.n;j++)
			printf("%4d",g.a[i][j]);
		printf("\n");
	}
}
//==============================================================
int KiemTraMaTranKeHopLe(DOTHI g)
{
	for(int i=0;i<g.n;i++)
		if(g.a[i][i] != 0)
			return 0;
	return 1;
}
//==============================================================
void DFS(int v, DOTHI g)
{
	ChuaXet[v] = 1; // dinh v duoc xet
	for(int u=0; u<g.n; u++)
		if(g.a[v][u] !=0 && ChuaXet[u] ==0) // dinh v,u ke nhau va u chua xet 
		{	LuuVet[u] = v;
			DFS(u, g);
		}
}
//==============================================================
void KetQua_DeQui(int S, int F)
{
	if(F != S) 
		KetQua_DeQui(S, LuuVet[F]);
	printf("%d -> ", F);
}
//==============================================================
void DuyetTheoDFS(int S, int F, DOTHI g)
{
	for(int i=0; i<g.n; i++)
	{
		LuuVet[i] = -1;
		ChuaXet[i] = 0;
	}
	DFS(S, g);
	if(ChuaXet[F] == 1) // co duong di tu S -> F
	{	
		printf("\n DFS: Duong di tu dinh %d -> %d la:\n\t", S, F);
		KetQua_DeQui(S, F);
		printf("\b\b\b\b.   \n");
	}
	else printf("\n Khong co duong di tu dinh %d -> %d.\n", S, F);
}
//==============================================================
int main()
{
	DOTHI g;
		
	char inputfile[100]="test6.txt";
	char ch;
	int S,F;
	do
	{
//		printf("\n\nNhap ten file do thi: ");
//		fflush(stdin); gets(inputfile);
		if(DocMaTranKe(inputfile, g)==1) 
		{
			printf("\n Da lay thong tin do thi tu file thanh cong.\n\n");
			XuatMaTranKe(g);
		
			printf("\n Nhap Dinh bat dau: "); scanf("%d", &S);
			printf("\n Nhap Dinh ket thuc: "); scanf("%d", &F);
			
			DuyetTheoDFS(S,F,g);
		}
		printf("\n\n-----------------------\n");
		printf("Ban tiep tuc nua khong[Y/N]: ");
		ch=getche();
	}while(ch=='Y'||ch=='y');
	return 0;
}

