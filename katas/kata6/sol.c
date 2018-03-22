#include <stdlib.h>
#include <stdin.h>
#include <string.h>


int main()
{
	int g;
	int a;
	scanf("%d%d",&g,&a);
	int n;
	scanf("%d", &n);
	int x0;
	int y0;
	scanf("%d%d",&x0,&y0);
	
	int x1 = 0;
	int y1 = 0;
	int x2 = g - 1;
	int y2 = a - 1;
	
	while(1){
		char bomb[4];
		scanf("%s", bomb);
		
		if(strchr(bomb, 'U'))
		{
			y2 = y0 -1;
		}
		else if(strchr(bomb, 'D'))
		{
			y1 = y0 +1;
		}
		if(strchr(bomb, 'L'))
		{
			x2 = x0 -1;
		}
		else if(strchr(bomb, 'R'))
		{
			x1 = x0 +1;
		}
		
		x0 = x1 + (x2 - x1)/2;
		y0 = y1 + (y2 - y1)/2;
		printf("%d %d\n", x0,y0);
	}
	return 0;
}
