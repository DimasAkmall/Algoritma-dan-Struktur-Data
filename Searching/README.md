# Searching
Searching adalah pencarian data dari kumpulan data. Searching dibedakan menjadi 2 yaitu :
1. [Sequential Searching](https://github.com/DimasAkmall/ASD/blob/master/Dosen/Searching/Sequential_Searching.c)\
     &#8594; Sequential searching adalah metode dalam mencari nilai dari suatu data dengan mengecek satu per satu data
      yang ada hingga ditemukan atau tidak. Kelemahan dari metode ini adalah bila jumlah datanya semakin banyak/
      besar maka komputasinya akan semakin lama. 
2. [Binary Searching](https://github.com/DimasAkmall/ASD/blob/master/Dosen/Searching/Binary_Searchign.c)\
     &#8594; Binary searching adalah cara untuk mencari suatu nilai dalam urutan dengan membagi data menjadi dua. Caranya
      adalah menggunakan index awal dan index akhir lalu diambil nilai tengahnya dan dicek apakah itu nilai yang
      dicari atau bukan. Jika bukan, maka dilihat nilai tengah lebih besar atau lebih kecil dari nilai yang dicari.
      Bila nilai tengah lebih kecil maka proses berlanjut dibagian kanan dengan mengeser index awal. Dan jika nilai
      tengah lebih besar maka proses dilajutkan di bagian kiri dengan menggeser index akhir. proses ini dilakukan 
      berulang hingga ditemukan atau tidak. kelemahan dari binary searching adalah data/array-nya
      harus urut.
