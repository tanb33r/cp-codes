__builtin_popcount
__builtin_clz
__builtin_ctz

#define isOn(S, j) (S & (1 << j))
#define setBit(S, j) (S |= (1 << j))
#define clearBit(S, j) (S &= ~(1 << j))
#define toggleBit(S, j) (S ^= (1 << j))
#define lowBit(S) (S & (-S))
#define setAll(S, n) (S = (1 << n) - 1)
#define isRanged(i,n) if(i<0||i>=n)return false else return true;
#define isRanged2(i,j,n1,n2) if(i<0||i>=n1||j<0||j>=n2)return false; else return true;

#define decimalToBinary(n) vector<int>vales; while(n>0){vales.push_back(n%2); n/=2 ; } print(vales);
#define modulo(S, N) ((S) & (N - 1))   // returns S % N, where N is a power of 2
#define isPowerOfTwo(S) (!(S & (S - 1)))
#define nearestPowerOfTwo(S) ((int)pow(2.0, (int)((log((double)S) / log(2.0)) + 0.5)))
#define turnOffLastBit(S) ((S) & (S - 1))
#define turnOnLastZero(S) ((S) | (S + 1))
#define turnOffLastConsecutiveBits(S) ((S) & (S + 1))
#define turnOnLastConsecutiveZeroes(S) ((S) | (S - 1))




n&=-n;   //sets  001110 to 000010   lowest 1 bit only
n&=(n-1);   //sets  001110 to 001100   flips lowest 1 bit

