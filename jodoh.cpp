#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

struct Candidate {
    std::string name;
    bool harta;  // Kaya (true) atau Miskin (false)
    bool wajah;  // Ganteng (true) atau Jelek (false)
    bool tubuh;  // Tinggi (true) atau Pendek (false)

    int score() const {
        return harta + wajah + tubuh;
    }
};

bool compare(Candidate a, Candidate b) {
    return a.score() > b.score();
}

void pilihJodoh(std::vector<Candidate>& candidates) {
    std::sort(candidates.begin(), candidates.end(), compare);
    std::cout << "Kandidat terbaik berdasarkan kriteria yang tampak adalah: " << candidates[0].name << std::endl;
}

int main() {
    int n;
    std::cout << "Masukkan jumlah kandidat: ";
    std::cin >> n;
    std::vector<Candidate> candidates;

    for (int i = 0; i < n; ++i) {
        Candidate c;
        std::cout << "Masukkan nama kandidat: ";
        std::cin >> c.name;
        std::cout << "Apakah " << c.name << " Kaya? (1 untuk Ya, 0 untuk Tidak): ";
        std::cin >> c.harta;
        std::cout << "Apakah " << c.name << " Ganteng? (1 untuk Ya, 0 untuk Tidak): ";
        std::cin >> c.wajah;
        std::cout << "Apakah " << c.name << " Tinggi? (1 untuk Ya, 0 untuk Tidak): ";
        std::cin >> c.tubuh;
        candidates.push_back(c);
    }

    pilihJodoh(candidates);
    return 0;
}
