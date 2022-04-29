# 2021c2
資傳一甲程式設計二（2022春）

授課教師：銘傳大學葉正聖

教學的範圍是精簡後的C/C++部分，希望用簡單的內容、逐序漸進的教學，讓大家喜歡寫程式，並建立程式設計的基礎。利用螺旋式的教法（Spirial Teaching Method）慢慢增加工具，每週上課3小時，利用5-6個小的課堂作業，逐步建立輔助學習的鷹架，每次增加3-5行程式方便理解。配合瘋狂程設的練習，讓大家能自己在練習中熟悉程式設計。

上學期（程式設計一）先教C語言的簡單程式設計的內容，語法包含int main()主函式、Standard Input/Output標準輸入輸出、變數、運算、if(判斷)、for(迴圈)、陣列、函式、字串。下學期（程式設計二）將教剩下的語法，包含結構、指標、檔案等。除了C/C++共通的部分，下學期還會多一點C++的部分，包含cin/cout，Standard Template Library等。

使用的工具有：CodeBlocks 17.12 MinGW，瘋狂程設，GitHub

上課錄影在 facebook.com/groups/2021cce
# Week01

step01-1_介紹今天的目標,是最多2的一天。慢慢來,第一步先複習寫程式, 用 scanf() 讀入整數, 用 printf()印出來 (複習怎麼寫程式), 截圖上傳

step01-2_熟悉寫程式的樣子後,我們再來熟悉字元、字串。char c 使用 %c能讀到1個字母, char line[1000]很長, scanf() 配合 %s 可讀到一個比較長的字串


step02-1_接下來要複習 if判斷與for迴圈。if判斷裡,想看看 line[i] 第i個字母 是不是 '2', 如果 line[i]==字母'2'的話, 就印出來。接下來要想想, for迴圈要怎麼寫... 到底迴圈要跑幾個字呢 (我們如果把 char line[1000] 宣告在外面,會幫我們初始為0, 便可以先試試 for迴圈跑1000次)

step02-2_有了前面的程式,已可利用 for迴圈及if判斷,找到字串裡的'2'。接下來,我們把程式在瘋狂程設「圓山碼場」資傳一甲第01週「最多2的一天」 試試看, 能不能把第1個字串的2都找出來。小心, 顏色不對時,一定有問題 -- 原來是 Compiler編譯器要從Python改成CCPP的 CodeBlocks。迴圈前面 ans=0, 迴圈中間 ans++, 迴圈後面 ans印出來, 開心

step02-3_只印1行是不夠的。班代說要多做幾次, 所以利用 for迴圈跑4次,可以讀入4行。可是, 印出來的答案不對, 原來是陣列裡面, 有之前殘留下來的2, 導致for迴圈在讀1000格時, 多讀到了。我們要複習上學期末教的 strlen()字串長度, 再修改裡面的for迴圈就好了

step03-1_快要完成今天的主題了。最後,我們需要把全部的答案都加起來。使用到前面 step02-2 教的 迴圈前面...迴圈中間...迴圈後面, 把 total 加好印出來。本來以為就這樣,沒想到 for迴圈只能固定讀4行, 所以我們要改用 while迴圈。這個特別的 while迴圈, 裡面竟然是 scanf()==1 這種寫法, 成功讀到一行就做。完成。

step03-2_最後教你把今天的程式上傳 GitHub。首先Chome要登入GitHub, 初學者要註冊),  New新增這學期的程式倉庫 2021c2, 接下來要用 Git了。安裝 Git for Windows, 啟動 Git Bash 小黑,接下來指令照著moodle裡步驟做即可 


# Week02

step01-0_考前複習、考後講解

step01-1_上週有個加分題,是英文的題目。我們先不讀懂它,只看簡單的Sample Input 及 Sample Output 試著讀懂它,並利用今天考試時用到的while()迴圈配合scanf()來讀資料、印出來,完成好像8成的結果

step01-2_有些人可能有英文閱讀障礙,可能很難懂。老師講英文閱讀障礙相關的故事。

step02-1_我們介紹Palindrome迴文,回憶去年2021年12月02日有教過迴文,並且用字串的strlen()函式來實作過,注意line[i] vs. line[N-1-i] 的這個比較。最後我們再發明 palindrome()函式,來解決問題

step02-2_有些有閱讀障礙的小朋友,會把字左右倒過來,也就是今天的主題「鏡向字」。可以利用CodeBlocks嘗試用最原始的方法,利用一堆if來判斷,看它對應的鏡像字是什麼。

step03-1_剛剛的鏡像字,利用一大堆if()判斷,有點煩。能不能用 for()迴圈來簡化呢...我們利用字元陣列(字串)配合字串的迴圈,模仿剛剛的程式,只是把直的改成橫的,發現也可以哦。程式碼就從50行,利用for()變成5行囉。

step03-2_今天的大目標,是把 UVA 410 Palindrome 迴圈+鏡像 搞定。我們的作法,是結合前面 week02-2 及 week02-4 兩個程式, 讓它可以偵測迴圈、偵測鏡像。


# Week03
6張圖: 16.66 => 100, 83, 67, 50, 33, 17

1. CodeBlocks 的截圖, 需要讓老師看到較完整的執行畫面, 老師才能快速判斷實作是否正確。這個部分你可以完成後, 再來找老師補交。
2. 瘋狂程設的截圖,需要讓老師看到較完整的執行畫面, 老師才能判斷實作是否正確。這個部分你可以完成後, 再來找老師補交。

3. 少了最後一張圖(上傳到GitHub的截圖)。如果上傳GitHub有問題,可以來問老師。

你少了2張瘋狂程設的截圖


step01-0_今天考試是「鏡像迴文字」的簡化版「鏡像字」,,老師在考試前複習、考試後講解容易出錯的地方.zip


03課堂作業

1. step01-1_今天上課的主軸是指標,所以老師用上週教過的「鏡像迴文字」做例子講解,今天的這個作業,是上週的課堂作業1+課堂作業2,你應該都熟悉了。請用瘋狂程設-(左上角)CPE顆星廣場-一顆星-最上面的 Palindrome 那題, 用練習模式, 截圖上傳。

2. step02-1_剛剛的簡單迴文程式,我們使用 C Tutor 來分析一下, 到底 line[i] != line[N-1-i] 是在比較哪幾個。不過C Tutor 不能一次太多人同時使用,請自己在不同時間試即可。請把 C Tutor 的圖, 跑成功後, 看看線怎麼動的。截圖上傳。

step02-1b_老師再講解清楚,到底 C Tutor 裡面指標的箭頭,是指到哪裡。使用&符號, 讓 p1=&line[i] 及 p2 = &line[N-1-i] 方便我們分析。再比對課本第4章關於pointer指標的圖,方便大家理解它的意思。

3. step02-2_上週在教「鏡像迴文」時,老師分了5個步驟教清楚。但是有同學應該還是忘了, 所以現在, 老師再用一次課堂作業, 讓大家做出完整版的鏡向迴文Palindrome 及 Mirror。

4. step03-1_今天的第2個主題,是Tell me the frequencies, 其實是整合上週的字串+上上週的許多2的一天, 只是我們要累計的不只是'2'還有其他全部的字母。首先我們先試著讀入資料, 使用「火車掛勾」的想法,第一個火車頭不用掛勾,後面的車廂都有掛勾,完成簡單的輸入資料

5. 請把今天的程式, 上傳到 GitHub, 再截圖上傳moodle

6. 老師只示範, 同學不上傳, 下週再試的程式

step03-2_介紹 while( gets(line) ) 這種寫法,可以一次讀入一整行, 不怕空格哦(scanf()怕空格)
step03_3_最後老師把 Tell me the frequencies 解得差不多了, 只差最後印出來的順序。

# Week04

## step01-0
0. step01-0_考前複習、考後講解,解釋Tell me the frequencies簡化版(只解決Input及Output)這題常見錯誤,並建立今天上課的基礎

```C++
///Week04-0.cpp step01-0 今天考試題目
///簡化版,只解決 Input/Output
#include <stdio.h>
char line[2000];
int main()
{
	int t=1;
	while( gets(line) ){
		if(t>1) printf("\n");
		printf("Test Case %d\n", t);

		t++;
	}
	return 0;
}
```

## step01-1
1. step01-1_今天的主題-Tell me the frequencies,老師介紹如何快速看英文題目、抓重點,並認識Ascending這個字從小到大,像字母A一樣。程式碼中利用字串的for迴圈,逐字母分析統計ans[c]++, 之後再用for迴圈把 ans[c] 答案照ASCII從大到小印出來,還沒有寫完。這個程式是從今天考試出發, 再加2段來完成。請在瘋狂程設-資傳一甲-進階CPE練習,試試這題, 截圖上傳
```C++
///Week04-1.cpp step01-1
///複習上週教的, 利用字串迴圈來統計字母出現次數 ans[c]++
///後面再把字母ASCII大到小, 把答案印出來
#include <stdio.h>
char line[2000];
int main()
{
	int t=1;
	while( gets(line) ){
		if(t>1) printf("\n");

		int ans[256]={};
		for(int i=0; line[i]!=0; i++){
			char c = line[i];
			ans[c]++;
		}
        for(int c=128; c>=32; c--){
            if(ans[c]==f) printf("%d %d\n", c, ans[c]);
        }
		t++;
	}
	return 0;
}
```

## step02-1

2. step02-1_剛剛利用字串迴圈,統計字母出現次數, 花了很多時間理解了。剛剛將字母從大到小印, 花時間理解了。現在我們加了一行,把頻率從小到大跑, 再看 if(ans[c]==f) 時印,這題完成。請在瘋狂程設-資傳一甲-進階CPE練習, 練習模式, 截圖上傳
```C++
///Week04-2.cpp step02-1
#include <stdio.h>
char line[2000];
int main()
{
	int t=1;
	while( gets(line) ){
		if(t>1) printf("\n");

		int ans[256]={};
		for(int i=0; line[i]!=0; i++){
			char c = line[i];
			ans[c]++;
		}
		for(int f=1; f<=1000; f++){
			for(int c=128; c>=32; c--){
				if(ans[c]==f) printf("%d %d\n", c, ans[c]);
			}
		}
		t++;
	}
	return 0;
}
```
## step03-1

3. step03-1_接下來我們花了很多時間討論,讓大家了解程式的意義,尤其是在花費的時間、效率問題。迴圈從1-1000慢, 迴圈1-max會快。所以改用最大值max,讓頻率從1到max依序印出來。請在瘋狂程設-資傳一甲-進階CPE練習, 練習模式, 截圖上傳

```C++
///Week04-3.cpp step03-1
///改用max
#include <stdio.h>
char line[2000];
int main()
{
	int t=1;
	while( gets(line) ){
		if(t>1) printf("\n");

		int max=0;
		int ans[256]={};
		for(int i=0; line[i]!=0; i++){
			char c = line[i];
			ans[c]++;
			if(ans[c]>max) max=ans[c];
		}
		for(int f=1; f<=max; f++){
			for(int c=128; c>=32; c--){
				if(ans[c]==f) printf("%d %d\n", c, ans[c]);
			}
		}
		t++;
	}
	return 0;
}
```
# Week05

# step01-1
今天的主題是排序, 老師先複習大一上教過的「選擇排序法selection sort」口訣就「左手i,右手j, 大小不對就交換」

```C++
///Week05-1.cpp step01-1 sort
///左手i,右手j
#include <stdio.h>
int a[10]={9,8,7, 1,2,3, 6,5,4, 0};
int main()
{
    for(int i=0; i<10; i++){///左手i
        for(int j=i+1; j<10; j++){///右手j
            if( a[i] > a[j] ){ ///大小不對,交換
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(int i=0; i<10; i++) printf("%d ", a[i] );
}
```


## step02-1
接下來複習「泡泡排序法BubbleSort」口訣就是「每次巡一輪,a[i] a[i+1]大小不對就交換。多巡幾輪」

```C++
///Week05-2.cpp step02-1 複習「泡泡排序法BubbleSort」
///口訣就是「每次巡一輪,a[i] a[i+1]大小不對就交換。多巡幾輪」
#include <stdio.h>
int a[10]={9,8,7, 1,2,3, 6,5,4, 0};
int main()
{
    for(int k=0; k<10-1; k++){
        for(int i=0; i<10-1; i++){
            if( a[i] > a[i+1] ){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        for(int i=0; i<10; i++) printf("%d ", a[i] );
        printf("\n");
    }
}
```

## step02-2
今天的主題是「快速排序法Quick Sort」速度會比我們大一上教的泡泡排序法、選擇排序法 快個幾萬倍、幾億倍(看數字有多少要排)。程式碼有3行比較難理解,分別是 自訂comp()函式時,裡面的參數有指標及const void有人看不懂。裡面有個指標轉型有點難, 使用時 qsort(a,100,sizeof(int),comp)就相對簡單多了

```C++
///Week05-3.cpp step02-2 更快一點
#include <stdio.h>
#include <stdlib.h> ///qsort()
int comp( const void *p1, const void *p2 ) ///比較用的函式 comp()
{
    int a = *(int*)p1,  b = *(int*)p2;
    if( a>b ) return +1; ///三種狀況
    if( a<b ) return -1; ///口訣: 減法 a-b
    if( a==b )return 0;
}
int main()
{
    int a[100];///內附亂碼
    for(int i=0; i<100; i++) printf("%d ", a[i] );
    printf("\n");///先看看內容很亂哦

    qsort( a, 100, sizeof(int), comp );

    for(int i=0; i<100; i++) printf("%d ", a[i] );
    printf("\n");///排完之後, 檢查一下
    return 0;
}

/*
Q:如果有 10萬個數字要手中, 10萬*10萬=100億
    for(int k=0; k<100000-1; k++){///10萬
        for(int i=0; i<100000-1; i++){///10萬
*/
```

# step03-0
複習、介紹Git指令,從雲端clone下來, add的修改, commit 確認, push 推上雲端

0. 安裝 Git for Windows, 同時 Chrome 登入 github 
1. 開啟 Git Bash
2. `cd desktop` 進入桌面 \
    `git clone https://github.com/jsyeh/2021c2` 把雲端複製下來 \
    cd 2021c2 進入你的目錄
3. 把你的 桌面\2021c2 裡面, 放好你本週的程式 ex. week05 裡面有今天的程式
4. 先把你放好的程式,加入 git 的帳冊 \
`git status` (看到紅紅的檔案) \
`git add .` \
`git status (看到綠綠的檔案) \
5. 你要 commit 它 \
`git config --global user.email jsyeh@mail.mcu.edu.tw` \
`git config --global user.name jsyeh` \
`git commit -m "add week05" ` \
6. git push 推送上雲端

## step03-1
今天的主題是要解 Hardwood species 將樹的物種名字做排序統計,其中我們先把資料讀進來。

```C++
///Week05-4.cpp step03-1
///step03-1_今天的主題是要解 Hardwood species 將樹的物種名字做排序統計,其中我們先把資料讀進來。
#include <stdio.h>
char line[1000];
int main()
{
	int T;
	scanf("%d\n\n", &T); ///順便處理掉2個跳行

	///t:1 火車頭 t:2 +車廂 t:3 +車廂 ....
	for(int t=1; t<=T; t++){ ///t是第幾筆資料
		if(t>1) printf("\n");

		printf("現在讀到第%d大坨的資料\n", t);
		while( gets(line) ){
			if( line[0]==0 ) break; ///讀到空白行,表示是下一筆測資訊資
            ///第1個字母,剛好是字串的結尾, 就是空白行
		}
	}
}
```


## step03-2
老師講解、你還不用寫,下週再寫。老師把 qsort() 結合字串排序,嘗試解決 Hardwood species這題

```C++
///Week05-5.cpp step03-2_今天的主題  Hardwood species
///將樹的物種名字做排序統計
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char tree[1000000][40];//100萬顆樹,名字30字母,開40用
int comp( const void *p1, const void *p2 ){
	char * tree1 = (char*) p1;
	char * tree2 = (char*) p2;
	return strcmp(tree1, tree2);
}
int main()
{
	int T;
	scanf("%d\n\n", &T); ///順便處理掉2個跳行

	///t:1 火車頭 t:2 +車廂 t:3 +車廂 ....
	for(int t=1; t<=T; t++){ ///t是第幾筆資料
		if(t>1) printf("\n");

		int N=0;//幾顆樹
		while( gets( tree[N] ) ){
			if( tree[N][0]==0 ) break; ///讀到空白行,表示是下一筆測資
			N++;
		}

		qsort( tree, N, 40, comp );

		for(int i=0; i<N; i++){
			printf("%s \n", tree[i] );
		}
	}
}
```

# Week06
本週遇到清明連假，放假一次

# Week07

## step01-0
今天考試是Hardwood Species簡化版 只解決 Input 及 Output 的問題。老師在考前複習、考後講解有一位同學出錯的地方

```c++
#include <stdio.h>
char line[200];
int main()
{
	int T;
	scanf("%d\n\n", &T);
	for(int t=1; t<=T; t++){
		int N=0;
		while( gets(line) ){
			if( line[0]==0 ) break;
			N++;
		}
	
		if(t>1) printf("\n");
		printf("Test Case %d: %d lines\n", t, N);
	}
	return 0;
}
```

## step01-1
今天的主題是 字串排序, 我們先把 Input 及 output 搞定


```c++
///Week07-1.cpp  step01-1 先解決字串排序的 Input/Output
#include <stdio.h>
char line[1000][20];//要有字串陣列 字串(字元陣列 20字母)
//       1000行 20字母  左手i 右手j
int main()
{
	int N;
	scanf("%d\n", &N);

	for(int i=0; i<N; i++){ //Input
		gets( line[i] );
	}


	for(int i=0; i<N; i++){ //Output
		printf("%s\n", line[i] );
	}

}

```


## step01-2
最後我們把字串排序的程式寫完了, 前面解決完 Input Output後, 我們使用 qsort( line, N, 20, compare ) 好像很簡單, 其實需要寫 int compare()函式, 裡面的 const void 指標 有點難懂, 今天教完, 希望大家下週考試會熟悉。還有字串比較的 strcmp()也要熟悉


```c++
///Week07-2.cpp  step01-2 qsort()
///最後我們把字串排序的程式寫完了,
///前面解決完 Input Output後,
///我們使用 qsort( line, N, 20, compare ) 好像很簡單,
///其實需要寫 int compare()函式, 裡面的 const void 指標 有點難懂,
///今天教完, 希望大家下週考試會熟悉。
///還有字串比較的 strcmp()也要熟悉
#include <stdio.h>
#include <stdlib.h> // qsort()
#include <string.h> // strcmp()
char line[1000][20];
int compare( const void *p1, const void *p2 )
{      //保護不能動    指標    //型別沒指定
	char * s1 = (char*) p1;
	char * s2 = (char*) p2;
	return strcmp( s1, s2 );
}
int main()
{
	int N;
	scanf("%d\n", &N);

	for(int i=0; i<N; i++){ //Input
		gets( line[i] );
	}

	qsort( line, N, 20, compare  );

	for(int i=0; i<N; i++){ //Output
		printf("%s\n", line[i] );
	}

}
```


## step02-1
老師在第2節課問同學剛剛「字串排序」程式碼裡面的意思,不過許多同學可能剛接觸、不熟, 所以老師又重新講解並示範了另外一種寫法

```c++
///Week07-3.cpp step02-1 重寫 字串排序
///老師在第2節課問同學剛剛「字串排序」程式碼裡面的意思,不過許多同學可能剛接觸、不熟,
///所以老師又重新講解並示範了另外一種寫法
#include <stdio.h>
#include <stdlib.h> // qsort()
#include <string.h> // strcmp()
char line[1000][20];
int compare( const void *p1, const void *p2 )
{
	return strcmp( (char*)p1, (char*)p2 );
}

int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s", line[i] );
	}

	qsort( line, N, 20, compare );

	for(int i=0; i<N; i++){
		printf("%s\n", line[i] );
	}
}
```


## step02-2
我們播放莫札特的歌劇中的一幕, 男生唱出一堆清單的統計, 到底主人喜歡哪些女生。本題就是想要把整個清單,依據國家來統計。第一步先把Input 及 Output 搞定, 因為有很多空格, 所以需要 gets()讀進一整行, 讀到 line[i] 裡面

```c++
///Week07-4.cpp step02-2 Input
///我們播放莫札特的歌劇中的一幕, 男生唱出一堆清單的統計, 到底主人喜歡哪些女生。
///本題就是想要把整個清單,依據國家來統計。第一步先把Input 及 Output 搞定,
///因為有很多空格, 所以需要 gets()讀進一整行, 讀到 line[i] 裡面
#include <stdio.h>
char line[2000][80];
 //      2000行 80字母
int main()
{
	int N;
	scanf("%d\n", &N);

	for(int i=0; i<N; i++){
		gets(  line[i]  );
	}

	for(int i=0; i<N; i++){
		printf("%s\n", line[i] );
	}

}
```

## step03-1
在 Input 的時候,改成 scanf()讀進國家名, 空格後的 全部資料, 利用gets()清空

```c++
//Week07-5.cpp step03-1 Input 國家名 名字 字 字 字 字

#include <stdio.h>
char line[2000][80];
 //      2000行 80字母
int main()
{
	int N;
	scanf("%d\n", &N);
	
	for(int i=0; i<N; i++){
	//scanf() vs. gets()
		scanf("%s", line[i] );
		char others[80];
		gets(  others  );
	}
	
	for(int i=0; i<N; i++){
		printf("%s\n", line[i] );
	}
}
```


## step03-2
利用 qsort()完成國家名的排序。
要小心, int compare()裡面的 return 忘了寫,需要修正。

```c++
//Week07-6.cpp step03-2 qsort()

#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()
char line[2000][80];
int compare( const void *p1, const void *p2 )
{
	return strcmp( (char*)p1, (char*)p2 );
}
int main()
{
	int N;
	scanf("%d\n", &N);

	for(int i=0; i<N; i++){
		scanf("%s", line[i] );
		char others[80];
		gets(  others  );
	}

	qsort( line, N, 80, compare );

	for(int i=0; i<N; i++){
		printf("%s\n", line[i] );
	}
}
```

## step03-3
最後我們統計出各個國家出現的次數, 利用的方法,是有迴圈,把上下2筆資料 strcmp(line[i],line[i+1])==0看是否相同, 相同就combo++,不相同就可以印出 line[i] 那個國家對應的 combo數量。裡面有2個地方比較特別,分別是迴圈跑到什麼時候結束,及對應的 line[N]的「哨兵sentinal」在超過的地方標註成空字串

```c++
///Week07-7.cpp step03-3 最後統計
///最後我們統計出各個國家出現的次數,
///利用迴圈,把上下2筆資料 strcmp(line[i],line[i+1])==0看是否相同
///相同就combo++,不相同就可以印出 line[i] 那個國家對應的 combo數量。
///裡面有2個地方比較特別,分別是迴圈跑到什麼時候結束,
///及對應的 line[N]的「哨兵sentinal」在超過的地方標註成空字串
#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()
char line[2001][80];
int compare( const void *p1, const void *p2 )
{
	return strcmp( (char*)p1, (char*)p2 );
}
int main()
{
	int N;
	scanf("%d\n", &N);

	for(int i=0; i<N; i++){
		scanf("%s", line[i] );
		char others[80];
		gets(  others  );
	}

	qsort( line, N, 80, compare );

	line[N][0]=0;//空字串
	int combo=1;
	for(int i=0; i<N; i++){
		if( strcmp(line[i],line[i+1])==0 ){//上下2行
			combo++;//相同
		}else{//不相同:印答案
			printf("%s %d\n", line[i], combo );
			combo=1;
		}
	}
}
```


# Wee08
## step01-0
上課考試前,老師帶大家複習今天題目「字串排序」,希望大家的思緒能一步步慢慢來,不要直接背程式碼。常見的錯誤,像是int compare()忘了return,或語法不熟悉等

```c++
///Week08-0.cpp step01-0 字串排序
#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()

char line[100][80]; //最多100行,每行80字母

int compare( const void *p1, const void *p2 )
{
	     //strcmp( 字串1    , 字串2     );
	return strcmp( (char*)p1, (char*)p2 );
}
int main()
{
	int N;
	scanf("%d", &N);

	for(int i=0; i<N; i++){
		scanf("%s", line[i] );
	}

	qsort( line, N, 80, compare );

	for(int i=0; i<N; i++){
		printf("%s\n", line[i] );
	}

}
```

## step01-1
上週教過 List of Conquests,我們下次想考它。所以趁著今天考完字串排序,帶大家把它做出來。先把資料都正確讀出來, 等一下要qsort()排序

```c++
///Week01-1 step01-1 準備下次考試/複習上週教過
///趁著今天考完字串排序,帶大家把它做出來。先把資料都正確讀出來
#include <stdio.h>
char nation[2000][80]; //每筆80字母
   //國家名 2000筆
int main()
{
	int N;
	scanf("%d", &N);
	//技巧:知道有幾筆 for迴圈, 不知道有幾筆 while迴圈
	for(int i=0; i<N; i++){
		scanf("%s", nation[i] );//空格斷開

		char name[80];//人名,有空格在裡面
		gets( name );//技巧: gets()把空格也吃進來
	}


	for(int i=0; i<N; i++){
		printf("%s\n", nation[i] );
	}
}
```

## step02-1
再一次,我們把 List of Conquests 做出來了, 先加入 qsort() 再利用 strcmp() 來比對字串

```c++
///Week08-2 step02-1 準備下次考試/複習上週教過 
#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()
char nation[2001][80];
int compare( const void *p1, const void *p2 )
{
	return strcmp( (char*)p1, (char*)p2 );
}
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s", nation[i] );//空格斷開
		char name[80];//人名,有空格在裡面
		gets( name );//技巧: gets()把空格也吃進來
	}
	
	qsort( nation, N, 80, compare );
	
	nation[N][0]=0;//空字串
	int combo = 1;//白色的那一筆
	for(int i=0; i<N; i++){
		//if( nation[i] == nation[i+1] ){//相同, BUT字串不能用== 要改
		if( strcmp( nation[i], nation[i+1] ) == 0 ){
			combo++; //多找到一個相同的
		}else{
			printf("%s %d\n", nation[i], combo );
			combo = 1; //新的開始,有第1筆
		}
	}
}
```

## step02-2
檔案輸出,使用 FILE指標f,利用fopen()開啟檔案,利用fprintf()來檔案輸出

```c++
///Week08-3.cpp step02-2 檔案輸出 2行
#include <stdio.h>

int main()
{///檔案指標    開啟檔案  檔名       模式w+ 寫+
    FILE * f = fopen( "檔案輸出.txt", "w+" );
    fprintf(f ,"Hello我在這裡哦\n" );

     printf(   "Hello World\n");
}
```

## step03-1
示範如何問問題, 利用剛發生的實際故事,讓同學參與, 並思考如何問問題、如何回應、提供哪些訊息會比較好。


# Week09

## step01-0
考試前, 老師示範如何逐步寫出 List of Conquests 這題。分成6步,慢慢寫出來。

```cpp
///Week09-0.cpp 考試 List of Conquests
#include <stdio.h>
#include <stdlib.h> //qsort() step3
#include <string.h> //strcmp() step5
char nation[2001][80];
int compare( const void*p1, const void *p2 )
{//Step4: compare函式
	return strcmp( (char*)p1, (char*)p2 );
}  //Step5: strcmp
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s", nation[i] );

		char line[80];
		gets(line);
	}//Step1: Input

	qsort(nation,N,80, compare); //Step3: qsort()

	nation[N][0]=0;//空字串
	int combo = 1;//Step6
	for(int i=0; i<N; i++){//Step2: Output
		if( strcmp( nation[i], nation[i+1] ) == 0 ){ //相同
			combo++;
		}else{
			printf("%s %d\n", nation[i], combo );
			combo = 1;
		}
	}
}
```


## step01-1
大一上有教過「泡泡排序」,而上週有個網路事件與這個相關,所以今天想要將泡泡排序法做些修改,先寫出我們大一上學過的版本, 等一下要接著做修改。

```cpp
///Week09-1.cpp step01-1 從小到大
#include <stdio.h>
int grade[10]={9,8,1,2,3, 7,6,4,5,0};
int main()
{
    int N=10;
    for(int k=0; k<N-1; k++){
        for(int i=0; i<N-1; i++){///泡泡排序法的核心
            if( grade[i] > grade[i+1] ){ ///反了
                int temp=grade[i];///就交換
                grade[i]=grade[i+1];
                grade[i+1]=temp;
            }
        }
        for(int i=0; i<N; i++) printf("%d ", grade[i] );
        printf("\n");
    }
}
```

## step01-2_同學遇到的問題傳 FB截圖給老師時, 老師分別進行講解。

## step02-1_我們接下來做個修改,當改成從大到小時, if(判斷)的方向就要修改。同時利用 int change=0 這個變數, 有遇到問題要交換時 change++, 最後 if(change==0) break 便可以提早離開

```cpp
///Week09-2.cpp step02-1 改成 從大到小
#include <stdio.h>
int grade[10]={9,8,1,2,3, 7,6,4,5,0};
int main()
{
    int N=10;
    for(int k=0; k<N-1; k++){///做太多次了

        int change=0;///進核心迴圈前,變動0個地方
        for(int i=0; i<N-1; i++){///泡泡排序法的核心
            if( grade[i] < grade[i+1] ){ ///反了,不符合需求
                int temp=grade[i];///就交換
                grade[i]=grade[i+1];
                grade[i+1]=temp;
                change++;///有動到1個地方
            }
        }
        if(change==0) break; ///沒有動作,就提早結束休息

        for(int i=0; i<N; i++) printf("%d ", grade[i] );
        printf("\n");
    }
}
```

## step02-2
看了網路事件中的好心人周心一的程式,我們把for(int k的這個迴圈,改用while(1){試試看,結果相同。

```cpp
///Week09-3.cpp step02-2 從大到小,改用while迴圈
#include <stdio.h>
int grade[10]={9,8,1,2,3, 7,6,4,5,0};
int main()
{
    int N=10;
    while(1){ ///一直做,直到好了,break

        int change=0;///進核心迴圈前,變動0個地方
        for(int i=0; i<N-1; i++){///泡泡排序法的核心
            if( grade[i] < grade[i+1] ){ ///反了,不符合需求
                int temp=grade[i];///就交換
                grade[i]=grade[i+1];
                grade[i+1]=temp;
                change++;///有動到1個地方
            }
        }
        if(change==0) break; ///沒有動作,就提早結束休息

        for(int i=0; i<N; i++) printf("%d ", grade[i] );
        printf("\n");
    }
}
```

## step02-3
下週考試的題目,是剛剛教的程式的變型。我們先在瘋狂程設裡老師準備了 20-100筆資料, 都是有學號(姓名) 及分數。我們先把資料Input與Output搞定, 中間再配上剛剛寫的泡泡排序法,便能從小到大排好。不過 學號(姓名)的那個字串沒有跟著動。下一節課再改進它。

```cpp
///Week09-4.cpp step02-3 從高到底
#include <stdio.h>
int grade[100];//一百筆
char name[100][30];
char tempName[30];
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s %d", name[i], &grade[i] );
	}//Input
	for(int k=0; k<N-1; k++){//很多次
		for(int i=0; i<N-1; i++){//核心
			if( grade[i] < grade[i+1] ){
				int temp=grade[i];
				grade[i]=grade[i+1];
				grade[i+1]=temp;
				int
			}
		}
	}
	for(int i=0; i<N; i++){
		printf("%s %d\n", name[i], grade[i] );
	}
}
```

## step03-1
剛剛沒有把字串(學號or姓名)也跟著交換排序。所以現在加上這段程式碼, 在交換grade[i] grade[i+1] 時, 利用 string.h 裡的 strcpy() 的複製能力, copy 3次, 便能完成交換, 以完成這一題

```cpp
///Week09-5.cpp step03-1 從高到底
#include <stdio.h>
#include <string.h> //strlen() strcpy() strcmp()
int grade[100];//一百筆 整數
char name[100][30];//一百筆 字串(30個字元)
char tempName[30];//一筆 字串(30個字元)
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s %d", name[i], &grade[i] );
	}//Input
	for(int k=0; k<N-1; k++){//很多次
		for(int i=0; i<N-1; i++){//核心
			if( grade[i] < grade[i+1] ){
				int temp=grade[i];
				grade[i]=grade[i+1];
				grade[i+1]=temp;

				strcpy( tempName, name[i] );
				strcpy( name[i], name[i+1] );
				strcpy( name[i+1], tempName );
			}
		}
	}
	for(int i=0; i<N; i++){
		printf("%s %d\n", name[i], grade[i] );
	}
}
```

## step03-2
講解 strcmp(), strcpy(), strlen() 對照課本第4章函式, 進行解說, 並教一些口訣,加深大家的印象

```cpp
strlen() //string length
strcpy() //string copy
strcmp() //string compare
```

之前有教過 strlen()
```cpp
int N = strlen( line );
for(int i=0; i<N; i++){

}
```

接下來介紹 strcpy
## step03-3
講解同學在作業遇到的問題、講解Moodle期中問卷同學遇到的問題
