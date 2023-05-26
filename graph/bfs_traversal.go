package main

import "fmt"

func bfs(graph map[int][]int, startVertices int) {
	var queue []int
	fmt.Println(queue)
	var visitedList []int

	queue[0] = graph[startVertices][0]

	for len(queue) > 0 {
		visitedList[len(visitedList)-1] = queue[0]
		queue = queue[1:]
		
	}

}
