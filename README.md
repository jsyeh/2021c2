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

step03-2_今天的大目標,是把 UVA 410 Palindrome 迴圈+鏡像 搞定。我們的作法,是結合前面 step02-2 及 step02-4 兩個程式, 讓它可以偵測迴圈、偵測鏡像。


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


# Week10
程式設計 Week10 2022-04-29
1. 考試: 「學號姓名、分數」排序
2. 主題: 物件排序
3. 主題: 撲克牌洗牌
4. 主題: 互動程式設計

## step01-0
上課考試前,老師先示範複習本週的考試題目(姓名學號+分數)的排序

```cpp
#include <stdio.h>
#include <string.h>
char name[100][30], tempName[30];
int grade[100];
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){//Input
		scanf("%s %d", name[i], &grade[i] );
	}

	for(int k=0; k<N-1; k++){
		for(int i=0; i<N-1; i++){
			if( grade[i] < grade[i+1] ){//wrong
				int temp = grade[i];
				grade[i] = grade[i+1];
				grade[i+1] = temp;
				strcpy( tempName, name[i] );
				strcpy( name[i], name[i+1] );
				strcpy( name[i+1], tempName );
			}
		}
	}

	for(int i=0; i<N; i++){//Output
		printf("%s %d\n", name[i], grade[i] );
	}
}
```

## step01-1
step01-1_今天想要教到C++的物件、STL及sort,所以我們先把今天的考試題目,改成在CodeBlocks中使用檔案來讀取。首先先把 input.txt 準備好,內容是今天考試的Input,接下來很像今天的考試,只是多了 fin=fopen()及 fscanf(), 完成Input與Output

Week01-1.cpp step01-1 模仿今天的考試,但改用檔案
1. 在 CodeBlocks 要把 input.txt 準備好(從瘋狂程設copy來)
2. `FILE * fin = fopen("intput.txt", "r");`
3. scanf() 改成 fscanf(fin, )

```cpp
///Week01-1.cpp step01-1 一定要 .cpp 檔 模仿今天的考試,但改用檔案
///1. 在 CodeBlocks 要把 input.txt 準備好(從瘋狂程設copy來)
///2. `FILE * fin = fopen("intput.txt", "r");`
///3. scanf() 改成 fscanf(fin, )
#include <stdio.h>
char name[100][30];
int grade[100];
int main()
{
    FILE * fin = fopen("input.txt", "r" );
    int N;
  ///scanf("%d", &N);
    fscanf( fin, "%d", &N );
    for(int i=0; i<N; i++){
        fscanf(fin, "%s %d", name[i], &grade[i] );
    }


    for(int i=0; i<N; i++){
        printf("%s %d\n", name[i], grade[i] );
    }
}
```

## step02-1
加上排序,依照分數大到小排,使用今天考試教過的泡泡排序法,分別將分數、名字都排序

```cpp
///Week01-2.cpp step02-1 一定要 .cpp 檔
///(1)檔案, (2)排序分數大-小
#include <stdio.h>
#include <string.h> ///strcpy()
char name[100][30], tempName[30];
int grade[100];
int main()
{
    FILE * fin = fopen("input.txt", "r" );
    int N;
    fscanf( fin, "%d", &N );
    for(int i=0; i<N; i++){
        fscanf(fin, "%s %d", name[i], &grade[i] );
    }
    for(int k=0; k<N-1; k++){
        for(int i=0; i<N-1; i++){
            if( grade[i] < grade[i+1] ){///不對,就交換
                int temp=grade[i];
                grade[i] = grade[i+1];
                grade[i+1] = temp;
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

## step03-0
總結今天各版本的程式差別。下週上課考試的程式,可以挑選任何一種來寫。

## step03-1
step03-1_互動程式設計,教同學安裝 Processing 軟體配合老師的中文介面翻譯, 教 size(), text(), textSize() 及背景色background(),填充色彩fill(),配合色彩選擇器Color Selector來挑選色彩 

互動程式設計
1. 在 Moodle 或 Teams 下載 Processing 4.0 beta 8 版本
2. 用 7-zip 解壓縮, 就可執行了

```processing
//老師的下載,中文很詳細 Processing 
//MIT Media Lab發明,給設計師、互動創作、小孩大人
//File-Preference,字型放大,可改用中文的字型
size(300,300);//大視窗
background(#FFFFBF);//背景色,淡黃色
textSize(50);//字的大小,設50
fill(#2429FF);//填充在字裡面的色彩,藍色
text("Hello", 50,50);//在50,50的座標,印出Hello
fill(#FF2466);//填充色換紅色
text("Hello", 50,100);
```

## step03-2 
寫第2個程式, Ctrl-N 開新檔案, 要寫「互動程式設計」的版本,準備好 void setup()設定的函式, void draw()畫圖的函式, 配合 if(mousePressed) 來決定 background()用哪種背景色,依mousePressed的點擊,決定秀哪種背景色


```processing
//想做互動,要有2個函式
void setup(){//設定的函式
  size(300,300);
}
void draw(){//畫圖的函式, 60次/秒
  if(mousePressed) background(255,0,0);
  else background(0,255,0);
}
```

# Week11

## step01-0
考試前, 老師複習今天的考試題目, 把舊方法、新方法都寫出來,方便大家比較學習。最後要小心 sort() vs. stable_sort()有些微不同, 考試要用stable_sort()

```cpp
#include <stdio.h>
#include <string>
#include <map>
using namespace std;
char nation[80], line[80];
int main()
{
	int N;
	scanf("%d", &N);

	std::map<std::string, int> table;
	for(int i=0; i<N; i++){
		scanf("%s", nation);
		gets(line);
		table[ nation ] ++;
	}

	for( auto it = table.begin(); it!=table.end(); ++it){
		printf("%s %d\n", it->first, it->second);
	}

}
```

## step01-1
step01-1今天考試的程式中用到上週教的 vector 及它的 begin() end() 但是同學不熟。因此, 老師在 step01-1 把 C++の絵本 裡面的圖秀出來, 同時讓大家練習簡單的 C++, 先從 stdcin  N; 還有 stdcin  name[i]  grade[i] 讀入, stdcout  name  stdendl; 印出。

```cpp
//Week11-1.cpp step01-1
//想熟悉 C++ std::vector
//#include <stdio.h> 舊
#include <iostream>//新
#include <vector>
char name[100][30];
int grade[100];
int main()
{
	int N;
	//scanf("%d", &N);
	std::cin >> N;
	for(int i=0; i<N; i++){
		std::cin >> name[i] >> grade[i];
	}    //你的資料,往右流到變數裡面

	for(int i=0; i<N; i++){
		std::cout << name[i] << std::endl; //end line 表示跳行
	}   //  送到左邊  << 變數

}
```

## step02-1
利用 using namespace std; 來簡化程式碼的大量 std

```cpp
//Week11-2.cpp step02-1
//想熟悉 C++ std::vector
//#include <stdio.h> 舊
#include <iostream>//新
#include <vector>
char name[100][30];
int grade[100];
using namespace std ; //std::重覆好多次,其實可省略
int main()
{
	int N;
	//scanf("%d", &N);
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> name[i] >> grade[i];
	}    //你的資料,往右流到變數裡面

	for(int i=0; i<N; i++){
		cout << name[i] << endl; //end line 表示跳行
	}   //  送到左邊  << 變數

}
```

## step02-2
繼續教大家,利用vector建出一個長度為N而且每一格的單位是Student的長長的陣列,而前面class Student{...}在宣告時要記得加上public:

```cpp
//Week11-3.cpp step02-2
//想熟悉 C++ std::vector
#include <iostream>
#include <vector>
using namespace std ;
class Student{
public:
	char name[30];
	int grade;
};
bool Compare( Student a, Student b )
{

}
int main()
{
	int N;
	cin >> N;
	vector<Student> stu(N); //啟用 vector 的變數 stu, 可以裝N個
	//單位是Student  stu這個變數,可裝N個Student
	for(int i=0; i<N; i++){
		cin >> stu[i].name >> stu[i].grade;
		//cin >> name[i] >> grade[i];
	}

	stable_sort( stu.bein(), stu.end(), compare );

	for(int i=0; i<N; i++){
		cout << stu[i].name << " " << stu[i].grade << endl;
		//cout << name[i] << endl;
	}
}
```

## step02-3
最後要使用algorithm裡面的 stable_sort()來排序 stable_sort( stu.begin(), stu.end(), compare) 並且把 compare()函式寫好, 完成今天的程式

```cpp
//Week11-4.cpp step02-3
//stable_sort
#include <iostream>
#include <vector>
#include <algorithm> //「資料結構、演算法」的演算法
using namespace std ;
class Student{
public:
	char name[30];
	int grade;
};
bool compare( Student a, Student b )
{
	return a.grade > b.grade ;
}
int main()
{
	int N;
	cin >> N;
	vector<Student> stu(N);
	for(int i=0; i<N; i++){
		cin >> stu[i].name >> stu[i].grade;
	}

	stable_sort( stu.begin(), stu.end(), compare );

	for(int i=0; i<N; i++){
		cout << stu[i].name << " " << stu[i].grade << endl;
	}
}
```

## step03-1
為了熟悉 vector, 老師拿C++課本裡的範例, 裡面有 push_back() 的功能, 可以把原本沒有設定大小、裡面有0個的vector v 裡面, 逐一放入東西。最後用 for迴圈來印出來。

```cpp
///Week11-5.cpp step03-1 熟悉 vector
///把課本的範例寫一次
#include <vector> ///vector<???>  STL功能
#include <iostream> ///cin 或 cout
using namespace std;
int main()
{
    vector<int> v;///v是vector裡面裝int
    ///你沒說它要多大, 所以 v有0個
    v.push_back(10);///把10放進去, v有1個
    v.push_back(11);///把11放進去, v有2個
    v.push_back(15);///把13放進去, v有3個

    for(int i=0; i<3; i++){
        cout << v[i] << endl;
    }
}
```

## step03-2

照課本範例,vector會有一個iterator 可以在迴圈中使用, 配合 for(it=begin(); it!=end(); it++) 可以把每個格子都走過一次 。iterator看起來很難拼字, 不過熟練過後, 可以讓許多複雜的程式碼突然變得很簡單。

```cpp
///Week11-6.cpp step03-2 熟悉 vector
///把課本的範例寫完
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> v;///v是vector裡面裝int
    ///你沒說它要多大, 所以 v有0個
    v.push_back(10);///把10放進去, v有1個
    v.push_back(11);///把11放進去, v有2個
    v.push_back(15);///把13放進去, v有3個
              ///迭代子,迴圈會用到的那個i
    vector<int>::iterator it;
    for(it=v.begin() ; it!=v.end(); it++){///for(int i=0; i<3; i++){
        cout << *it << endl;              ///cout << v[i] << endl;
    }
}
```

## step03-3
來不及教的 std::map 先利用第09週考試的 List of Conquests 來做比較

原來版本
```cpp
#include <stdio.h>//舊方法
#include <string.h>
char name[100][30], tempName[30];
int grade[100];
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s %d", name[i], &grade[i] );
	}
	
	for(int k=0; k<N-1; k++){
		for(int i=0; i<N-1; i++){
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

改使用 std::map 的版本
```cpp
#include <stdio.h>
#include <string>
#include <map>
using namespace std;
char nation[80], line[80];
int main()
{
	int N;
	scanf("%d", &N);

	std::map<std::string, int> table;
	for(int i=0; i<N; i++){
		scanf("%s", nation);
		gets(line);
		table[ nation ] ++;
	}

	for( auto it = table.begin(); it!=table.end(); ++it){
		printf("%s %d\n", it->first, it->second);
	}

}
```

不過如果 Compiler 沒有開啟 -std=c++11 的設定的話, 前面的程式可能會有問題, 要再回去舊一點的寫法

```cpp
#include <stdio.h>
#include <string>
#include <map>
#include <iostream>
using namespace std;
char nation[80], line[80];
int main()
{
	int N;
	scanf("%d", &N);
	std::map<std::string, int> table;
	for(int i=0; i<N; i++){
		scanf("%s", nation);
		gets(line);
		table[ nation ] ++;
	}
	std::map<std::string, int>::iterator it;
	for(it = table.begin(); it!=table.end(); it++){
		cout << it->first << " " << it->second << endl;
	}
}
```

# Week13

## step01-1
把上週教過的內容,走一次!
1. size(), background(), textSize(), fill(), text()
2. void setup()設定,  void draw() 就有互動
3. mouseX mouseY 座標
4. void mousePressed() mouse按下去時, 要做的事
5. GitHub Pages (你的帳號.github.io) 上傳你的程式food, 上網 https://你的帳號.github.io/food

教一下網頁運作的機制 你的網站網址, 目錄, index.html 還有你的程式碼 food.js 或 week12_5_web.js 現在修改一下你的程式 增加食物(中餐吃牛排、中餐吃大餐)

上週翻譯程式碼, 是用 pde2js.herokuapp.com

本來是3個選項, 改成 5個選項

修改了 text()部分
```processing
    text("中餐吃泡麵", 50, 50);
    text("中餐UberEat", 50, 100);
    text("中餐FoodPanda", 50, 150);
    text("中餐吃牛排", 50, 200);
    text("中餐吃大餐", 50, 250);
```
還有 if()判斷

```processing
    if (choice == 3)
        rect(50, 200, 150, 2);
    if (choice == 4)
        rect(50, 250, 150, 2);
```

```processing
function mousePressed() {
    // choice = (choice + 1) % 3;
    choice = int(random(5));
}
```

## step01-2

1. copy week12_4_random 存成
week13_2_ellipse
2. ellipse( 圓心x, 圓心y, 寬度w, 高度h)

```processing
//Step01-2 Week13_2_ellipse 改用圓圈圈
void setup(){
  size(400,300);
  textSize(40);
}
int choice = -1; //-1:沒選, 0:Choise 1
void draw(){
  background(#DFEA45); //背景色
  fill(#456FEA); //字的填充的顏色
  if(choice==0) ellipse( 25, 25, 40, 40);
  if(choice==1) ellipse( 25, 75, 40, 40);
  if(choice==2) ellipse( 25,125, 40, 40);
  text("中文 1", 50,  50); 
  text("Choice 2", 50, 100); 
  text("Choice 3", 50, 150); 
}
void mousePressed(){
  choice = int(random(3)) ;// choice = (choice + 1) % 3;
}
```

## step02-1
Mac 執行時, 有中文字型
Web 執行時, 有中文字型
Windows 執行時, 要自己設定中文字型
File-Preference偏好設定中的中文字型,只在edit有用
Run執行時,需要即時換成中文字型

```processing
//Step02-1 Week13_3_font
// 在你熟悉的功能,按右鍵,可看參考文件
// 下面會秀出相關的指令 
size(300,200);

PFont font = createFont("標楷體", 50);
textFont(font);//只有Windows需設定中文

text("中文", 50, 50);
```

## step02-2
要放圖片 week13_4_image

1. 相關的程式指令
2. 宣告圖片變數 PImage img; 讀圖 img=loadImage("圖檔.png");
3. 把圖秀出來 image( img, x座標, y座標)
4. 圖片放哪裡? 

```processing
//Week13_4_image step02-2 
size(500,500);
PImage img = loadImage("image.png");//大象
image( img, 0, 0);//左上角
```

## step03-1
step03-1_把模型讀進來, 要先在 Teams下載模型。這個部分比較多觀念,首先把size(500,500,P3D)開啟Processing 3D功能, 宣告 PShape gundam; gundam=loadShape(模型檔) 讀入模型, shape(gundam) 會看到在左上角像螞蟻大小的模型, scale(20,20,20)放大20倍後,果然變大,但佔左半邊。translate(250,0,0) 移到中間, 只是倒過來。

step03-1_因為下週放假, 老師提早示範之後會教的 3D模型如何讀進來(大二下電腦圖學、3D設計、進階程式設計會教), 使用 PShape gundam; gundam = loadShape(模型檔);讀入, shape(gundam)會畫出來。移動translate 旋轉rotate, 放大scale等指令, 讓模型秀得更漂亮。

```processing
//Week13_5_shape_gundam step03-1
PShape gundam;//等一下要用的鋼彈模型
void setup(){  //P語言其實是Java的變型(方言)
  size(500, 500, P3D); //有P語言的3D功能
  gundam = loadShape("Gundam.obj");
}       //讀入模型,很像今天教的loadImage()
void draw(){//每秒60次畫圖
  background(#F8FFAF);
  //但是這個模型太小了, 等一下要把它放!!
  translate( 250, 0, 0);//往右移一半
  scale(20, 20, 20);//放大20倍,看起來倒過來
  //因為建3D模型時,Y軸向上, 小畫家/P語言/圖片,Y向下
  shape(gundam); //秀出模型,像今天教的image()
}//Q: 模型 Gundam.obj 在哪裡?
```

# step03-2
再利用 scale(20, -20, 20) 把 Y座標正負倒過來。最後利用 translate(250, 500) 移到中間偏下面, 便能看到整個 Gundam 模型

```processing
//Week13_6_gundam_correct step03-2 不用交
PShape gundam;
void setup(){
  size(500, 500, P3D);
  gundam = loadShape("Gundam.obj");
}
void draw(){
  background(#F8FFAF);
  translate( 250, 500);
  scale(20, -20, 20);
  rotateY( radians(frameCount) );
  shape(gundam);
}
```

# Week14 入學口試停課

# Week15 端午節放假

# Week16

## step01-1
網友做雙人小遊戲時有問題被罵,有3個好人友善的回應。現在先練習void keyPressed() 按按鍵時會叫它。把 key 存在 String line 裡面, 再用 text()印出來, 讓你了解你按了什麼按鍵

```processing
void setup(){//設定
  size(300,300);
}
String line = "";
void draw(){//畫圖60次/秒
  background(#FFFFF2);
  fill(0);
  textSize(50);
  text(line, 20, 50);
}
void keyPressed(){//按鍵
  line = "key: " + key;
}
```

## step01-2
接下來想要解決 WASD 的鍵盤互動。把剛剛的程式變5行, 分別是 int x=150, y=150; 設定座標, ellipse(x, y, 30, ,30); 照座標畫圖, void keyPressed()裡面照著key的值,去改座標

```processing
//week16_keyPressed_key_WASD_move
void setup(){
  size(300,300);
}
int x=150, y=150; //座標
void draw(){
  background(#FFFFF2);
  ellipse(x, y, 30, 30);
}
void keyPressed(){
  if( key=='w' ) y -= 2;
  if( key=='s' ) y += 2;
  if( key=='a' ) x -= 2;
  if( key=='d' ) x += 2;
}
```

## step01-3
修改今天step01-1的程式,原本的key不夠用, 再加上 keyCode 的值,方便等一下要做方向鍵哦

```processing
//week16_keyPressed_key
//...
void keyPressed(){//按鍵
  line = "key: " + key;
  line += "\nkeyCode: " + keyCode;
}
```

## step02-1
有了剛剛的keyCode資訊,便能將原本單人WASD控制的遊戲,變成第2位玩家用方向鍵的雙人遊戲

```processing
//week16_two_player
void setup(){
  size(400,300);//寬一點
}
int x=100, y=150, x2=300, y2=150; //座標
void draw(){
  background(#FFFFF2);
  ellipse(x, y, 30, 30);
  ellipse(x2, y2, 30, 30);
}
void keyPressed(){//按鍵,一次只能一個人
  if( key=='w' ) y -= 2;
  if( key=='s' ) y += 2;
  if( key=='a' ) x -= 2;
  if( key=='d' ) x += 2;
  if( keyCode==UP )  y2 -= 2;
  if( keyCode==DOWN) y2 += 2;
  if( keyCode==LEFT) x2 -= 2;
  if( keyCode==RIGHT)x2 += 2;
}
```

## step02-2
為了解決2個按鍵同時按時會衝突的問題, 改使用 vx, vy 當成移動速度。在void draw()裡 x += vx; y += vy; 來持續更新位置。



```processing
//week16_two_player_together_vx_vy
void setup(){
  size(400,300);
}
int x=100, y=150, x2=300, y2=150; //座標
int vx=0, vy=0, vx2=0, vy2=0; //移動速度
void draw(){
  background(#FFFFF2);
  ellipse(x, y, 30, 30);
  ellipse(x2, y2, 30, 30);
  x += vx;  y += vy; //更新位置
  x2+= vx2; y2+= vy2; //更新位置
}
void keyPressed(){//按鍵,一次只能一個人
  if( key=='w' ) vy = -2; //y -= 2;
  if( key=='s' ) vy = +2; //y += 2;
  if( key=='a' ) vx = -2; //x -= 2;
  if( key=='d' ) vx = +2; //x += 2;
  if( keyCode==UP )  vy2 = -2; //y2 -= 2;
  if( keyCode==DOWN) vy2 = +2; //y2 += 2;
  if( keyCode==LEFT) vx2 = -2; //x2 -= 2;
  if( keyCode==RIGHT)vx2 = +2; //x2 += 2;
}
```

為避色按鍵放開還會動, 就再用 void keyReleased()來把速度清為0,完成網友需要的雙人遊戲程式
```processing
//week16_two_player_together_vx_vy_keyReleased
//...
void keyReleased(){//按鍵放開時,速度變0
  if( key=='w' ) vy = 0;
  if( key=='s' ) vy = 0;
  if( key=='a' ) vx = 0;
  if( key=='d' ) vx = 0;
  if( keyCode==UP )  vy2 = 0;
  if( keyCode==DOWN) vy2 = 0;
  if( keyCode==LEFT) vx2 = 0;
  if( keyCode==RIGHT)vx2 = 0;
}
```

## step02-3
今天第2個主題,是想要做出五子棋, 所以介紹完Kirby Wu自己做五子棋的故事後,我們也來做,先從line()畫線做起, 一條、兩條、三條, 然後用for迴圈啦

```processing
//week16_for_line_line_line
size(500,500);
background(#FFFFF2);
//line( 0, 50,  500, 50);
//line( 0,100,  500,100);
//line( 0,150,  500,150);
for(int y=50; y<500; y+=50){
  line( 0,  y,  500,  y);
}
//line( 50, 0,   50, 500);
//line(100, 0,  100, 500);
for(int x=50; x<500; x+=50){
  line(  x, 0,    x, 500);
}
```

## step03-1
有了棋盤,我們要互動畫棋子。先把程式加上void setup()及void draw()變成互動模式, int bx=0, by=0; 當成棋子的座標, ellipse(bx, by, 40, 40) 與 ellipse(mouseX,mouseY, 40,40) 可以畫出棋子與手上拿的棋子, void mousePressed()在按下mouse時可以更新bx,by座標。

```processing
//week16_go01_one_go week16_go 碁
void setup(){
  size(500,500);
}
int bx=0, by=0;//棋子的座標
void draw(){
  background(#FFFFF2);
  for(int y=50; y<500; y+=50){
    line( 0, y, 500, y );
  }
  for(int x=50; x<500; x+=50){
    line( x, 0, x ,500);
  }
  fill(0);//黑
  ellipse( bx, by, 40, 40 );
  ellipse(mouseX, mouseY, 40, 40);
}
void mousePressed(){
  bx=mouseX; by=mouseY;
}
```

為了多一點棋子,我們利用陣列加迴圈
```processing
//week16_go02_many_go week16_go 碁
void setup(){
  size(500,500);
}
int []bx=new int[100];//棋子的座標 陣列
int []by=new int[100];//棋子的座標 陣列
int N=0;//棋子的數字,一開始0個棋子
void draw(){
  background(#FFFFF2);
  for(int y=50; y<500; y+=50){
    line( 0, y, 500, y );
  }
  for(int x=50; x<500; x+=50){
    line( x, 0, x ,500);
  }
  fill(0);//黑
  for(int i=0; i<N; i++){
    ellipse( bx[i], by[i], 40, 40 );
  }
  ellipse(mouseX, mouseY, 40, 40);
}
void mousePressed(){
  bx[N]=mouseX; by[N]=mouseY;
  N++;
}
```

## step03-2
最後完成五子棋,利月i%2==0畫出黑棋, 手上拿的棋則是用 N%2==0 看是否是黑棋。最後把程式上傳到GitHub Pages讓家人能用網頁的方式來玩你放在雲端的簡單小遊戲

```processing
//week16_go 碁
//要如何把程式放上網? (0) Processing Java寫完程式
//(1) 把程式copy到 pde2js.herokuapp.com, 再轉換
//(2) 把轉換後的程式, copy 到 Processing p5.js裡
//(3) Run 它!! 127.0.0.1是你的電腦,家人朋友看不到
//(4) 把程式存檔! 桌面的 go 的 index.html 有問題
//(5) index.html 第9行 改成 go.js
//(6) 把 桌面的 go 目錄,放到 GitHub 你的網頁
//           你的帳號.github.io 
//    ex. maruneko030.github.io
//        maruneko030.github.io/go
void setup(){
  size(500,500);
}
int []bx=new int[100];//棋子的座標 陣列
int []by=new int[100];//棋子的座標 陣列
int N=0;//棋子的數字,一開始0個棋子
void draw(){
  background(#FFFFF2);
  for(int y=50; y<500; y+=50){
    line( 0, y, 500, y );
  }
  for(int x=50; x<500; x+=50){
    line( x, 0, x ,500);
  }
  for(int i=0; i<N; i++){
    if(i%2==0) fill(0);
    else fill(255);
    ellipse( bx[i], by[i], 40, 40 );
  }
  if(N%2==0) fill(0);
  else fill(255);
  ellipse(mouseX, mouseY, 40, 40);
}
void mousePressed(){
  bx[N]=mouseX; by[N]=mouseY;
  N++;
}
```

# Week17
程式設計 Week17 2022-06-17
1. 問問題的技巧 事件1|記錄、事件2|記錄
2. 整學期複習
3. 程式設計會考 - 示範
4. (小地鼠)

## step01-1
老師講解問問題事件, 並實作 Fibonacci費氏數列 的程式, 利用矩陣、迴圈來做出來。

```cpp
#include <stdio.h>
int a[100];
int main()
{
    a[0] = 0;
    a[1] = 1;
    for(int i=2; i<=10; i++){
        a[i] = a[i-1] + a[i-2];
        printf("%d ", a[i] );
    }
}
```

## step02-1
小地鼠, 第一步, 希望畫出不同動作的地鼠, 先把上下左右4個圖片都loadImage()讀進來, 並用image()顯示出來

```processing
PImage img1,img2,img3,img4;
void setup(){
  size(640,480);
  img1=loadImage("groundhogIdle.png");
  img2=loadImage("groundhogDown.png");
  img3=loadImage("groundhogLeft.png");
  img4=loadImage("groundhogRight.png");
}
void draw(){
  image(img1, 0,  0);
  image(img2, 0, 80);
  image(img3, 0,160);
  image(img4, 0,240);
}
```

## step02-2

使用 keyPressed() 及 keyReleased() 來切換圖片 及改變速度, 與上週很像

放開key的時候, keyReleased() 控制讓小地鼠就不能再走 

```processing
PImage img1, img2, img3, img4, gopher;
void setup(){
  size(640,480);
  img1 = loadImage("groundhogIdle.png");
  img2 = loadImage("groundhogDown.png");
  img3 = loadImage("groundhogLeft.png");
  img4 = loadImage("groundhogRight.png");
  gopher = img1;
}
int x=300, y=80, vx=0, vy=0;
void draw(){
  background(#FFFFF2);
  image(gopher, x, y);
  x += vx; y += vy;
}
void keyPressed(){
  if(keyCode==LEFT){ vx=-1; vy=0; gopher=img3;}
  if(keyCode==RIGHT){ vx=+1; vy=0; gopher=img4;}
  if(keyCode==DOWN){ vx=0; vy=1; gopher=img2;}
}
void keyReleased(){
  vx=0; vy=0; gopher=img1;
}
```

## step02-3
往下走時,希望是土壤動,地鼠保持一定的高度。所以y座標稍做修改, 變成土壤往 -y 方向移動, 而地鼠固定在 y=80的地方。

```processing
PImage img1, img2, img3, img4, gopher, soil;
void setup(){
  size(640,480);
  soil = loadImage("soil8x24.png");
  img1 = loadImage("groundhogIdle.png");
  img2 = loadImage("groundhogDown.png");
  img3 = loadImage("groundhogLeft.png");
  img4 = loadImage("groundhogRight.png");
  gopher = img1;
}
int x=300, y=0, vx=0, vy=0;
void draw(){
  image(soil, 0, 160-y);//background(#FFFFF2);
  image(gopher, x, 80);
  x += vx; y += vy;
}
void keyPressed(){
  if(keyCode==LEFT){ vx=-1; vy=0; gopher=img3;}
  if(keyCode==RIGHT){ vx=+1; vy=0; gopher=img4;}
  if(keyCode==DOWN){ vx=0; vy=1; gopher=img2;}
}
void keyReleased(){
  vx=0; vy=0; gopher=img1;
}
```

## step03-1
老師的題目及圖片是來自一位網友的作業, 在網友的GitHub裡看到作業assign3的下一步要畫出石頭, 所以宣告一個 `int [][] a` 的Java 2維陣列, 裡面1表示石頭。for迴圈裡 `if(a[i][j]==1)`就畫石頭。座標要小心一下y座標對應i, x座標對應j

```processing
PImage img1, img2, img3, img4, gopher, soil, bg, stone;
void setup(){
  size(640,480);
  bg = loadImage("bg.jpg");
  stone = loadImage("stone1.png");
  soil = loadImage("soil8x24.png");
  img1 = loadImage("groundhogIdle.png");
  img2 = loadImage("groundhogDown.png");
  img3 = loadImage("groundhogLeft.png");
  img4 = loadImage("groundhogRight.png");
  gopher = img1;
}
int [][] a = {
  {1, 0, 0, 0, 0, 0, 0, 0},
  {0, 1, 0, 0, 0, 0, 0, 0},
  {0, 0, 1, 0, 0, 0, 0, 0},
  {0, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 0, 1, 0, 0},
  {0, 0, 0, 0, 0, 0, 1, 0},
  {0, 0, 0, 0, 0, 0, 0, 1},
};
int x=300, y=0, vx=0, vy=0;
void draw(){
  image(bg, 0, 0);//背景圖
  image(soil, 0, 160-y);
  for(int i=0; i<8; i++){//左手i 對應高度
    for(int j=0; j<8; j++){//右手j 對應x座標
      if(a[i][j]==1) image(stone, j*80, i*80+160-y);
    }
  }
  image(gopher, x, 80);
  x += vx; y += vy;
}
void keyPressed(){
  if(keyCode==LEFT){ vx=-1; vy=0; gopher=img3;}
  if(keyCode==RIGHT){ vx=+1; vy=0; gopher=img4;}
  if(keyCode==DOWN){ vx=0; vy=1; gopher=img2;}
}
void keyReleased(){
  vx=0; vy=0; gopher=img1;
}
```

## step03-2
接下來用陣列來呈現 24層土壤的狀況, 也利用 `if(a[i][j]==2)`來處理畫出複雜的石頭

```processing
PImage img1, img2, img3, img4, gopher, soil, bg, stone, stone2;
void setup(){
  size(640,480);
  bg = loadImage("bg.jpg");
  stone = loadImage("stone1.png");
  stone2 = loadImage("stone2.png");
  soil = loadImage("soil8x24.png");
  img1 = loadImage("groundhogIdle.png");
  img2 = loadImage("groundhogDown.png");
  img3 = loadImage("groundhogLeft.png");
  img4 = loadImage("groundhogRight.png");
  gopher = img1;
}
int [][] a = {
  {1, 0, 0, 0, 0, 0, 0, 0},
  {0, 1, 0, 0, 0, 0, 0, 0},
  {0, 0, 1, 0, 0, 0, 0, 0},
  {0, 0, 0, 1, 0, 0, 0, 0},
  {0, 0, 0, 0, 1, 0, 0, 0},
  {0, 0, 0, 0, 0, 1, 0, 0},
  {0, 0, 0, 0, 0, 0, 1, 0},
  {0, 0, 0, 0, 0, 0, 0, 1},

  {0, 1, 1, 0, 0, 1, 1, 0},
  {1, 0, 0, 1, 1, 0, 0, 1},
  {1, 0, 0, 1, 1, 0, 0, 1},
  {0, 1, 1, 0, 0, 1, 1, 0},
  {0, 1, 1, 0, 0, 1, 1, 0},
  {1, 0, 0, 1, 1, 0, 0, 1},
  {1, 0, 0, 1, 1, 0, 0, 1},
  {0, 1, 1, 0, 0, 1, 1, 0},
  
  {0, 1, 2, 0, 1, 2, 0, 1},
  {1, 2, 0, 1, 2, 0, 1, 2},
  {2, 0, 1, 2, 0, 1, 2, 0},
  {0, 1, 2, 0, 1, 2, 0, 1},
  {1, 2, 0, 1, 2, 0, 1, 2},
  {2, 0, 1, 2, 0, 1, 2, 0},
  {0, 1, 2, 0, 1, 2, 0, 1},
  {1, 2, 0, 1, 2, 0, 1, 2},

};
int x=300, y=0, vx=0, vy=0;
void draw(){
  image(bg, 0, 0);//背景圖
  image(soil, 0, 160-y);
  for(int i=0; i<24; i++){//左手i 對應高度
    for(int j=0; j<8; j++){//右手j 對應x座標
      if(a[i][j]==1) image(stone, j*80, i*80+160-y);
      if(a[i][j]==2){
        image(stone, j*80, i*80+160-y);
        image(stone2, j*80, i*80+160-y);
      }
    }
  }
  image(gopher, x, 80);
  x += vx*6; y += vy*6;
}
void keyPressed(){
  if(keyCode==LEFT){ vx=-1; vy=0; gopher=img3;}
  if(keyCode==RIGHT){ vx=+1; vy=0; gopher=img4;}
  if(keyCode==DOWN){ vx=0; vy=1; gopher=img2;}
}
void keyReleased(){
  vx=0; vy=0; gopher=img1;
}
```

## step03-3
最後將Java版的程式,轉換成 p5.js 版後, 放在GitHub網站, 讓人可用網址直連網頁。
在使用 pde2js.herokuapp.com 轉換時, 它會建議你把 loadImage() 移到 function preload() 裡面事先讀入圖片, 讓其他人在看網頁時的體驗可以更順(不用等太久)。這是之後可以修改的地方。

```javascript
//(0) 在 Java 模式, 先把程式寫好
//(1) 切換 p5.js 模式, 有新視窗
//(2) 利用 pde2js.herokuapp.com 將 Java 轉成 p5.js
//(3) p5.js 貼回 p5.js視窗
//(4) 另存新檔 gopher, 小心還沒放圖檔。將圖檔放進你的 桌面/gopher 裡
//(5) index.html 裡 第9行 改成 src="gopher.js"
//(6) 把 gopher目錄 拉近 GitHub 的 jsyeh.github.io 專案倉庫

var img1, img2, img3, img4, gopher, soil, bg, stone, stone2;

function setup() {
    initializeFields();
    createCanvas(640, 480);
    bg = loadImage("bg.jpg");
    stone = loadImage("stone1.png");
    stone2 = loadImage("stone2.png");
    soil = loadImage("soil8x24.png");
    img1 = loadImage("groundhogIdle.png");
    img2 = loadImage("groundhogDown.png");
    img3 = loadImage("groundhogLeft.png");
    img4 = loadImage("groundhogRight.png");
    gopher = img1;
}

var a;

var x, y, vx, vy;

function draw() {
    // 背景圖
    image(bg, 0, 0);
    image(soil, 0, 160 - y);
    for (var i = 0; i < 24; i++) {
        // 左手i 對應高度
        for (var j = 0; j < 8; j++) {
            // 右手j 對應x座標
            if (a[i][j] == 1)
                image(stone, j * 80, i * 80 + 160 - y);
            if (a[i][j] == 2) {
                image(stone, j * 80, i * 80 + 160 - y);
                image(stone2, j * 80, i * 80 + 160 - y);
            }
        }
    }
    image(gopher, x, 80);
    x += vx * 6;
    y += vy * 6;
}

function keyPressed() {
    if (keyCode == LEFT_ARROW) {
        vx = -1;
        vy = 0;
        gopher = img3;
    }
    if (keyCode == RIGHT_ARROW) {
        vx = +1;
        vy = 0;
        gopher = img4;
    }
    if (keyCode == DOWN_ARROW) {
        vx = 0;
        vy = 1;
        gopher = img2;
    }
}

function keyReleased() {
    vx = 0;
    vy = 0;
    gopher = img1;
}

function initializeFields() {
    img1 = null;
    img2 = null;
    img3 = null;
    img4 = null;
    gopher = null;
    soil = null;
    bg = null;
    stone = null;
    stone2 = null;
    a = [ [ 1, 0, 0, 0, 0, 0, 0, 0 ], [ 0, 1, 0, 0, 0, 0, 0, 0 ], [ 0, 0, 1, 0, 0, 0, 0, 0 ], [ 0, 0, 0, 1, 0, 0, 0, 0 ], [ 0, 0, 0, 0, 1, 0, 0, 0 ], [ 0, 0, 0, 0, 0, 1, 0, 0 ], [ 0, 0, 0, 0, 0, 0, 1, 0 ], [ 0, 0, 0, 0, 0, 0, 0, 1 ], [ 0, 1, 1, 0, 0, 1, 1, 0 ], [ 1, 0, 0, 1, 1, 0, 0, 1 ], [ 1, 0, 0, 1, 1, 0, 0, 1 ], [ 0, 1, 1, 0, 0, 1, 1, 0 ], [ 0, 1, 1, 0, 0, 1, 1, 0 ], [ 1, 0, 0, 1, 1, 0, 0, 1 ], [ 1, 0, 0, 1, 1, 0, 0, 1 ], [ 0, 1, 1, 0, 0, 1, 1, 0 ], [ 0, 1, 2, 0, 1, 2, 0, 1 ], [ 1, 2, 0, 1, 2, 0, 1, 2 ], [ 2, 0, 1, 2, 0, 1, 2, 0 ], [ 0, 1, 2, 0, 1, 2, 0, 1 ], [ 1, 2, 0, 1, 2, 0, 1, 2 ], [ 2, 0, 1, 2, 0, 1, 2, 0 ], [ 0, 1, 2, 0, 1, 2, 0, 1 ], [ 1, 2, 0, 1, 2, 0, 1, 2 ] ];
    x = 300;
    y = 0;
    vx = 0;
    vy = 0;
}

function preload() {
// TODO: put method calls that load from files into this method
// I found the following calls that you should move here:
// - on line 4: bg = loadImage("bg.jpg")
// - on line 5: stone = loadImage("stone1.png")
// - on line 6: stone2 = loadImage("stone2.png")
// - on line 7: soil = loadImage("soil8x24.png")
// - on line 8: img1 = loadImage("groundhogIdle.png")
// - on line 9: img2 = loadImage("groundhogDown.png")
// - on line 10: img3 = loadImage("groundhogLeft.png")
// - on line 11: img4 = loadImage("groundhogRight.png")
// (note that line numbers are from your Processing code)
}

```
