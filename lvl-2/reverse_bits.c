unsigned char    rev_bits(unsigned char octet)
{
		int ans = 0;
		int pOfTwo = 1;
        int p = 128;
        while(p > 0)// count starts from 1
        {
                if(octet >= p)
                {
						ans = ans + pOfTwo;
                        octet = octet - p;
                }
				pOfTwo = pOfTwo * 2;
                p = p / 2;
        }
		return (ans);
}

int main()
{
        unsigned char octet = 146;
		printf("%d\n", rev_bits(octet));
}
