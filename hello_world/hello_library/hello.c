// Copyright (c) 2019, the Dart project authors.  Please see the AUTHORS file
// for details. All rights reserved. Use of this source code is governed by a
// BSD-style license that can be found in the LICENSE file.

#include <stdio.h>
#include "hello.h"
#include <sys/uio.h>

int main()
{
  hello_world();
  return 0;
}

int add(int x, int y)
{
  return x + y;
}

// Note:
// ---only on Windows---
// Every function needs to be exported to be able to access the functions by dart.
// Refer: https://stackoverflow.com/q/225432/8608146
void hello_world()
{
  printf("Hello World\n");
}

int doubler(int x)
{
  return 2 * x;
}
