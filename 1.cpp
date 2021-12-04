

/*
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll work(ll n, ll m, bool d) {
    if (n == 1) return 1;
    if ((m & 1) == d) return ((m - 1) >> 1) + 1;
    ll tot;
    if (d) tot = ((n - 1) >> 1) + 1;
    else tot = n >> 1;
    m = d ? m >> 1 : (m >> 1) + 1;
    d = d ^ (n & 1);
    return work(n - tot, m, d) + tot;
}
int main()
{
    ll n, m;
    int q;
    while (~scanf("%lld%d", &n, &q))
    {
        while (q--) {
            scanf("%lld", &m);
            printf("%lld\n", work(n, m, 1));
        }
        return 0;
    }
}


*/

//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>  

/*
int a[3000];

void show(int k)
{
    int i = 0;
    printf("位数 %d 位\n", k);
    for (i = k - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
}

int fanc(int n)
{
    int w = 0;
    int i = 0, j = 0;
    int t = n;
    int k = 0;    // 表示数据的位数。  

    i = 0, k = 0;
    while (t)
    {
        a[i++] = t % 10;
        t /= 10;
        k++;
    }

    for (j = n - 1; j > 1; j--)
    {
        w = 0;    // 表示进位  
        for (i = 0; i < k; i++)
        {
            t = a[i] * j + w;
            a[i] = t % 10;
            w = t / 10;
        }

        while (w)
        {
               a[i++] = w % 10;
            w /= 10;
            k++;
        }
    }
    return k;
}


int main()
{
    int n;
    int k = 0;

    scanf("%d", &n);
    k = fanc(n);
    show(k);
    printf("\n");
    return 0;
}

*/
/*

int a[300000];

void show(int k)
{
    int i = 0;
    printf("位数 %d 位\n", k);
    for (i = k - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
}

int fanc(int n)
{
    int w = 0;
    int i = 0, j = 0;
    int t = n;
    int k = 0;    // 表示数据的位数。  

    i = 0, k = 0;
    while (t)
    {
        a[i++] = t % 10;
        t /= 10;
        k++;
    }

    for (j = n - 1; j > 1; j--)
    {
        w = 0;    // 表示进位  
        for (i = 0; i < k; i++)
        {
            t = a[i] * j + w;
            a[i] = t % 10;
            w = t / 10;
        }

        while (w)
        {
            a[i++] = w % 10;
            w /= 10;
            k++;
        }
    }
    return k;
}




void Print_Factorial(const int N) {
    if (N > 20) {
        int n;
        int k = 0;

        n = N;
        k = fanc(n);
        show(k);
        printf("\n");
        return;
    }
    if (N >= 0) {
        long ans = 1; int x = N; int i = 1; long long  zeros = 0;
        while (x--) {
            ans *= i; i = i + 1;
            for (int j = 0; j < 10000; j++)
            {
                if (ans % 10 == 0)
                {
                    ans /= 10; zeros++;
                }
            }


        }
        printf("%lld", ans);
        //ans=0x7fffffffffffffff;
       // printf("%lld",ans);
        for (int i = 0; i < zeros; i++) {
            printf("0");
        }
    }
    else
        printf("Invalid input\n");
}


#include <stdio.h>

void Print_Factorial(const int N);

int main()
{
    int N;

    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

/* 你的代码将被嵌在这里 */
/*

#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

int main() {
    cin.tie();
    int n; scanf("%d", &n);
    int length = 0; 
    int x = n;
    
    if (n ==0 ) {
        cout << "ling"; return 0;
    }
    if (n < 0) {
        printf("fu "); n = -n;
    }
  
    while (x) {
        x /= 10; length++;
    }
    string ss;
    string s;
    x = n;
    while (x)
    {
        n = x % 10;
        switch (n)
        {
        case 0:s = "ling"; break;
        case 1:s = "yi"; break;
        case 2:s = "er"; break;
        case 3:s = "san"; break;
        case 4:s = "si"; break;
        case 5:s = "wu"; break;
        case 6:s = "liu"; break;
        case 7:s = "qi"; break;
        case 8:s = "ba"; break;
        case 9:s = "jiu"; break;
        }
        ss = s + ss;
        x /= 10;
        if (x != 0)ss = " " + ss;
    }
    cout << ss;
    return 0;
}

*/

/*

#include<iostream>
#include<string>
using namespace std;
int main() {

    long long  x, y;
    cin >> x;
    if (x == 0){cout << 'a'; return 0;
}
    string s,ss;
    y = x; int n; int i = 1; int flag = 0;
    while (y) {
        n = y % 10; 
        
        if (n == 0)flag = 1;
        else flag = 0;
        if (!flag) {
            if (i % 4 == 2)ss = 'S' + ss;
            if (i % 4 == 3)ss = 'B' + ss;
            if (i % 4 == 0)ss = 'Q' + ss;
            if (i == 5)ss = 'W' + ss;
            if (i == 9)ss = 'Y' + ss;

         
                s = 'a' + n;
                ss = s + ss;
            
        }
        y /= 10;
        i++;
    }
    cout << ss;
    //cout << 'a';



    return 0;

}


*/

/*
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {

    int N;
    scanf("%d", &N); \
        int X = 0, Y = 0; int flag = 0;
    double yy = 0.0;
    int t1=0, t2=0;
    /// for(int i=0;i<=sqrt(N);i++){
    for (int ii = 1; ii < (int)sqrt(N) + 1; ii++)
    {
        X = ii;
        yy = sqrt(N - X * X);
        Y = (int)yy;
        if (fabs(yy - Y) < 0.001)
        {
            if (X == 0 || Y == 0)
            {
                continue;
            }

            if (t2 == X) 
            { 
                return 0; 
            }
            t1 = X, t2 = Y;
            
            printf("%d %d\n", ii, (int)yy);
            flag = 1;
        }

        // printf("%f\n",yy);   
    }
    //  }

    if (flag == 0)printf("No Solution\n");
    return 0;
}

*/




/*


#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {

    int y, f; int n;
    scanf("%d", &n);
    //int sum; double tsum;
    double yy, ff; 
    int flag = 0;
        for (int i = 0; i < 100; i++)
        {
            
            yy = i; ff = (double)(n + 199 * yy) / 98.0;
           // printf("%f\n",ff);
            if (fmod(ff, 1) < 0.000000000001 || 1 - fmod(ff, 1) < 0.000000000001)
            {
                y = yy; f = ff;
                if (y < f && f < 100) 
                {
                    printf("%d.%d\n", y, f);
                    flag = 1;
                }
            }

        }

     if(flag==0)
        printf("No Solution\n");
    return 0;
}


*/


/*
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int gcd(int x, int y) {
    int t = 0;
    if (x < y) {
        t = x; x = y; y = t;
    }
    if (y)return gcd(y, x % y);
    else return x;
}

int main() {
    int n, m; int g;
    scanf("%d/%d", &n, &m);
    g= gcd(n, m);
    n /= g;
    m /= g;
    printf("%d/%d",n,m);

    return 0;
}

*/

/*

#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int gcd(int x,int y) {
    int t = 0;
    if (x < y) {
        t = x; x = y; y = t;
    }
    //要求 X > Y

    if (y)return gcd(y, x % y);
    else return x;
}


int main() {
    int N; scanf("%d\n", &N);

    if (N == 1)
    {
        int n, m;
        scanf(" %d/%d", &n, &m);
        //if (n < 0)printf("-");
        int g = gcd(n, m);
        n /= g;
        m /= g;

        if (n % m == 0)
        {
            printf("%d", n / m);
        }
        else
        {
            printf("%d/%d", n, m);
        }
    }

    else if (N > 1) {
        int n, m;
        scanf("%d/%d", &n, &m);

        int g = gcd(n, m);
        n /= g;
        m /= g;
       // int N, M;
        for (int i = 1;i<N; i++) {
            int nn, mm;
            scanf("%d/%d", &nn, &mm);
            n = n * mm + m * nn;
            m = m * mm;

          
            g = gcd(n, m);
            n /= g;
            m /= g;
        }

        m = m*N ;
        g = gcd(n, m);
        n /= g;
        m /= g;

        if (n % m == 0)
        {
            printf("%d", n / m);
        }
        else
        {
            printf("%d/%d", n, m);
        }
    }

    return 0;
}

*/



/*

#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<iostream>
#include<string.h>
int main() {
    float a1, b1, a2, b2;
    scanf("%f %f %f %f",&a1, &b1, &a2, &b2);
    char z1, z2, z3[4];
    memset(z3,'/0',4);
    if (b1 >= 0)z1 = '+';
    else z1 = '\0';
    if (b2 >= 0)z2 = '+';
    else z2 = '\0';
    char c[4] = { '+','-','*','/' };
    float  ans[4], ansi[4];
   // memset(ans, 0.0, 4);    memset(ansi, 0.0, 4);
    ans[0] = a1 + a2; ansi[0] = b1 + b2; 
    if (ansi[0] > 0)z3[0] = '+';
    ans[0] = a1 - a2; ansi[1] = b1 - b2;
    if (ansi[1] > 0)z3[1] = '+';
    ans[0] = a1 * a2 - b1 * b2; ansi[2] = b1 * a2 - b2 * a1;
    if (ansi[2] > 0)z3[2] = '+';
    ans[0] = (a1*a2+b1*b2)/(a2*a2+b2*b2); ansi[3] =( b1*a2-a1*b2)/(a2 * a2 + b2 * b2);
    if (ansi[3] > 0)z3[3] = '+';

    printf("(%f%c%fi) %c (%f%c%f)=%.1f%c%.1f\n", a1, z1, b1, c[0], a2, z2, b2, ans[0], z3[0], ansi[0]);
    printf("(%f%c%fi) %c (%f%c%f)=%.1f%c%.1f\n", a1, z1, b1, c[1], a2, z2, b2, ans[1], z3[1], ansi[1]);
    printf("(%f%c%fi) %c (%f%c%f)=%.1f%c%.1f\n", a1, z1, b1, c[2], a2, z2, b2, ans[2], z3[2], ansi[2]);
    printf("(%f%c%fi) %c (%f%c%f)=%.1f%c%.1f\n", a1, z1, b1, c[3], a2, z2, b2, ans[3], z3[3], ansi[3]);
    return 0;
}
/




/*

#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {


    return 0;
}
*/

/*
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n, i, s = 0;
    scanf("%d", &n);
    ///s表示最后一只猴子（猴大王）在每轮（先倒数第1轮，再求倒数第二轮，...）中自己的序号   
    //i表示倒数第i次排序
    for (i = 2; i <= n; i++)
        s = (s + 3) % i;//报数为3即为要删除的猴子 ，取余i是为了映射每一轮猴大王的序号
    printf("%d\n", s + 1);
    return 0;
}


*/


/*
#include<iostream>
#include<string>
using namespace std;

int main() {
    string s; getline(cin, s);
    int n; cin >> n;
    while (n > s.length()) 
    {
        if (n > s.length())
        {
            n = n - s.length();
        }
    }

    string x;
    x = s.substr(n);
    s = s.substr(0,n);
    cout << x+s;
        return 0;
}

*/


/*
#include<iostream>
#include<string>

using namespace std;

int main() {

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int s2len= s2.length();

    for (int i = 0;; i++) {

        int idxF = s1.find(s2);
           if (idxF==s1.npos)break;
        int idxB = idxF + s2len;
        s1 = s1.substr(0, idxF) + s1.substr(idxB);
        
    }

    cout << s1;

    return 0;
}

*/

/*
#include<iostream>
#include<string>
using namespace std;
struct person {
    string name;
    string birthday;
    char sex='0';
    string tell;
    string cell;
}p[(int)0x7fff];

int main() {

    int N; int K; int q[(int)0x7ff];
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> p[i].name >> p[i].birthday >> p[i].sex >> p[i].tell >> p[i].cell;
    }
    cin >> K;
    for (int j = 0; j < K; j++) 
    {
        cin >> q[j];
    }

    for (int j = 0; j < K; j++) {
        int i;
        i = q[j];
        if (i >= N||i<0)
        {
            cout << "Not Found\n";
            continue;
        }
        cout << p[i].name << ' ' << p[i].tell << ' ' << p[i].cell << ' ' << p[i].sex << ' ' << p[i].birthday   <<'\n';
    }
    return 0;
}

*/


/*
#include<iostream>
#include<string>
using namespace std;

int main() {

    string s;
    getline(cin, s);
    if (s == ".") { return 0; }
    int idx = 0;

    while (idx != s.npos)
    {
        idx = s.find(" ");


        int ifThesLastOneIsBlank = 0;
        if (ifThesLastOneIsBlank == 1)
        {
            s.erase(0, 1);
            continue;
        }

        if (s[idx + 1] == ' ')
        {
            ifThesLastOneIsBlank = 1;
            s = s.substr(idx + 1);
            continue;
        }



        ifThesLastOneIsBlank = 0;
        if (idx == s.npos)
        {
            cout << s.length() - 1;
            break;
        }

        cout << idx << ' ';
        s = s.substr(idx + 1);
        // cout<<s;

    }


    return 0;
}
*/



/*
#include<iostream>
#include<string>
using namespace std;

int main() {

    string s; //s = "         1          2";
    getline(cin, s);
    if (s == ".") { return 0; }
    int idx = 0;
    int len = s.length();;

    //剪去头部的空格
    while(s[0]==' '){
       s= s.substr(1);
    }

    //剪去中间的空格
    for(int i=0;i<len;i++)
    {
        if (s[i] == ' ' && s[i + 1] == ' ')
        {
            s = s.substr(0, i) + s.substr(i+1);
            i--;
        }
        len = s.length();
        //cout << "len:" << len <<' ' << s << endl;
    }

    //句点前也可能有一堆空格，因为上面已经去掉了所有连续的空格，只剩一个，所以只用删去句点前的最后一个空格即可
    if(s[s.length() - 2]==' ')
    s = s.substr(0, s.length()-2)+'.';
    //cout << s<<endl;

    //逐个判断长度并输出
    while (idx != s.npos)
    {
        idx = s.find(" ");
        if (idx == s.npos)
        {
            cout << s.length() - 1;
            break;
        }
        cout << idx << ' ';
        s = s.substr(idx + 1);
    }
   // cout << s;
      
    return 0;
}

*/


/*
#include<iostream>
#include<string>
using namespace std;

int main() {
    int a, n; int x;
    //scanf("%d %d",&a,&n);
    cin >> a >> n; x = n;
    int s[100005]; int tem; int d;
    for (int i = 0; i < n; i++)
    {
        tem = a * (x - i);
        while (tem) 
        {
            int j = 0;
            d = tem % 10; 
            s[j] = s[j] + d;
            while (s[j]>=10) 
            {
                int k = 1; int f=0;
                f = s[j] % 10;
                s[j + k] += f;
                s[j] /= 10;
            }
            tem/= 10;
        }
    }
    for (int i = 0; i < 5; i++) {
        cout << s[i]<<'\n';
    }

        return 0;
}
*/   



/*
#include<stdio.h>
#include<iostream>
using namespace std;
int main() {
    int win =0; //R:1 T: 2  Both :0
    int t;
    cin >> t;
    int terms = 0; int left = 0; int distantR = 0; int distantT = 0;
    terms = t / 90;
    left = t - 90 * terms;


    if (left == 0||left==30||left==45||left==60) 
    {
        distantR = distantT = 270 * terms+left*3;
        win = 0;
    }
    if (left > 0 && left < 30)
    {
        win = 1;
        if(left<10) distantR = 270 * terms + left * 9;
        else distantR = 270 * terms;
        distantT = 270 * terms + left * 3;
    }

    if (left > 30 && left <=40)
    {
        win = 2;
        distantR = 270 * terms+90;
        distantT = 270 * terms + left * 3;
    }

    if (left > 40 && left < 45)
    {
        win = 2;
        distantR = 270 * terms +90+ (left-40) * 9;
        distantT = 270 * terms + left * 3;
    }

    if (left > 45 && left <= 50)
    {
        win = 1;
        distantR = 270 * terms +90+ (left-40) * 9;
        distantT = 270 * terms + left * 3;
    }

    if (left > 50 && left < 60)
    {
        win = 1;
        distantR = 270 * terms + 180 ;
        distantT = 270 * terms + left * 3;
    }

    if (left > 60 && left <=80)
    {
        win = 2;
        distantR = 270 * terms + 180;
        distantT = 270 * terms + left * 3;
    }


    if (left > 80 && left < 90)
    {
        win = 2;
        distantR = 270 * terms + 180+(left-80)*9;
        distantT = 270 * terms + left * 3;
    }


    if (win == 0) 
    {
        cout << "-_- "; cout << distantR;
    }
    if (win == 1)
    {
        cout << "^_^ "; cout << distantR;
    }
    if (win == 2)
    {
        cout << "@_@ "; cout << distantT;
    }

    return 0;
}

*/


/*
#include<iostream>
#include<string>
using namespace std;

struct S {
    string str;
}s[500000];
int main() {
    int n = 1;
    //cin >> n;

    for (int i = 0; ; i++) {
        char a = '0'; a = getchar();
        if (a == '\n')break;
        else if (a != ' ')
        {
            cin >> s[i].str;
            s[i].str = a + s[i].str;
            n++;
        }
        else {
            cin >> s[i].str;
            n++;
        }


    }

    for (int i = 0; i < n; i++) {
        for (int j = 0;; j++) {
            if (s[i].str[j] = ' ')s[i].str = s[i].str.substr(j+1);
            else break;
        }
    }

    //cout << s[1].str;
    for (int i = n - 1; i >= 0; i--) {
        cout << s[i].str << ' ';
    }
    
    return 0;
}

*/


/*
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main() {
    int ages[51];
    for (int i = 0; i < 51; i++) {
        ages[i] = 0;
    }
    int N; cin >> N;
    for (int i = 0; i < N; i++)
    {
        int tempn;
        cin >> tempn;
        for (int j = 0; j < 51; j++) 
        {
            if(tempn==j)
            {
                ages[j]++; break;
            }
        }
    }

    for (int i = 0; i < 51; i++) {
        if (ages[i] != 0) {
            cout << i << ':' << ages[i] << '\n';
        }
        else continue;
    }

    //
   // for (int i = 0; i < 51; i++) {
    //    if (i % 10 == 0)cout << '\n';
    //    cout << ages[i];




    return 0;
}
*/



/*
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<string>
using namespace std;
//long  s[200000];
//long  ss[200000];

struct S {
    string s;
   unsigned int n;
}str1[200000];

int main() {
    //memset(s, 0, 200000);
    //memset(ss, 0, 200000);
    S str2[200000];
    string s1; 
    string t;
    int N; cin >> N;
    int countT = 0;

    for (int i = 0; i < 2 * N; i++) 
    {
       // cin >> s[i];
        cin >> t;   
        //int flag = 0;
        for (int j = 0; j < i; j++) 
        {
            if (str2[j].s == t)
            {
                //flag = 1;
                break;
            }
            else {
                str2[countT].s = t;
                countT++;
            }
        }
        str1[i].s = t;
        s1 += t;
    }
   // int s1len = s1.length();

    for (int i = 0; i < countT; i++)
    {
        string q ="1";
        str2->n = count(s1.begin(), s1.end(),q );
    }

    for (int i = 0; i < countT; i++) {

        cout << str2->s<<' ' << str2->n << '\n';
    }
    cout << s1;
    
    return 0;
}

*/

/*
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<string>
using namespace std;
//long long s[200000];

struct d {
    int n =1;
    long  long tell;
   

}s[200000];

bool cmp(d a,d b) {
       return a.tell<b.tell;
}

bool cmp2(d a, d b) {
    if (a.n != b.n)
        return a.n > b.n;
    else return a.tell < b.tell;
}
int main() {
   // memset(s,200000,0);
    int N; cin >> N;
    for (int i = 0; i < 2*N; i++) 
    {
        cin >> s[i].tell;
    }

    sort(s, s + 2 * N,cmp);
  

    
    for (int i = 0; i < 2 * N; i++) {
       // int j = 0;
        if (s[i].tell == s[i + 1].tell)
        {   
            s[i+1].n = s[i].n + 1;
        }
        
    }
    //for (int i = 0; i < 2 * N; i++) {
  //      cout << s[i].tell << ' ' << s[i].n << '\n';
//    }

    sort(s, s + 2 * N, cmp2);

    if(s[0].n!=s[1].n)
    cout <<s[0].tell<<' ' << s[0].n;
    else
    {
        int countRepeat = 0;
        for (int i = 0; i < 2 * N; i++) {
            if (s[i].n == s[0].n)countRepeat++;
            else break;
        }
        cout << s[0].tell << ' ' << s[0].n << ' ' <<countRepeat ;
    }
    return 0;
}

*/




/*
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<string>
using namespace std;

struct studnent {
    string name;            //学生姓名
    int nc = 0;             //该学生选课数量
    int c[20];              //该学生选课清单
}s[40000];

struct course {
    int cid;                //课程编号
    string s[200];         //该课程选课学生名单
    int n = 0;              //该课程选课学生数量
}c[2501];

bool cmp(string a, string b) {
    //字典排序
    if (a[0] != b[0]) {
        return a[0] < b[0];
    }
    else {
        if (a[1] != b[1]) {
            return a[1] < b[1];
        }
        else {
            if (a[2] != b[2]) {
                return a[2] < b[2];
            }
            else {                
                return a[3] < b[3];               
            }
        }

    }
}

int main() {

    //ADD
    //设置课程编号
    for (int i = 0; i < 2500; i++) {
        c[i].cid = i;
    }



    //输入
    cin.tie(NULL);
    int N; cin >> N;
    int K; cin >> K;

    string temps;           //临时学生名
    int tempi;              //临时学生选课课程遍号
    for (int i = 0; i < N; i++)
    {
        cin >> s[i].name >> s[i].nc;
        for (int j = 0; j < s[i].nc; j++)
        {
            cin >> s[i].c[j];
        }
    }

    //
    for (int i = 0; i < N; i++)
    {
        temps = s[i].name;
        for (int j = 0; j < s[i].nc; j++)
        {
            tempi = s[i].c[j];           

            c[tempi].s[c[tempi].n] = temps;//写入学生姓名
            c[tempi].n++;               //课程选课人数增加
        }
    }

    //
    for (int i = 1; i <= K; i++)
   {
        sort(c[i].s,c[i].s+c[i].n, cmp);
    }

    //



    for (int i = 1; i <= K; i++)
    {
        cout << c[i].cid << ' ' << c[i].n << '\n';
        for (int j = 0; j <c[i].n; j++)
        {
            cout << c[i].s[j] << '\n';
        }
    }

    return 0;
}
*/
/*


#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

struct vip {
    string id;
    int distance=0;
};
vector<struct vip>s;
vector<string>quiry;
//vector<int>n;
bool cmp(vip a, vip b) {
    return a.id< b.id;
}

bool cmp1(vip a, vip b) {
    return a.distance >b.distance;
}

int main() {
    int N; int K;
    cin >> N >> K;

    int countC=N;

    for (int i = 0; i < N; i++) 
    {
        vip v;
        cin >> v.id;
        cin >> v.distance; 
        if (v.distance < K) 
        {
            v.distance = K; 
        }
        s.push_back(v); 
    }
    
    int M; cin >> M;
    for (int i = 0; i < M; i++)
    {
        string x; cin >> x;
        quiry.push_back(x);
    }

    for (int i = 0; i < countC; i++) {
       
        if (s[i + 1].id == s[i].id) {
            s[i].distance += s[i+1].distance;
            s.erase(s.begin()+i+1);
            countC--;
        }
    }

    sort(s.begin(), s.begin() + countC, cmp1);

    for (int i = 0; i <M; i++)
    {
        int flag = 0;
        for (int j = 0; j < countC; j++) 
        {
            if (quiry[i] == s[j].id)
            {
                cout << s[j].distance << '\n';
                flag = 1;
                break;
            }
            else flag = 0;
        }
        if (flag == 1)continue;
        else cout << "No Info\n";
    }
    return 0;
}

*/

/*
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

struct st {
    int a; int b; int c; 
    int r1;

}t[224];


int main() {


    return 0;
}

*/

