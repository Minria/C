
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

#define MAXVEX 5//最大顶点数
typedef char VertexType;//顶点类型
typedef int EdgeType;//边上的权值类型
typedef struct{
	VertexType vexs[MAXVEX];//顶点表
	EdgeType arc[MAXVEX][MAXVEX];//邻接矩阵
	int numVertexte;//当前顶点数
	int numEdges;//当前边数
}MGraph;

void BFSTraverse(MGraph* G){
	queue<VertexType> q;//存储节点用的辅助队列
	vector<bool> visited(G->numVertexte, false);//初始所有的顶点状态都是未访问过得
	for (int i = 0; i < G->numVertexte; ++i){
		//若是未访问过就处理
		if (!visited[i]){
			visited[i] = true;//设置当前顶点访问过
			cout << G->vexs[i] << " ";//打印顶点
			q.emplace(i);//将此顶点入队列
			//若当前队列不为空
			while (!q.empty()){
				i = q.front();//将队中元素出队列，赋值给1
				q.pop();
				for (int j = 0; j < G->numVertexte; ++j){
					//判断其他顶点若与当前顶点存在边且未访问过
					if (G->arc[i][j] == 1 && !visited[j]){
						visited[j] = true;//将找到的此顶点标记为已访问
						cout << G->vexs[j] << " ";//打印顶点
						q.emplace(j);//将找到的此顶点入队列
					}
				}
			}
		}
	}
}
