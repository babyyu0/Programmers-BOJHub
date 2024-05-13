import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

public class Main {
	private static class Node {
		public Node(List<Integer> child) {
			this.child = child;
		}

		List<Integer> child;
	}
	private static int N, M;
	private static Node[] singers;
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringTokenizer st = new StringTokenizer(br.readLine());
		StringBuilder sb = new StringBuilder();
		
		
		N = Integer.parseInt(st.nextToken()); //가수의 수
		M = Integer.parseInt(st.nextToken()); //보조 PD의 수
		singers = new Node[N + 1];
		for(int i = 1; i <= N; i++) {
			singers[i] = new Node(new ArrayList<>());
		}
		
		
		int singer, before = 0;
		for(int i = 0; i < M; i++) {
			st = new StringTokenizer(br.readLine());
			int j = Integer.parseInt(st.nextToken()); //PD가 맡은 가수의 수
			before = 0;
			
			while(0 < j--) {
				singer = Integer.parseInt(st.nextToken()); //n번째 가수				
				if(0 < before) singers[singer].child.add(before); 
				before = singer; 
			}
		}
		
		int count = 0; boolean flag;
		while(count != N) {
			flag = false;
			for(int i = 1; i <= N; i++) {
				if(singers[i] == null) continue;
				for(int j = 0; j < singers[i].child.size(); j++) {
					if(singers[singers[i].child.get(j)] == null) {
						singers[i].child.remove(j--);
					}
				}
				//System.out.println("node " + i + " = " + singers[i].nodes);
				if(singers[i].child == null || singers[i].child.size() == 0) {
					sb.append(i).append("\n");
					//System.out.println(i);
					count++;
					singers[i] = null;
					flag = true;
				}
			}
			if(!flag) {
				System.out.println(0);
				return;
			}
		}
		
		bw.append(sb.toString());
		bw.flush();
		bw.close();
		br.close();
	}
}
