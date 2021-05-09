# Operacje tablicowe
Wszystkie testy zawierają jedną sesję.

Katalog S zawiera 1000 testów. Długość tablicy to liczba z przedziału <1, 10>. Każdy test zawiera dokładnie jedną operację S.
Czas testowania: ok. 2 minuty

Katalog R zawiera 1000 testów. Długość tablicy to liczba z przedziału <1, 10>. Każdy test zawiera dokładnie jedną operację R.
Czas testowania: ok. 2 minuty

Katalog C zawiera 1000 testów. Długość tablicy to liczba z przedziału <1, 10>. Każdy test zawiera dokładnie jedną operację C.
Czas testowania: ok. 2 minuty

Katalog A zawiera 20 testów. Długość tablicy to liczba z przedziału <100k, 150k> Każdy test zawiera od 50 do 100 dowolnych operacji.

Czas testowania dla programu o złożoności <img src="http://www.sciweavers.org/tex2img.php?eq=%5Ctheta%5Cleft%28%5Csum_%7Bi%3D1%7D%5E%7Bq%7D%5Csum_%7Bj%3D1%7D%5E%7Bm_i%7D%5Cleft%28%28s_%7Bi%2Cj%7D%2Br_%7Bi%2Cj%7D%2Bc_%7Bi%2C%20j%7D%5Cright%29%20n_i%5Cright%29&bc=Black&fc=White&im=jpg&fs=12&ff=arev&edit=0" align="center" border="0" alt="\theta\left(\sum_{i=1}^{q}\sum_{j=1}^{m_i}\left((s_{i,j}+r_{i,j}+c_{i, j}\right) n_i\right)" width="231" height="57" />: ok. 25 sekund

Czas testowania dla programu o złożoności <img src="http://www.sciweavers.org/tex2img.php?eq=%5Ctheta%5Cleft%28%5Csum_%7Bi%3D1%7D%5E%7Bq%7D%5Csum_%7Bj%3D1%7D%5E%7Bm_i%7D%5Cleft%28%28s_%7Bi%2Cj%7D%2Br_%7Bi%2Cj%7D%29%2B%5Cfrac%7B1%7D%7Bb_%7Bi%2Cj%7D%7D%5Ccdot%5Cleft%28c_%7Bi%2Cj%7D%20%5Chspace%7B0.1cm%7Dmod%5Chspace%7B0.1cm%7D%20b_%7Bi%2Cj%7D%29%5Cright%2B%5Cleft%28n_i%5Chspace%7B0.1cm%7Dmod%5Chspace%7B0.1cm%7Db_%7Bi%2Cj%7D%5Cright%29%5Cright%29%20n_i%5Cright%29&bc=Black&fc=White&im=jpg&fs=12&ff=arev&edit=0" align="center" border="0" alt="\theta\left(\sum_{i=1}^{q}\sum_{j=1}^{m_i}\left((s_{i,j}+r_{i,j})+\frac{1}{b_{i,j}}\cdot\left(c_{i,j} \hspace{0.1cm}mod\hspace{0.1cm} b_{i,j})\right+\left(n_i\hspace{0.1cm}mod\hspace{0.1cm}b_{i,j}\right)\right) n_i\right)" width="487" height="57" />: ???
