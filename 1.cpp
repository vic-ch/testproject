
/*
* //6
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    int n;
    while (~scanf("%d", &n))
        printf("%d\n", (n / 2) * 3 + n % 2);

    return 0;

}
*/
/*ss
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <string.h>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
int n;
int ans;
int a[20001], b[20001];
int dp[20001], dpp[20001];
int main()
{

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        dp[a[i]] = max(dp[a[i] - 1] + 1, dp[a[i]]);
        dpp[b[i]] = max(dpp[b[i] - 1] + 1, dpp[b[i]]);
    }
    for (int j = 0; j <= n; j++)
    {
        ans = max(ans, min(dp[j], dpp[j]));
    }
    printf("%d", ans);
    return 0;
} */
/*
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <string.h>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

int i;
int main()
{
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    string str;
    int c1 = 0, c2h = 0, c2w = 0, cnth = 0;
    getline(cin, str);
    rep(i, 1, n)
    {
        getline(cin, str);

        if (str.find("awa") != string::npos)
        {
            c1 += str[0] == 'W';
            ++cnth;
        }
        else if (str, find("qaq") != string "" npos)
        {
            c1 += str[0] == 'H';
        }
        else
        {
            if (str[0] == 'H')
                ++c2h;
            else
                ++c2w;
        }
    }
    if (cnth > m)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << c1 + max(0, cnth + c2h - m) << ' ' << c1 + c2h + min(c2w, m - cnth) << endl;
    }
    return 0;
}*/

/*
* T1
#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{
    string N;
    cin.tie(NULL);
    cin >> N;

    int lengthN = N.length();
    // cout << "lenghtN:" << lengthN << endl;

    int count2 = 0;
    float bei = 1;
    if (N[0] == '-')
    {
        bei *= 1.5;
    }
    if ((N[lengthN - 1] - '0') % 2 == 0)
    {
        bei *= 2;

        // cout << "2----------\n";
    }
    for (int i = 0; i < lengthN; i++)
    {
        if (N[i] == '2')
        {
            count2++;
            // cout << "??????2\n";
        }
    }
    bei *= (float(count2) / float(lengthN - 1));

    // cout << bei;
    // cout << endl;
    bei = bei * 100;
    cout << fixed << setprecision(2) << bei << '%' << endl;

    return 0;
}
*/
/*
* T2
#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(NULL);
    string t;
    cin >> t;
    string hh = t.substr(0, 2);
    string mm = t.substr(3, 4);
    int h = (hh[0] - '0') * 10 + (hh[1] - '0');
    int m = (mm[0] - '0') * 10 + (mm[1] - '0');

   // cout << hh << ":" << mm<<'\n';

    if (h >= 0 && h < 12)
    {
        cout << "Only " << t << ".  Too early to Dang.";
    }
    if (h == 12 && m == 0)
    {
        cout << "Only " << t << ".  Too early to Dang.";
    }

    else
    {
        if (m == 0)
        {
            for (int i = 0; i < h-12; i++)
            {
                cout << "Dang";
            }
        }
        else
        {
            for (int i = 0; i < h + 1-12; i++)
            {
                cout << "Dang";
            }
        }
    }
    return 0;
  //  cout<<"Only 07:05.  Too early to Dang."
}*/

/*T3

#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;

int aM, bM;
int N;
int aS, aD, bS, bD;
int adrink=0, bdrink=0;
int main()
{
    cin.tie(NULL);
    cin >> aM >> bM >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> aS >> aD >> bS >> bD;
        if (aS == bD && aD == bS)
        {
            continue;
        }
        if (aS != bD && aD != bS)
        {
            continue;
        }
        if (aS == bD && aD != bS)
        {
            bdrink++;
        }
        if (aS != bD && aD == bS)
        {
            adrink++;
        }
        while (adrink+bdrink!=0) {
            if (adrink == aM)
            {
                cout << "A\n";
                cout << bdrink;
                break;
            }
            if (bdrink == bM)
            {
                cout << "B\n";
                cout << adrink;
                break;
            }
        }
    }
    return 0;
}

*/

/*
T4

#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;

int N;
int k;
int a[110][1010];
int main()
{
    cin.tie(NULL);
    cin >> N;
    for (int j = 0; j < N; j++)
    {
        cin >> k;
        a[j][0] = k;
        for (int i = 1; i <= k; i++)
        {
            string t;
            cin >> t;
            a[j][i] = (t[0] - '0') * 10000 + (t[1] - '0') * 1000 + (t[2] - '0') * 100 + (t[3] - '0') * 10 + (t[4] - '0');
        }
    }
    int M;
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        int s;
        string tt;
        cin >> tt;
        s = (tt[0] - '0') * 10000 + (tt[1] - '0') * 1000 + (tt[2] - '0') * 100 + (tt[3] - '0') * 10 + (tt[4] - '0');

        for (int j = 0; i < M; j++)
        {
            if (a[j][0] == 0)
            {
                if (s == a[j][0])
                {
                    cout << tt;
                }
            }
            for (int q = 0; q < N; q++)
            {
                for (int w = 0; w < k; w + w)
                {
                }
            }
        }
    }

    return 0;
}

*/

/*
#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;
int main()
{
    int N = 0;
    cin >> N;
    int odd = 0, even = 0;
    for (int i = 0; i < N; i++)
    {
        int t;
        cin >> t;
        if (t % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << odd << ' ' << even;

    return 0;
}*/

/*T8*/ /*
 #include <iostream>
 #include <cstdio>
 #include <string>
 #include <string.h>
 #include <cstring>
 #include <cmath>
 #include <iomanip>
 #include <algorithm>

 using namespace std;
 int main()
 {
     int D;
     cin >> D;
     if (D < 6)
     {
         cout << D + 2;
     }
     else
     {
         cout << D + 2 - 7;
     }
     return 0;
 }*/

/*T7*/ /*
 #define _CRT_SECURE_NO_WARNINGS
 #include <iostream>
 #include <cstdio>
 #include <string>
 #include <string.h>
 #include <cstring>
 #include <cmath>
 #include <iomanip>
 #include <algorithm>

 using namespace std;

 // char a[10010];
 int G, P, L, T;
 string A;
 int main()
 {
     cin >> A;

     for (int i = 0; i < A.length(); i++)
     {
         char a = A[i];

         if (a == 'G' || a == 'g')
         {
             G++;
         }
         if (a == 'P' || a == 'p')
         {
             P++;
         }
         if (a == 'L' || a == 'l')
         {
             L++;
         }
         if (a == 'T' || a == 't')
         {
             T++;
         }
     }
     for (int i = 0;; i++)
     {
         while (G + P + L + T != 0)
         {
             if (G != 0)
             {
                 cout << 'G';
                 G--;
             }
             if (P != 0)
             {
                 cout << 'P';
                 P--;
             }
             if (L != 0)
             {
                 cout << 'L';
                 L--;
             }
             if (T != 0)
             {
                 cout << 'T';
                 T--;
             }
         }
         break;
     }
     return 0;
 }
 */

/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include<vector>
using namespace std;
int N;int  a[10010][50];
struct st{ int Get,idx, t;
bool operator>(const st s) {
  if(this->Get!=s.Get) return this->Get > s.Get;
  if(this->t != s.t)return this->t > s.t;
  if(this->t==s.t)  return this->idx < s.idx;
}
}g[10010];

int main()
{
    cin.tie(NULL);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i][0];
        for (int j = 1; j <= 2 * a[i][0]; j++)
        {
            cin >> a[i][j];
            g[i].idx = i;
            if (j % 2 == 0)
            {
               g[i].Get -= a[i][j];
               g[a[i][j - 1]-1].Get += a[i][j];
               g[a[i][j - 1] - 1].t = g[a[i][j - 1] - 1] .t+ 1;
            }
        }
    }

    sort(g, g + N, [](st x,st y) {
        return x > y;
    });

    for (int i = 0; i < N; i++)
    {
        cout <<g[i].idx+1<<' '<< fixed << setprecision(2) << double(g[i].Get) / 100 << '\n';
    }
    return 0;
}

*/
/*

#include <iostream>
#include <cstring>
#include <cstdio>
#include <string>
using namespace std;
string s1 = "No problem\n";
string s2 = "OK\n";
string s3 = "OK but...\n";
string s4 = "No way\n";


int N, M, K;
struct R
{
    int p1;
    int p2;
    int re;
} r[1000];
int q[1000];
int w[1000];

struct P
{
    int ok[100];
    int no[100];
} p[1000];

using namespace std;
int main()
{
    cin.tie(NULL);
    cin >> N >> M >> K;
    for (int i = 0; i < M; i++)
    {
        cin >> r[i].p1 >> r[i].p2 >> r[i].re;
    }
    for (int i = 0; i < K; i++)
    {
        cin >> q[i] >> w[i];
    }

    for (int j = 0; j < K; j++)
    {
        for (int i = 0; i < M; i++)
        {

            if ((r[i].p1 == q[j] && r[i].p2 == w[j]) || (r[i].p2 == q[j] && r[i].p1 == w[j]))
            {
                if (r[i].re == -1)
                {
                    cout << s4;
                }
                if (r[i].re == 1)
                {
                    cout << s1;
                }
            }
           */
/*
else
{for(int k=0;k<M;k++){
    if(re.p1==q[j]||re.p2=q[j]||re.p1==w[j]||re.p2==w[j]){

    }
}

}
*/

/*
}
}
return 0;
}

*/


/*
#define _CRT_SECURE_NO_WARNINGS
//#include <cstdio>
#include<stdio.h>

int sum(int m, int n)
{
    int s = 0;
    while (m <= n)
    {
        s += m;
        m += 1;
    }
    return s;
}
int main()
{
    int m, n;

    scanf("%d %d", &m, &n);

    printf("sum = %d", sum(m, n));
    return 0;
}

*/


/*


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>

void isprime() {

}

int main() {

    return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>

int main() {
    int m; char x;
    std::cin >> m >> x;
    if (m == 0)return 0;
    int row = 0, max_use = 0;
    for (int i = 0;; i++) {
        max_use = 2 * i * i - 1;
        if (max_use > m) {
            max_use = 2 * (i - 1) * (i - 1) - 1;
            row = i-1; 
         //   std::cout << max_use << " " << row<<" "<<m-max_use << " " << std::endl;
            break;
        }
    }
    for (int i = 0;row-i!=0; i++) {
        std::string a = "";
        for (int j = 0;j<i; j++) {
            a += " ";
        }
        for (int j = 0;j<2*(row-i)-1; j++) {
            a += "*";
        }
        std::cout << a<<'\n';  
    }

    for (int i = 1; row - i != 0; i++) {
        std::string a = "";
        for (int j = 1; 
            j < row-i; j++) {
            a += " ";
        }
        for (int j = 0; j < 2 *i+1; j++) {
            a += "*";
        }
        std::cout << a << '\n';
    }
    std::cout << m - max_use;
    return 0;

}


*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<iostream>>
int main()
{
    int i = 0, j = 0, k = 0;
    int num = 0, hangshu = 0, shengyu = 0;
    char ch = 0;
    scanf("%d %c", &num, &ch);
    int temp = (num + 1) / 2;
    hangshu = (int)sqrt(temp);//计算上半部分行数
    for (i = 0; i < hangshu; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (k = 0; k < 2 * (hangshu - i) - 1; k++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
    for (i = 1; i < hangshu; i++)
    {
        for (j = hangshu - i - 1; j > 0; j--)
        {
            printf(" ");
        }
        for (k = 0; k < 2 * (i + 1) - 1; k++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
    shengyu = num - (2 * hangshu * hangshu - 1);
    printf("%d", shengyu);
    int zz=0;std::cin>>zz;
    return 0;
}
