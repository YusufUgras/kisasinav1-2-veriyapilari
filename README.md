# kisasinav1-2-veriyapilari
Yusuf Uğraş
1220505023
 
 
SORU 1: Bu kod, bir dizi içerisinde kayıp bir rakamın yerini bulmak ve bir kopya rakamını tespit etmek için yazılmıştır. Kayıp rakam, dizide bulunmayan tek bir rakamı ifade ederken, kopya rakamı ise dizide birden fazla bulunan rakamı ifade etmektedir.

İlk olarak, kullanıcıdan dizi elemanlarının sayısı istenir ve daha sonra kullanıcıdan dizi elemanları alınır. Daha sonra kayipbul() fonksiyonu çağrılır ve bu fonksiyon, kayıp ve kopya rakamlarını bulmak için bir sayım dizisi oluşturur ve dizi elemanlarını tarar. Kayıp ve kopya rakamları bulunduktan sonra, bu değerler ekrana yazdırılır.

Fonksiyonun işleyişi şu şekildedir: Öncelikle, kayıp ve kopya rakamları için iki tane değişken tanımlanır. Ardından, sayım dizisi için bir bellek alanı ayrılır. Dizi elemanlarının her birinin kaç kez tekrarlandığını saymak için sayım dizisi kullanılır. Dizi elemanlarının taranması tamamlandıktan sonra, kayıp ve kopya rakamları bulunur ve ekrana yazdırılır. Fonksiyon sonlandığında, sayım dizisi için ayrılan bellek alanı serbest bırakılır.

Son olarak, programın sonunda bellek yönetimi için kullanılan calloc fonksiyonu ile ayrılan bellek alanı da serbest bırakılır.


SORU 2: Bu kod, tek bağlı bir listedeki elemanların palindrom olup olmadığını kontrol eder. Palindrom, tersten de aynı okunan bir kelime, sayı veya cümledir. Örneğin "radar" kelimesi bir palindromdur, çünkü tersten okunduğunda da "radar" olarak okunur. Bu program, kullanıcının klavyeden bir metin girmesine izin verir ve bu metnin tek bağlı listesine dönüştürür. Daha sonra, program listeyi tersine çevirir ve listenin ilk yarısı ile ikinci yarısını karşılaştırarak, listenin palindrom olup olmadığını belirler. Eğer liste palindrom ise, program "true" değerini döndürür. Aksi takdirde, "false" değerini döndürür.
