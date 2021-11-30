﻿

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

#include<iostream>
#include<string>

using namespace std;

int main() {

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    cout << s1.find(s2);


    return 0;
}