//2. Napisati klasu BasePoint za točke u dvodimenzionalnom prostoru sa pozicijom(double x, y) i brzinom
//vx, vy.Napisati funkcije članove :
//• init() postavlja pozicije x i y na nulu.
//• setvelocity() čisto virtualna funkcija
//• move(double dt) mijenja poziciju točke po formuli x = x + dx, y = y + dy
//• display() ispisuje x i y na terminal
//Napisati dvije izvedene klase za koje vrijedi(v x, v y) = (−y, x) za prvu i(v x, v y) = (x, y) za drugu.
//Definirate pointer na BasePoint tako da sljedeći kôd radi :
/// / d o N = 1 0 s t e p s w i t h t i m e s t e p d t = 0 . 1
//p - > init();
//for (int i = 0; i < 10; ++i)
//{
//	p - > setvelocity();
//	p - > move(0.1);
//}
//p - > display();
