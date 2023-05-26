package main

import "fmt"

func newGraph() *map[int][]int {
	graph := make(map[int][]int)
	fmt.Println(graph)
	return &graph
}
func addNewEdges(graph map[int][]int, v int, w int) *map[int][]int {
	graph[v] = append(graph[v], w)
	return &graph
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
}
