示例4：

struct S3
	{
		double d;		//8，9，10，11，12，13，14，15
		char c;			//16
		int i;			//20，21，22，23
	};
	struct S4
	{
		char c1;		//0
		struct S3 s3;
		double d;		//24，25，26，27，28，29，30，31
	};
	printf("%d\n", sizeof(struct S4));
