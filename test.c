/*
* test git 
 */

#include <stdio.h>

int main()
{
	printf("test git\n");
	
	printf("helo word\n");

	printf("helo saikor\n");


	printf("editing curr\n");

    printf("test git reset: using the git pull to cancel the reset operation\n");
	return 0;
}


/*
* git remote add origin git@github.com:michaelliao/learngit.git
* 1、关联本地仓库和远端仓库
* 
* git push -u origin master
* 2、第一次推送master分支时，加上了-u参数。
*    Git不但会把本地的master分支内容推送的远程新的master分支，
*    还会把本地的master分支和远程的master分支关联起来，
*    在以后的推送或者拉取时就可以简化命令: git push origin master。
*/
