package main

import (
	"fmt"
)

func newGraph() *map[int][]int {
	graph := make(map[int][]int)
	fmt.Println(graph)
	return &graph
}
func addNewEdges(graph map[int][]int, v int, w int) *map[int][]int {
	graph[v] = append(graph[v], w)
	return &graph
}

func bfs(graph map[int][]int, startVertices int) {
	var queue []int
	var visitedList []bool
	fmt.Println(queue, graph)
	queue[0] = startVertices
	visitedList[queue[0]] = true
	fmt.Println(queue, graph)
	for len(queue) > 0 {
		temp := queue[0]
		fmt.Println(" ", temp)
		queue = queue[1:]
		for _, val := range graph[temp] {
			if !visitedList[val] {
				queue = append(queue, val)
				visitedList[queue[val]] = true
			}

		}
	}

}

func main() {
	// initialize a graph
	g := newGraph()
	// add new edges
	g = addNewEdges(*g, 0, 1)
	g = addNewEdges(*g, 0, 2)
	g = addNewEdges(*g, 1, 3)
	g = addNewEdges(*g, 1, 0)
	g = addNewEdges(*g, 2, 4)
	g = addNewEdges(*g, 2, 0)
	g = addNewEdges(*g, 3, 1)
	g = addNewEdges(*g, 3, 4)
	g = addNewEdges(*g, 4, 3)
	g = addNewEdges(*g, 4, 2)

	fmt.Println(g)
	bfs(*g, 0)
}
