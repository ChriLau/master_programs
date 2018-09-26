int foobar(int x, int y) {
  N5:
  x = x - y; // id: N5->N4
  if(x < y) { // id: N4
    goto N5;
  }
  return x; // id: N6->N1
}
