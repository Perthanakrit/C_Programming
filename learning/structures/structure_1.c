#include <stdio.h>

typedef struct account
{
	int number;
	float balance;
} Account;

struct account_2
{
	int number;
	float balance;
};

struct customer
{
	int id;
	struct account_2 acct;
};

typedef struct person
{
	int id;
	char name[15];
	float height;
	double weigth;
} Person;

void deposit(struct account act, int amount)
{
	act.balance += amount;
}

int main()
{
	int length, width;
	long area;
	Account my_account = {1, 100.0};
	Person pe = {1, "John", 1.8, 80.0};
	struct customer donal;
	struct account_2 my_account_2 = {1, 100.0};
	donal.id = 1;
	donal.acct = my_account_2;

	struct rec
	{
		char c;
		int i;
		float f;
	} x;

	struct cons
	{
		double rl;	   // 8
		int x;		   // 4
		int y;		   // 4
		char name[10]; // 10
	} Cs;

	// Rectangle my_box;

	// printf("%d, %d\n", ti.base, ti.height);
	deposit(my_account, 50);
	printf("%f\n", my_account.balance);

	// printf("%lu\n", sizeof(struct person));
	// printf("%lu\n", sizeof(pe.name));

	printf("%lu\n", sizeof(Cs));

	return 0;
}
