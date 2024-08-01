# soln_template
My solutions template for recreational competitive programming and algorithmic coding problems. Notable quirks with this template, should anyone ever use it, are:

1. **Lack of macros** — Since I'm doing this for fun, I'm not worried about the minor speed penalty from not using shorthand. I also find it unreadable and don't want to develop any muscle memory to impede my normal coding.
2. **My own stdlib** — I'm also implementing a superset of data structures and algorithms from the standard library for fun. For reimplementations that exist in the standard library, the APIs are at parity so I opt to use it locally.

Feel free to fork it and make modifications or use it as a reference point. The directive resolving which standard library to use is set in CMake, so when you copy paste for online submission it will use `<bits/stdc++.h>`.
