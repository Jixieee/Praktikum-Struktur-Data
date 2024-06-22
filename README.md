<div align="center">
  <img src="https://unp.ac.id/nfs-assets/all/images/logo_unp_white.png">
</div>

# Biodata Diri
<table>
<tr>
<td>
<b><pre>
<h3>
Nama                : Muhammad Jimmy Al Afif
NIM                 : 23343046
Program Studi       : Informatika
Mata Kuliah         : Praktikum Struktur Data
Kode Kelas          : INF1.62.2014
Dosen Pengampu      : Randi Proska Sandra, M.Sc
</h3>
</pre></b>
</td>
</tr>
</table>

<h2 id="navigator">Pemahaman Materi</h2>
<table>
<tr>
<td>
<pre>
<list>
  <li><a href="#js1">Job Sheet 1 - Pengenalan Struktur Data</a></li>
  <li><a href="#js2">Job Sheet 2 - Array, Pointer, Structure</a></li>
  <li><a href="#js3">Job Sheet 3 - Single Linked List</a></li>
  <li><a href="#js4">Job Sheet 4 - Doubly Linked List</a></li>
  <li><a href="#js5">Job Sheet 5 - Double and Circular Linked List</a></li>
  <li><a href="#js6">Job Sheet 6 - Stack</a></li>
  <li><a href="#js7">Job Sheet 7 - Queue</a></li>
  <li><a href="#js8">Job Sheet 8 - Bubble and Insertion Sort</a></li>
  <li><a href="#js9">Job Sheet 9 - Selection and Merge Sort</a></li>
  <li><a href="#js10">Job Sheet 10 - Shell and Quick Sort</a></li>
  <li><a href="#js11">Job Sheet 11 - Linear and Binary Search</a></li>
  <li><a href="#js12">Job Sheet 12 - Tree</a></li>
  <li><a href="#js13">Job Sheet 13 - Graphs</a></li>
</list>
</pre>
</td>
</tr>
</table>

<h1>Penjelasan Job Sheet Praktikum Struktur Data</h1>

<h2 id="js1">Job Sheet 1 - Pengenalan Struktur Data</h2>

<p> - <b>Struktur Data</b> : cara pengaturan, penyimpanan, dan pengelolaan data dalam komputer sehingga data tersebut dapat diakses dan dimodifikasi secara efisien.</p>
<p>Struktur Data meliputi terbagi dua yaitu;</p>
<p> 1). Struktur data sederhana seperti Array dan Record, dan 
<p> 2). Struktur data majemuk, yang terdiri dari;
<ul>
  <li> Linier, berupa Linked List, Stack, dan Queue.</li>
  <li> Non Linier, berupa Tree dan Graph.</li>
</ul>

<p> - <b>Tipe Data</b>> : klasifikasi yang menentukan jenis nilai yang dapat disimpan dan dioperasikan dalam sebuah program.</p>

<p> - <b>Objek Data</b> : representasi dari entitas dalam pemrograman yang menggabungkan data dan perilaku (fungsi atau metode) yang terkait dengan data tersebut.</p>

<p> Dalam teknik pemrograman, struktur data memiliki arti yang sangat penting dan berfungsi sebagai dasar untuk menyusun dan mengelola data dengan cara yang efisien. Struktur data mengacu pada cara organisasi, pengelolaan, dan penyimpanan data yang memungkinkan akses dan modifikasi yang efisien.
<hr><hr>

<h2 id="js2">Job Sheet 2 - Array, Pointer, Structure</h2>

<p> ~ <b>Array</b> : struktur data yang terdiri dari kumpulan elemen yang disusun secara berurutan dan memiliki tipe data yang sama.</p>

<p> ~ <b>Pointer</b> : sebuah variabel yang menyimpan alamat memori dari variabel lain atau objek dalam komputer. Dalam konteks pemrograman, pointer memungkinkan kita untuk mengakses dan memanipulasi data dengan cara yang efisien dan fleksibel, terutama ketika menangani data dalam jumlah besar atau saat membutuhkan manipulasi memori secara langsung. </p>
<p>Tiga Perintah akses pointer :</p>
<ul>
<li>Cukup gunakan nama variabel untuk mendapatkan isi atau nilai dari variabel pointer .</li>
<li>Tambahkan simbol AND (&) didepan variabel untuk mendapatkan alamat memori pointer (address of).</li>
<li>Tambahkan simbol asterisk (*) didepan variabel untuk mendapatkan isi atau nilai dari alamat yang terdapat pada isi pointer (value pointed by)</li>
</ul>

<p> ~ <b>Structure (Struct)</b> :  konstruksi bahasa pemrograman yang digunakan untuk mengelompokkan berbagai tipe data (atau "fields") bersama-sama dalam satu unit.</p>
<p>Terdapat dua tipe operator yang digunakan untuk mengakses sebuah struct, yaitu:</p>
<ul>
<li>'.' - Operatir titik (`.`).</li>
<li>'->' - Operator panah (`->`).</li>
</ul>

<p> - <b>ADT (Abstract Data Type) atau Tipe Data Bentukan</b> : tipe data yang dibuat oleh pengguna dalam sebuah bahasa pemrograman. Tipe data ini memungkinkan pengguna untuk menggabungkan beberapa tipe data dasar (seperti integer, float, char, dll.) menjadi satu unit yang lebih kompleks. </p>

<p>Dalam  bahasa C terdapat tipe data numerik dan karakter (seperti int, float, char dan lain-lain). Selain itu juga terdapat tipe data enumerasi dan structure.</p>
<hr><hr>

<h2 id="js3">Job Sheet 3 - Single Linked List</h2>

<p> - <b>Simpul/Nodes</b> :elemen dasar atau unit yang digunakan untuk membangun struktur data linked list. Node menyimpan data dan juga referensi atau pointer yang menunjuk ke node berikutnya dalam linked list. </p>

<p> - <b>Alokasi Memory</b> : proses pemberian atau reservasi ruang memori untuk digunakan oleh sebuah program komputer. Dalam pemrograman, alokasi memori sering kali dibutuhkan ketika kita ingin membuat variabel, array, atau struktur data baru yang akan digunakan dalam program. </p>

<p> - <b>Perintah sizeof()</b> digunakan untuk mengembalikan ukuran dari suatu tipe data atau variabel dalam byte. Fungsinya adalah untuk memberikan informasi tentang berapa besar memori yang diperlukan untuk menyimpan suatu objek atau tipe data tertentu dalam sistem komputer yang digunakan.</p>

<p> - <b>Perintah malloc()</b> digunakan untuk melakukan alokasi memori dinamis.</p>

<p> - <b>Linked List</b> : struktur data linear yang terdiri dari sekelompok elemen yang disusun secara berurutan, di mana setiap elemen (node) terdiri dari data itu sendiri dan sebuah referensi atau pointer yang menunjuk ke node berikutnya dalam urutan. </p>
<p> ~ <b>Single Linked list</b> : salah satu jenis dari struktur data linked list yang paling sederhana. Pada single linked list, setiap elemen (node) terdiri dari dua bagian utama: data yang menyimpan nilai atau informasi yang ingin disimpan dalam linked list, dan sebuah pointer (biasanya disebut next) yang menunjuk ke node berikutnya dalam urutan. Node terakhir dalam single linked list memiliki pointer next yang menunjuk ke nilai NULL, menandakan akhir dari linked list.</p>
<hr><hr>

<h2 id="js4">Job Sheet 4 - Doubly Linked List</h2>

<p> ~ <b>Doubly Link List(DLL)</b> : jenis struktur data linked list yang lebih kompleks dibandingkan dengan single linked list. Pada double linked list, setiap node tidak hanya memiliki pointer yang menunjuk ke node berikutnya (next), tetapi juga memiliki pointer yang menunjuk ke node sebelumnya (prev). Hal ini memungkinkan traversal (penelusuran) linked list dari depan ke belakang dan sebaliknya. </p>
<p> Sebuah linked list dikatakan kosong apabila isi pointer head adalah NULL. Selain itu, nilai pointer prev dari HEAD selalu NULL, karena merupakan data pertama.</p>
<p> - Kelebihan dibanding single link list, yakni</p>
<ul>
  <li>Double Link List dapat berjalan dalam 2 arah ke depan dan belakang,</li>
  <li>Operasi penghapusan atau deletion() lebih efisien dan simple menggunakan pointer yang menunjuk ke simpul yang akan dihapus,</li>
  <li>Dapat melakukan proses insert() simpul lebih efisien.</li>
</ul>
<p> - Kelemahan Doubly Link List, yakni</p>
<ul>
  <li>Setiap simpul DLL membutuhkan ruang memory tambahan untuk pointer 2 pointer,</li>
  <li>Setiap operasi yang dilakukan harus mencantumkan pointer simpul sebelumnya.</li>
</ul>
<hr><hr>

<h2 id="js5">Job Sheet 5 - Double and Circular Linked List</h2>

<p> ~ <b>Double Linked List</b> :  jenis struktur data linked list yang lebih kompleks dibandingkan dengan single linked list. Pada double linked list, setiap node tidak hanya memiliki pointer yang menunjuk ke node berikutnya (next), tetapi juga memiliki pointer yang menunjuk ke node sebelumnya (prev). Hal ini memungkinkan traversal (penelusuran) linked list dari depan ke belakang dan sebaliknya.</p>

<p> setiap node memiliki 3 field, yaitu 1 field pointer yang menunjuk pointer berikutnya (next), 1 field menunjuk pointer sebelumnya (prev), serta sebuah field yang berisi data untuk node tersebut</p>
<p>Untuk menunjukkan head dari double linked list, maka pointer prev dari elemen pertama menunjuk NULL, sedangkan untuk menunjukkan tail dari double linked list, maka pointer next dari elemen terakhir yang menunjuk NULL.</p>

<p> ~ <b>Circular Linked List</b> :  jenis struktur data linked list di mana setiap node terhubung secara circular, yaitu node terakhir dalam linked list memiliki pointer yang menunjuk kembali ke node pertama (head) dalam urutan. Dengan kata lain, linked list membentuk sebuah lingkaran tertutup, tidak seperti linked list biasa yang memiliki akhir yang menunjuk ke NULL.</p>
<hr><hr>

<h2 id="js6">Job Sheet 6 - Stack</h2>

<p> ~ <b>Stack</b> : struktur data yang mengikuti prinsip LIFO (Last In, First Out), yang berarti elemen terakhir yang dimasukkan ke dalam stack akan menjadi elemen pertama yang dihapus dari stack. </p>

<p> - <b>Push</b> digunakan untuk menambahkan elemen atau data baru dalam tumpukan. Elemen baru elemen baru ini ditambahkan pada posisi paling atas dari stack, yang sering disebut sebagai "top".</p>

<p> - <b>Pop</b> digunakan untuk menghapus atau mengambil elemen teratas dari stack.</p>

<p> - <b>Peek</b> digunakan untuk melihat nilai dari elemen teratas (top) dari stack tanpa menghapusnya. </p>

<p> - <b>isFull</b> digunakan untuk memeriksa apakah stack sudah penuh atau tidak. Dengan cara menambah satu (increment) nilai TOP of STACK setiap ada penambahan elemen stack 
selama stack masih belum penuh, kemudian Isikan nilai baru ke stack berdasarkan indeks TOP of STACK setelah ditambah satu (increment). </p>

<p> - <b>isEmpty</b> digunakan untuk memeriksa apakah stack masih dalam kondisi kosong atau tidak. Dengan cara memeriksa TOP of STACK. Jika TOP masih = -1 maka berarti stack masih kosong. </p>

<p> - <b>Clear</b> digunakan untuk menghapus semua elemen yang ada dalam stack sehingga stack menjadi kosong.</p>
<hr><hr>

<h2 id="js7">Job Sheet 7 - Queue</h2>

<p> ~ <b>Queue (Antrian)</b> : struktur data yang mengikuti prinsip FIFO (First In, First Out), yang berarti elemen pertama yang dimasukkan ke dalam queue akan menjadi elemen pertama yang diambil atau dihapus dari queue.</p>

<p>Fungsi utama Queue ialah mengelola operasi dasar seperti menambahkan, menghapus, dan melihat elemen dalam queue.</p>
<p>Dalam sistem komputasi, ia digunakan untuk menangani tugas-tugas seperti penjadwalan proses, antrean pesan, dan manajemen sumber daya.</p>
<p>Urutan pertama (data yang akan dikeluarkan) disebut Front atau Head. Sebaliknya, data pada urutan terakhir (data yang baru saja ditambahkan) disebut Back, Rear, atau Tail.</p>
<p> - <b>Enqueue</b> merupakan proses untuk menambahkan (atau memasukkan) elemen baru ke dalam queue.</p>
<p> - <b>Dequeue</b> merupakan proses untuk menghapus (atau mengambil) elemen dari depan atau front queue.</p>

<h2 id="js8">Job Sheet 8 - Bubble and Insertion Sort</h2>

<p> ~ <b>Sorting (Pengurutan)</b> : proses mengatur elemen-elemen data dalam urutan tertentu, biasanya dalam urutan menaik atau menurun berdasarkan kriteria tertentu.</p>
<p>Teknik Sorting yang umum digunakan : buble sort, insertion sort, selection sort, quicksort, mergesort, heapsort, dan binary sort</p>

<p> - <b>Buble Sort</b> :Algoritma sederhana di mana elemen-elemen disusun dengan cara bertukar pasangan yang bersebelahan jika mereka tidak berada dalam urutan yang benar. Disebut pengurutan gelembung karena masing-masing kunci akan dengan lambat menggelembung ke posisinya yang tepat.</p>
<p> - <b>Insertion Sort</b> : mAlgoritma di mana elemen-elemen dimasukkan satu per satu ke posisi yang tepat dalam array yang sudah diurutkan. Algoritma insertion sort seperti proses pengurutan kartu yang berada di tangan kita .</p>
<hr><hr>

<h2 id="js9">Job Sheet 9 - Selection and Merge Sort</h2>

<p> ~ <b>Selection Sort </b> : Algoritma di mana elemen-elemen dipilih satu per satu dari bagian yang belum diurutkan dari array dan ditempatkan pada posisi yang tepat. </p>
<p>Cara kerja Slecetion Sort: </p>
<ol type="1">
  <li>Tentukan elemen pertama dari urutan menjadi elemen terkecil masukkan sebagai elemen “minimum”.</li>
  <li>Bandingkan mnimum dengan urutan elemen kedua. Jika elemen kedua lebih kcil dibandingkan minimum, jadikan elemen kedua sebagai minimum. Bandingkan kembali minimum dengan elemen ketiga. Lakukan secara terus menerus samapai dengan elemen yang terakhir.  </li>
  <li>Setelah setiap perulangan, minimum ditempatkan di paling depan urutan list data </li>
  <li>pada setiap pengulangan, indeksasi (pemberian alamat) dimulai dari elemen pertama dari list. langkah 1-3 dilakukan berulang kali samapi keseluruhan elemen digantikan pada posisi yang 
terurut. </li>
</ol>

<p> ~ <b>Merge Sort </b> : mAlgoritma divide-and-conquer di mana array dibagi menjadi dua bagian, setiap bagian diurutkan secara terpisah, dan kemudian digabungkan kembali. </p>
<p>Divide-and-conquer memecahkan sub-masalah secara rekursif; setiap submasalah harus lebih kecil dari masalah aslinya, dan masing-masing harus mempunyai kasus dasar. Algoritma bagi-dan-taklukkan memiliki tiga bagian: </p>
<ol type="1">
  <li>Bagilah masalah menjadi beberapa bagian kecil dari masalah yang sama</li>
  <li>Taklukkan submasalah dengan menyelesaikannya secara rekursif. Selesaikan submasalah sebagai kasus dasar jika submasalah tersebut cukup kecil.</li>
  <li>Untuk menemukan solusi dari masalah awal, gabungkan solusi dari submasalah.</li>
</ol>
<hr><hr>

<h2 id="js10">Job Sheet 10 - Shell and Quick Sort</h2>

<p> ~ <b>Shell Sort</b> : algoritma pengurutan yang merupakan variasi dari insertion sort. Algoritma ini dirancang untuk meningkatkan kinerja insertion sort dengan mengurangi jumlah pertukaran yang diperlukan untuk mengurutkan elemen.</p>
<p>Dalam pengurutan Shell Sort, elemen/data diurutkan dengan interval yang terukur. Jarak interval diantara elemen semakin lama semakin mengecil berdasarkan berapa kali pengulangan pengurutan 
 dilakukan.</p>
<p>Cara kerja Shell Sort: </p>
<ol type="1">
  <li>Urutkan array yang ada  </li>
  <li>Pada fase pertama, jika besar array N=8 maka jarak interval elemen menggunakan rumus N/2 = 4, akan dibandingkan dan ditukar jika belum sesuai urutan. </li>
  <li>Pada pengulangan kedua rumus formula interval yang digunakan N/4 = 8/4 = 2, Elemen ke 2 dan ke 4 dibandingkan sesuai rumus interval = 2, elemen ke 0 dan 2 juga dibandingkan. </li>
  <li>Proses yang sama berlaku untuk elemen yang tersisa. </li>
  <li>Pada akhirnya samapai pada fase akhir di saat interval N/8  = 8/8 = 1, elemen dengan interval 1 diurutkan </li>
</ol>

<p> ~ <b>Quick Sort</b> : Algoritma divide-and-conquer di mana elemen-elemen dibagi berdasarkan pivot, di mana elemen-elemen yang lebih kecil ditempatkan sebelum pivot dan elemen-elemen yang lebih besar ditempatkan setelah pivot.</p>
<p>Proses utama dalam quickSort adalah partisi() . Target dari partisi adalah untuk menempatkan pivot (elemen apa pun dapat dipilih menjadi pivot) pada posisi yang benar dalam susunan yang diurutkan dan meletakkan semua elemen yang lebih kecil di sebelah kiri pivot, dan semua elemen yang lebih besar di sebelah kanan pivot .</p>
<p>Partisi dilakukan secara rekursif pada setiap sisi pivot setelah pivot ditempatkan pada posisi yang benar dan akhirnya mengurutkan array.</p>
<hr><hr>

<h2 id="js11">Job Sheet 11 - Linear and Binary Search</h2>

<p><b>Algoritma pencarian</b> (searching algorithm) adalah algoritma yang menerima sebuah argumen kunci dan dengan langkah-langkah tertentu akan mencari rekaman dengan kunci tersebut.  Setelah proses pencarian dilaksanakan, akan diperoleh salah satu dari dua kemungkinan, yaitu data yang dicari ditemukan (successful) atau tidak ditemukan (unsuccessful). </p>
<p> ~ <b>Linear Search</b> : algoritma pencarian paling sederhana yang digunakan untuk mencari elemen tertentu dalam kumpulan data atau array. Algoritma ini bekerja dengan cara memeriksa setiap elemen satu per satu dari awal hingga akhir kumpulan data atau sampai elemen yang dicari ditemukan.</p>
<p>Search Linear dilakukan dengan mengulangi semua elemen array dan memeriksa apakah elemen saat ini sama dengan elemen target. Jika ditemukan elemen apa pun yang sama dengan elemen target, kembalikan indeks elemen saat ini. Sebaliknya, jika tidak ada elemen yang sama dengan elemen target, kembalikan -1 karena elemen tersebut tidak ditemukan.</p>
<p> ~ <b>Binary Search</b> :algoritma pencarian yang efisien untuk kumpulan data yang sudah diurutkan. Algoritma ini bekerja dengan membagi kumpulan data menjadi dua bagian dan kemudian membandingkan elemen tengah dari kumpulan data tersebut dengan elemen yang dicari. </p>
<p>Berikut Langkah-langkahnya:
<ul>
  <li>Data diambil dari posisi 1 sampai posisi akhir N</li>
  <li>cari posisi data tengah dengan rumus: (posisi awal + posisi akhir) / 2 </li>
  <li>Kemudian data yang dicari dibandingkan dengan data yang di tengah, apakah sama atau lebih kecil, atau lebih besar</li>
  <li>Jika lebih besar, maka proses pencarian dicari dengan posisi awal adalah posisi tengah + 1</li>
  <li>Jika lebih kecil, maka proses pencarian dicari dengan posisi akhir adalah posisi tengah – 1 </li>
  <li>Jika data sama, berarti ketemu.</li>
</ul></p>
<hr><hr>

<h2 id="js12">Job Sheet 12 - Tree</h2>

<p> ~ <b>Tree Traversal</b> atau melintasi sebuah pohon data/tree : mengunjungi semua simpul (node) yang ada pada pohon tersebut.</p>
<p>Setiap Tree adalah kombinasi dari sebuah simpul yang menyimpan data dan 2-sub tree</p>
<p>Berdasarkan urutan yang akan dilakukan, terdapat 3 cara melintasi tree: </p>
<ol type="1">
  <li><b>Inorder Traversal</b>, langkah-langkahnya: Kunjungi semua nodes/simpul di sebelah kiri subtree, kemudian kunjungi root node/simpul paling atas. Terakhir, Kunjungi semua simpul yang ada di kanan subtree.</li>
  <li><b>Preorder Traversal</b>, langkah-langkahnya: kunjungi simpul paling atas, kemudian Kunjungi semua simpul di sebelah kiri subtree. Terakhir, Kunjungi semua simpul yang ada di kanan subtree</li>
  <li><b>Postorder Traversal</b>, langkah-langkahnya: Kunjungi semua simpul di sebelah kiri subtree, kemudian Kunjungi semua simpul di sebelah kanan subtree. Terakhir, kunjungi simpul paling atas.</li>
</ol>
<hr><hr>

<h2 id="js13">Job Sheet 13 - Graphs</h2>

<p> ~ <b>Breadth-First Search (BFS)</b> : algoritma pencarian graf yang digunakan untuk menemukan semua simpul dalam graf yang dapat dicapai dari simpul awal tertentu.</p>
<p>Cara kerjanya yaitu Satu simpul dipilih pada suatu waktu ketika simpul tersebut dikunjungi dan ditandai, kemudian simpul yang berdekatan dikunjungi dan disimpan dalam antrian.</p>
<p> ~ <b>Depth First Search (DFS)</b> : algoritma pencarian graf yang digunakan untuk menemukan semua simpul dalam graf secara berurutan dari simpul awal tertentu. </p>
<p>Cara kerja algoritma DFS;
  <ol type="1">
    <li>Dimulai dengan meletakkan salah satu dari titik graph di atas sebuah tumpukan,</li>
    <li>Ambil item paling atas dari tumpukan dan tambahkan dalam daftar titik yang telah dikunjungi,</li>
    <li>Buatlah sebuah daftar dari titik yang segaris lurus dengannya. Tambahkan satu yang mana belum dikunjungi pada tumpukan paling atas, dan</li>
    <li>Ulangi langkah ke 2 dan 3 sampai dengan tumpukan menjadi kosong.</li>
  </ol></p>
  <hr>

