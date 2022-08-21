// Copyright 2021 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package test;

public class NoSignatureChangeIncrementalJavacTestHelper {
    private NoSignatureChangeIncrementalJavacTestHelper2 mHelper2 =
            new NoSignatureChangeIncrementalJavacTestHelper2();

    public String foo() {
      return "foo";
  }

  public String bar() {
    return mHelper2.bar();
  }
}