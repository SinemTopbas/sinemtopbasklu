# sinemtopbasklu
 Çoğunluk Elemanı

Bu kod, bir sayı dizisindeki çoğunluk elemanını bulmak için kullanılır. Çoğunluk elemanı, dizide en az ⌊n / 2⌋ kez görünen sayıdır.

Algoritma, Boyer-Moore oy kullanma algoritması olarak adlandırılan bir yöntem kullanır. Bu yöntem, bir dizi üzerinde tek bir geçiş yaparak en sık tekrar eden elemanı bulur.

Algoritma, dizideki her elemanı tek tek kontrol eder. Başlangıçta, bir sayı "oy" olarak atanır ve sayacı 1 olarak ayarlanır. Sonra, diğer sayılarla karşılaştırılır. Eğer sayı oy olarak atanan sayıya eşitse, sayacı bir artırılır. Eğer sayı farklı bir sayı ise, sayacı bir azaltılır. Eğer sayac sıfıra düşerse, yeni bir sayı oy olarak atanır ve sayac 1 olarak ayarlanır. Bu şekilde, dizideki en sık tekrar eden eleman bulunur.

Son olarak, algoritma, dizideki en sık tekrar eden elemanın kaç kez tekrarlandığını kontrol eder. Eğer bu sayı, dizinin yarısından fazlaysa, o sayı çoğunluk elemanı olarak kabul edilir ve geri döndürülür. Aksi takdirde, dizide çoğunluk elemanı yoktur ve bir hata değeri döndürülür.

Bu algoritmanın çalışma süresi, dizinin boyutuna bağlı olarak O(n) olarak hesaplanır, çünkü dizi üzerinde sadece bir kez geçiş yapılır. Bu nedenle, bu yöntem, büyük veri setleri üzerinde de etkili bir şekilde çalışabilir.
