//kruskal algo using union find and path compression
//use ideone 	https://ideone.com/PYw5b6		gfg
#include<bits/stdc++.h>
using namespace std;

struct node
{
	int start;
	int end;
	int weight;
};

auto comp = [](node a, node b) { return (a.weight) < (b.weight); };
multiset<node,decltype(comp)> s(comp);
vector<pair<int,int> > :: iterator itr;
int arr[100];

int addedge()
{
	int a=0,b=0,c=0,i=0,j=0,n=0;
	cout<<"Enter number of edges";
	cin>>n;
	cout<<"Enter start node, end node and weight";
	for(int i=0;i<n;i++)
	{
		cin>>a>>b>>c;
		node n;
		n.start=a;
		n.end=b;
		n.weight=c;
		s.insert(n);
	}
}


int root(int i)
{
	while(arr[i]>0)
	i=arr[i];
	return i;
}

int find(int a,int b)
{
	if(root(a)!=root(b))
	return 1;
	else
	return 0;
}

int union1(int a,int b)//a(child)->b(parent)
{
	int a1=root(a);
	int a2=root(b);
	if(a1==a2)return 0;//if both parent same, no operation
	int flag=0;
	if(abs(arr[a1])>abs(arr[a2]))
	{
		arr[a2]=a1;
		arr[a1]--;
		flag=1;
	}
	else
	{
		arr[a1]=a2;
		arr[a2]--;
		flag=2;
	}
	if(find(a,b)==1)
	{if(flag==1)
	{
		arr[a1]=a2;
		arr[a2]--;
		return 0;
	}
	else
	{
		arr[a2]=a1;
		arr[a1]--;
		return 0;
	}}
	else
	return 1;
}


int kruskal(int n)
{
	int i=0;
	auto it=s.begin();
	while(i<n-1)
	{
		node temp=*it;
		if(union1(temp.start,temp.end)==1)
		{i++;cout<<temp.start<<" "<<temp.end<<" "<<temp.weight<<endl;}
		it++;
	}
}

int main()
{
	int n=0;
	addedge();
	memset(arr,-1,100*sizeof(int));
	// for(n=0;n<100;n++)arr[n]=-1;
	cout<<"Enter no of vertices";
	cin>>n;
	kruskal(n);
	return 0;
}
