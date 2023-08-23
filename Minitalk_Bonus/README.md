# Minitalk

<img src="https://cdn.getmidnight.com/84f7b02a8128f5f5775611244c24b941/2021/02/ezgif.com-gif-maker--1-.gif" alt="Bitwise">
<h2> Minitalk Nedir? </h2>
Minitalk, UNIX sistemlerinde çalışan bir iki işlem arasında anında mesajlaşma amacıyla kullanılan bir iletişim yazılımıdır. İki işlem arasındaki haberleşme, signal fonksiyonları aracılığıyla gerçekleştirilir.
<br>

<h2> getpid() </h2>
getpid() fonksiyonu, programın kendine ait işlem numarasını (process ID) döndürür. PID, belirli bir işlemi tanımlamak için kullanılan benzersiz bir numaradır.

<h2> Signal() </h2>
C programlama dilinde "signal" fonksiyonu, belirli bir sinyal tipi için bir işlem atanmasını sağlar. Signal fonksiyonu, bir sinyal tipi geldiğinde çağrılan bir işlem veya fonksiyon belirler. Signal fonksiyonu, belirli sinyalleri ele almak veya yok saymak için kullanılabilir. Standart C kütüphanelerinde bulunan bu fonksiyon, işletim sistemi tarafından gönderilen sinyallere uygulanacak işlemi tanımlar.

<h2> Kill() </h2>
kill() fonksiyonu, işletim sisteminde çalışan bir işlemi belirtilen bir sinyal ile sonlandırmak için kullanılan bir fonksiyondur. Sinyal, işlemi sonlandırma, durdurma, devam etme gibi farklı amaçlar için kullanılabilir. Bu fonksiyon, işlem numarasını ve sinyal numarasını alan ve bu sinyali işleme gönderen bir fonksiyondur.

<h2> usleep() </h2>
usleep() fonksiyonu, işletim sisteminde çalışan bir programda belirli bir miktar zaman (mikrosaniyeler cinsinden) beklemek için kullanılan bir fonksiyondur. Bu fonksiyon, programın belirli bir miktar zaman beklemesine veya belirli bir görev tamamlanana kadar diğer işlemlere devam etmesine olanak tanır.

<h2> pause() </h2>
pause() fonksiyonu, bir işletim sisteminde çalışan bir programda işlemin sürekli olarak beklemek için kullanılan bir fonksiyondur. Bu fonksiyon, sinyal geldiğinde devam etmeye devam eden bir işlemi durdurur ve sinyal alana kadar bekler. İşlemin devam etmesi için sinyal gerekmektedir.

<h2> Bitsel Operatörler </h2>
Aşağıdaki C dilindeki örnekler bit kaydırma işlemlerini gösterir:

    Sola kaydırma: x = x << 1;
    Sağa kaydırma: x = x >> 1;

Bu örneklerdeki x değişkeni binary formdaki veridir ve << ve >> operatörleri sola veya sağa kaydırma işlemini ifade eder.


Bitsel operatörler, binary veriler üzerinde bit bazlı işlemler yapmak için kullanılan operatörlerdir. Aşağıdaki bitsel operatörler vardır:

    & (Bitsel AND): Her bit için birleştirilen binary verilerin her bitinin "1" olması durumunda sonuç "1", aksi takdirde "0" olacaktır.

    | (Bitsel OR): Her bit için birleştirilen binary verilerin herhangi bir bitinin "1" olması durumunda sonuç "1", aksi takdirde "0" olacaktır.

    ^ (Bitsel XOR): Her bit için birleştirilen binary verilerin herhangi bir bitinin "1" olması durumunda sonuç "1", aksi takdirde "0" olacaktır.

    ~ (Bitsel NOT): Her bitin değerini tersine çevirir. "1" değeri "0" ve "0" değeri "1" olacaktır.

    << (Bitsel Sola Kaydırma): Binary veriyi belirli sayıda bit sola kaydırarak binary verinin boyutunu küçültür veya artırır.

    >> (Bitsel Sağa Kaydırma): Binary veriyi belirli sayıda bit sağa kaydırarak binary verinin boyutunu küçültür veya artırır.
    
  
<h2> "while(1)" ve "pause()" </h2>  
"while(1)" ve "pause()" iki farklı programlama yapısıdır ve kodun çalışmasının durması veya gecikmesi için kullanılır.

"while(1)" sonsuz bir döngü oluşturur ve program durdurulana kadar veya "break" ifadesi çalıştırılana kadar sürekli olarak çalışır. Döngü, önemli bir işlem gücü tüketir ve programın dondurulmasına veya donmasına neden olabilir.

"pause()", belirli programlama dilleri ve işletim sistemleri için özel bir fonksiyondur. Programın durmasını veya belirli bir olay veya kullanıcı girdisi beklemesini sağlar, işlem gücü tüketmez. "pause()" nin tam davranışı belirli programlama diline ve işletim sistemine bağlıdır, ancak genellikle bir tuşa basılması veya diğer kullanıcı etkileşimi beklenmeden çalışmaya devam etmeden önce beklenir.

Genel olarak, "while(1)" bir programda beklemek veya gecikmek için önerilmez, önemli bir işlem gücü tüketir ve programın dondurulmasına veya donmasına neden olabilir.
