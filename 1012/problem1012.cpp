//#include <iostream>
//#include <queue>
//
//using namespace std;
//int board[52][52];
//bool visit[52][52];
//int dx[4] = { 1,0,-1,0 };
//int dy[4] = { 0,1,0,-1 };
//int main() {
//	int T, M, N, K;
//
//	cin >> T;
//	for (int q = 0; q < T; q++) {
//		cin >> M >> N >> K;
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				board[i][j] = 0;
//				visit[i][j] = false;
//			}
//		}
//		int x, y;
//		for (int i = 0; i < K; i++) {
//			cin >> x >> y;
//			board[y][x] = 1;
//		}
//		int cnt = 0;
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				if (board[i][j] == 0 || visit[i][j])
//					continue;
//				queue<pair<int, int>> que;
//				que.push(make_pair(i, j));
//				visit[i][j] = true;
//				cnt++;
//				while (!que.empty()) {
//					auto cur = que.front();
//					que.pop();
//
//					for (int b = 0; b < 4; b++) {
//						int nx = cur.first + dx[b];
//						int ny = cur.second + dy[b];
//
//						if (nx < 0 || nx >= N || ny < 0 || ny >= M)
//							continue;
//						if (board[nx][ny] == 0 || visit[nx][ny])
//							continue;
//						que.push(make_pair(nx, ny));
//						visit[nx][ny] = true;
//					}
//				}
//			}
//			
//		}
//		cout << cnt << endl;
//	}
//	return 0;
//}