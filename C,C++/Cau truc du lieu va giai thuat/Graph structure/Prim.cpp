#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define INF 1000000

// Số lượng đỉnh và cạnh của đồ thị
int numVertices, numEdges;

// Ma trận trọng số của đồ thị
int weight[100][100];

// Mảng lưu trữ các đỉnh đã thêm vào cây khung
bool inMST[100];

// Hàm tìm đỉnh có trọng số nhỏ nhất trong các đỉnh chưa thêm vào cây
int findMinVertex() {
  int minWeight = INF;
  int minVertex = -1;
  for (int i = 0; i < numVertices; i++) {
    if (!inMST[i] && weight[i] < minWeight) {
      minWeight = weight[i];
      minVertex = i;
    }
  }
  return minVertex;
}

// Hàm tìm cây khung nhỏ nhất sử dụng thuật toán Prim
void primMST() {
  // Khởi tạo cây khung với một đỉnh bất kỳ
  inMST[0] = true;
  for (int i = 0; i < numVertices - 1; i++) {
    // Tìm đỉnh có trọng số nhỏ nhất trong các đỉnh chưa thêm vào cây
    int minVertex = findMinVertex();

    // Thêm đỉnh đó vào cây khung
    inMST[minVertex] = true;

    // Cập nhật trọng số các đỉnh khác khi thêm đỉnh mới vào cây
    for (int j = 0; j < numVertices; j++) {
      if (!inMST[j]) {
        weight[j] = min(weight[j], weight[minVertex][j]);
      }
    }
  }