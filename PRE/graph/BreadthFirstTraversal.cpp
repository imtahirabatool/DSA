#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <unordered_map>

using namespace std;

void breathFirstPrint(unordered_map<string, vector<string>> &graph, string source)
{
    queue<string> q;
    q.push(source);

    while (!q.empty())
    {
        string current = q.front();
        q.pop();
        cout << current << endl;

        for (string neighbor : graph[current])
        {
            q.push(neighbor);
        }
    }
}

int main()
{
    // Define the graph as an unordered_map
    unordered_map<string, vector<string>> graph = {
        {"a", {{"b"}, {"c"}}},
        {"b", {"d"}},
        {"c", {"e"}},
        {"d", {"f"}},
        {"e", {}},
        {"f", {}}
    };

    breathFirstPrint(graph, "a");
    return 0;
}

//Output: abcdef