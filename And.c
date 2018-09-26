int foobar(int x, int y) {
  int a = 2; // id: N3->N4
  if(x > 0) { // id: N4 goes to N5
    if(y > 0) { // id: N8 goes to N5
      a = 3; // id: N6->N5
    } else {
      a = 2; // id: N7->N5
    }
  } else {
    a = 2; // id: N7->N5
  }
  a = a - 1; // id: N5->N11
  return 2; // id: N11->N1
}
