#include <stdio.h>
#include <string>
#include <map>
using namespace std;
char nation[80], line[80];
int main()
{
	int N;
	scanf("%d", &N);

	std::map<std::string, int> table;
	for(int i=0; i<N; i++){
		scanf("%s", nation);
		gets(line);
		table[ nation ] ++;
	}

	for( auto it = table.begin(); it!=table.end(); ++it){
		printf("%s %d\n", it->first, it->second);
	}

}
