package main

//
//func bfs(graph map[int][]int, startVertices int) {
//	var queue []int
//	var visitedList []bool
//	queue[0] = startVertices
//	visitedList[queue[0]] = true
//
//	for len(queue) > 0 {
//		temp := queue[0]
//		fmt.Println(" ", temp)
//		queue = queue[1:]
//		for _, val := range graph[temp] {
//			if !visitedList[val] {
//				queue = append(queue, val)
//				visitedList[queue[val]] = true
//			}
//
//		}
//	}
//
//}
