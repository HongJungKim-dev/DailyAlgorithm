int[] visited = new int[n];
		int computerNum = computers.length;
		int cnt = 0;
		Queue<Integer> queue = new LinkedList<>();
		
		visited[0] = 1;
		queue.offer(0);
		
		while(true) {
			
			while(!queue.isEmpty()) {
				int popped = queue.poll();
				for(int i=0; i<n; i++) {
					if(computers[popped][i] == 1 && visited[i] == 0) {
						visited[i] = 1;
						queue.offer(i);
						cnt++;
						System.out.println(cnt);
					}
				}
			}
			j++;
			if(j==n){
        break;
      }
      if(visited[j]==0) {
				queue.offer(j);
			}
		}
		return cnt;
