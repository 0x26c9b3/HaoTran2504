#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Số lượng đỉnh và cạnh của đồ thị
int numVertices, numEdges;

// Mảng lưu trữ các cạnh của đồ thị
struct Edge {
  int src, dest, weight;
} edges[100];

// Mảng lưu trữ số liên kết của các đỉnh
int numLinks[100];

// Mảng lưu trữ các cạnh đã thêm vào cây khung
struct Edge mst[100];

// Hàm so sánh hai cạnh dựa trên trọng số của chúng
int compare(const void* a, const void* b) {
  struct Edge* a1 = (struct Edge*)a;
  struct Edge* b1 = (struct Edge*)b;
  return a1->weight > b1->weight;
}

// Hàm tìm cây khung nhỏ nhất sử dụng thuật toán Kruskal
void kruskalMST() {
  // Sắp xếp các cạnh theo thứ tự tăng dần theo trọng số
  qsort(edges, numEdges, sizeof(struct Edge), compare);

  // Khởi tạo số liên kết của tất cả các đỉnh là 1
  for (int i = 0; i < numVertices; i++) {
    numLinks[i] = 1;
  }

  // Duyệt từng cạnh và thêm nó vào cây khung nếu nó không làm cây trở thành không liên thông
  int i = 0, e = 0;
  while (e < numVertices - 1) {
    struct Edge nextEdge = edges[i++];
    int src = nextEdge.src, dest = nextEdge.dest;
    if (numLinks[src] != numLinks[dest]) {
      mst