综合练习：

	struct B
	{
		char a;			
		double* b;		
		short c;		//12，其中4为最大对齐数
	};
	struct A
	{
		char a;			//0
		int b;			//4，5，6，7
		char c[3];		//8，9，10
		double* x;		//12，13，14，15
		struct B object；		////16+12=28，最大对齐数为4
		char d;			//28
		char* e[3];		//32~44，最大对齐数为4，一个对齐，其余3个也对齐
	};
	printf("%d\n", sizeof(struct A));
