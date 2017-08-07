#ifndef _DIJKSTRA_H
#define _DIJKSTRA_H

#define INFINITY 1000//两节点之间没有边时的权值
#define MAX_VERTEX_NUM 10//最大顶点数
//typedef struct MGraph{
	int vexs[10];//顶点信息
//	int arcs[6][6];//邻接矩阵
	int vexnum, arcnum;//顶点数和边数
//}MGraph;


void CreateDN(void);
//int LocateVex(MGraph G, int u);
#endif

