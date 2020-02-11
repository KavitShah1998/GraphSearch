#include<iostream>
#include<cstdlib>
#include<queue>
#include<vector>
using namespace std;

class BFS_Search {

private:

	int n = 6;
	int Vertices[6];
	vector<vector<int>> Adjacency_list;
	bool Visited[6];
	queue<int> g;
	int start_node;
	int search_node;


public:

	int i;
	BFS_Search() {  //Constructor 

		
		for ( i = 0; i < n; i++)  // Initialize the arrays and the adjacency list
		{
			Visited[i] = 0;
			Vertices[i] = i + 1;
		}
		Adjacency_list = { {1,2},{0,3,4},{0,4},{1,4,5},{1,2,3,5},{3,4} };
	}

	void SearchNode(int st, int se)  // This function takes in the start and end node 
	{
		start_node = st - 1;  // Index for the start node
		search_node = se - 1; // Index for the end node
	}


	void printQ(queue<int> q) {   // Function to print the queue
		while (!q.empty())
		{
			cout << "\t" << q.front();
			q.pop();
		}
		return;
	}


	bool is_exist(queue<int> q, int j)  // Function to check if an element is in the queue
	{
		while (!q.empty()) {
			if (q.front() == j)
			{
				return true;
			}
			else
			{
				q.pop();
			}
		}
		return false;
	}


	void BFS() {  // Function for Breadth First Search
		
		int j; 
		cout << "\n Start of algorithm \n";
		bool break_flag = false;
		g.push(start_node);
		int temp;
		int x; // element to store the popped data (iterator form) from the queue
		while (!g.empty()) {

			x = g.front();
			g.pop();
			if (Visited[x] == 0)
			{

				if (x == search_node)
				{
					break_flag = true;
				}
				cout  << Vertices[x]<<"\n";
				
				if (break_flag == true)  // If the element is found: break the while loop (this needed to be done after printing the element in the previous step)
				{
					cout << "\n The element " << Vertices[x] << " is found.";
					cout << "\n End of code\n\n\n";
					break;
				}


				Visited[x] = 1;
				

				for (j = 0; j < Adjacency_list[x].size(); j++)
				{
					temp = Adjacency_list[x][j];
					if (Visited[temp] != 1 && is_exist(g,temp)==false)
					{
						g.push(temp);
					}

				}
			}
			else {
				continue;
			}
		}
		if (break_flag == false)
		{
			cout << "\n The element " << search_node+1 << " not found in the graph.";
			cout << "\n End of Algorithm\n\n\n";
		}
		return;
	}

	

};

int main()
{
	BFS_Search b1, b2,b3;

	b1.SearchNode(1, 5);  
	b1.BFS();

	b2.SearchNode(2, 3);
	b2.BFS();

	b3.SearchNode(5, 7);
	b3.BFS();
	return 0;
}