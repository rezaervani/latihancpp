Bagian program yang menunjukkan penggunaan algoritma greedy adalah:

Fungsi score(): Fungsi ini menghitung skor setiap kandidat berdasarkan kriteria "kaya", "ganteng", dan "tinggi". Setiap kriteria dianggap sama pentingnya (nilai 1 jika memenuhi kriteria, 0 jika tidak). Ini adalah langkah greedy karena secara langsung memilih kriteria yang paling menguntungkan tanpa mempertimbangkan kombinasi lain yang mungkin lebih optimal dalam jangka panjang.

Fungsi compare(): Fungsi ini digunakan sebagai pembanding dalam pengurutan. Kandidat dengan skor lebih tinggi dianggap lebih baik. Ini adalah bagian dari strategi greedy karena selalu memilih kandidat terbaik saat ini berdasarkan skor, tanpa mempertimbangkan kemungkinan kandidat lain yang mungkin lebih cocok jika dievaluasi bersamaan.

Pengurutan dan Pemilihan di pilihJodoh(): Vektor candidates diurutkan berdasarkan skor menggunakan std::sort dan fungsi compare. Kemudian, kandidat pertama (dengan skor tertinggi) dipilih sebagai kandidat terbaik. Ini adalah langkah greedy karena langsung memilih kandidat terbaik saat ini tanpa mempertimbangkan semua kemungkinan pasangan atau melakukan analisis yang lebih mendalam.

Mengapa ini Greedy?

Algoritma greedy membuat pilihan terbaik pada setiap langkah dengan harapan akan menghasilkan solusi terbaik secara keseluruhan. Dalam kasus ini, program mengasumsikan bahwa kandidat dengan skor tertinggi berdasarkan kriteria individual akan menjadi pilihan terbaik secara keseluruhan, tanpa mempertimbangkan kemungkinan kombinasi lain atau melakukan analisis yang lebih komprehensif.

Penting:

Pendekatan greedy tidak selalu menghasilkan solusi yang optimal secara global. Dalam konteks pemilihan jodoh, mungkin ada faktor lain yang lebih penting daripada sekadar "kaya", "ganteng", dan "tinggi". Oleh karena itu, program ini mungkin tidak realistis dalam memilih pasangan yang paling cocok dalam kehidupan nyata.