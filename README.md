# 2021c2
資傳一甲程式設計二的上課筆記

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


