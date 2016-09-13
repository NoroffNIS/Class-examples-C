#include <stdio.h>
#include <stdlib.h>


int multiply(int m, int n);
int isPrime(int n, int d);

int main()
{
    int num;
    printf("Type in amount of prime numbers you want.\n>");
    scanf("%d", &num);

    print_primes(num);


    //printf("Multiply 5 by 6 = %d",multiply(364, 4));
}
int print_primes(int num)
{
    if(num == 1){
       printf("%d - ", num);
       return;
    }
    else if(isPrime(num,num/2)== 0){
        print_primes(num-1);
        return num;
    }
    else
        print_primes(num-1);

    printf("%d - ", num);
}

int isPrime(int n, int d)
{
    if(d == 1)
        return 1;
    else
    {
        if(n%d == 0)
            return 0;
        else
        {
            return isPrime(n, d-1);

        }
    }

}



int multiply(int m, int n)
{
    int ans;
    printf("Before: M=%d N=%d ans=%d\n",m,n, ans);

    if(n == 1)
    {
        ans = m;
    }
    else
    {
        ans = m + multiply(m, n-1);
    }
    printf("After: M=%d N=%d ans=%d\n",m,n, ans);
    return ans;
}

void kaniner_honer()
{
    int bein = 364,
        dyr = 120,
        hone_bein = 2,
        kanin_bein = 4,
        honer, kaniner, temp;

    temp = dyr*2;
    temp = bein - temp;
    kaniner = temp/2;
    honer = dyr - kaniner;

    printf("Høner %d , kaniner: %d\nDyr: %d\n", honer, kaniner,honer+kaniner);
}

/* //printf("Multiply 6 by 3 = %d\n", multiply(6,3));
    //printf("The number of %c in %s is %d.\n",'s',"Mississippi sassafras", count_char('s', "Mississippi sassafras"));

    //reverse_input_words(3);

    printf("372 gcd 63 = %d\n", gcd(372, 63));
    printf("372/%d = %d\n", gcd(372, 63), 371/gcd(372, 63));
    printf("63/%d = %d\n", gcd(372, 63), 63/gcd(372, 63));
    return 0;*/
int gcd(int m, int n)
{
    int ans;
    printf("m: %d | n:%d\n", m, n);
    if( m % n == 0 )
    {
        printf("m %% n == 0\n");
        ans = n;
    }
    else
    {
        printf("m:%d %% n:%d = %d\n", m, n, m%n);
        ans = gcd(n, m%n);
    }
    printf("m: %d | n:%d | ans: %d\n", m, n, ans);
    return ans;
}

void reverse_input_words(int n)
{

    char word[50];
    printf("Round %d\n", n);
    if(n==1)
    {
        printf("n==1\n");
        scanf("%s", word);
        printf("%s\n", word);
    }
    else
    {
        scanf("%s", word);
        reverse_input_words(n-1);
        printf("%s\n", word);
        printf("Round %d\n", n);
    }
    printf("Exit round %d\n", n);
}

int count_char(char ch, const char *string)
{
    int ans;
    printf("ch:%c | string[0]:%c | string[1]:%c | string: %s\n", ch, string[0], string[1], string);
    if(string[0] == '\0')
    {
        ans = 0;
    }
    else
    {
        if( ch == string[0])
        {
            ans = 1 + count_char(ch, &string[1]);
        }
        else
        {
            ans = count_char(ch, &string[1]);
        }
    }
    printf("ans: %d\n", ans);
    return ans;
}

/*int multiply(int m, int n){
    int ans;

    printf("Calling: M:%d N:%d ans:%d\n", m, n, ans);
    if(n==1)
        ans = m;
    else
        ans = m + multiply(m, n-1);
    printf("Returning: M:%d N:%d ans:%d\n", m, n, ans);
    return ans;

}*/
/*

int count_char(char ch, const char *string);
void reverse_input_words(int n);
int gcd(int m, int n);

printf("Result of 6 * 3 = %d\n", multiply(6,3));
    printf("The number of %c in %s is %d.\n",'s',"Mississippi sassafras", count_char('s', "Mississippi sassafras"));
    printf("You going to type inn 3 words now!\n");
    reverse_input_words(3);
    printf("\nGreatest common divisor between 15 and 5 is : %d.\n",gdc(15, 5));

int multiply(int m, int n){

	int ans;

	if(n == 1)
		ans = m;
	else{
		ans = m + multiply(m, n-1);
	}

	return ans;
}

int count_char(char ch, const char *string){

	int ans;
    printf("%c == %c | str[1]: %c str: %s, \n", ch, string[0], string[1], string);
	if(string[0] == '\0')
		ans = 0;
	else{
		if(ch == string[0]){
			ans = 1 + count_char(ch, &string[1]);
		} else {
			ans = count_char(ch, &string[1]);
		}
		printf("Count = %d\n", ans);
	}
	return ans;
}

void reverse_input_words(int n){

	char word[50];

	if(n <= 1){
		scanf("%s", word);
		printf("%s\n", word);
	}else{
		scanf("%s", word);
		reverse_input_words(n-1);
		printf("%s\n", word);
	}
}


int gdc(int m, int n){

	int ans;

	if(m % n == 0)
		ans = n;
	else{
		ans = gdc(n, m % n);
	}
	return ans;

}*/
