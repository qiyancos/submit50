#if 0
	shc Version 3.8.6, Generic Script Compiler
	Copyright (c) 1994-2006 Francisco Rosales <frosal@fi.upm.es>

	shc -r -f ./setup 
#endif

static  char data [] = 
#define      msg2_z	19
#define      msg2	((&data[4]))
	"\377\001\344\004\151\327\260\103\037\047\365\374\215\065\007\031"
	"\306\364\112\154\055\372\054\167"
#define      lsto_z	1
#define      lsto	((&data[24]))
	"\376"
#define      shll_z	10
#define      shll	((&data[25]))
	"\376\373\112\363\057\036\012\300\011\127\007\357"
#define      tst2_z	19
#define      tst2	((&data[41]))
	"\326\305\146\242\157\230\250\271\134\024\201\252\277\021\370\211"
	"\350\075\123\147\127\074\071\240\072\002"
#define      date_z	8
#define      date	((time_t*)(&data[72]))
	"\362\302\234\312\040\233\314\004\237\011\145\121\236\171\221\143"
	"\340\103\154"
#define      chk2_z	19
#define      chk2	((&data[84]))
	"\005\125\014\245\043\227\263\014\361\251\000\336\003\173\333\272"
	"\050\052\031\305\111\250\365\100"
#define      tst1_z	22
#define      tst1	((&data[109]))
	"\075\367\271\012\342\112\044\000\243\126\317\046\061\237\347\302"
	"\347\074\257\326\221\214\254\154\206"
#define      pswd_z	256
#define      pswd	((&data[143]))
	"\014\374\257\376\277\113\311\337\347\225\344\206\165\351\120\044"
	"\331\170\367\236\120\301\067\264\142\037\173\252\005\274\377\076"
	"\132\304\030\167\306\347\031\025\132\147\214\320\120\335\364\051"
	"\125\354\310\246\255\377\133\017\037\327\272\045\223\271\143\356"
	"\176\174\146\105\143\177\132\276\346\347\216\067\304\203\141\032"
	"\157\051\300\034\051\034\054\110\363\346\156\207\240\321\166\037"
	"\115\334\144\261\134\277\157\103\246\376\172\153\201\333\206\361"
	"\005\107\015\056\143\072\167\126\040\345\335\301\267\123\340\005"
	"\060\104\266\214\003\046\317\252\044\112\026\246\046\234\227\053"
	"\343\245\132\107\337\322\235\000\267\173\302\157\317\242\164\377"
	"\347\053\213\353\121\133\226\166\245\254\034\313\111\263\367\055"
	"\130\121\164\070\043\021\070\333\215\372\113\134\235\277\133\204"
	"\353\347\160\074\103\006\263\350\262\317\264\373\203\253\050\334"
	"\375\235\025\041\257\115\375\074\110\110\230\345\007\364\152\363"
	"\334\333\060\037\341\343\010\224\263\274\217\067\150\270\023\145"
	"\125\050\206\005\166\203\101\276\313\332\244\323\317\017\306\253"
	"\352\367\313\314\332\323\140\215\220\360\304\370\331\121\154\123"
	"\362\162\251\233\147\352\022\370\001\120\360\272\056\042\166\072"
	"\037\046\071\336\161\002\276\130\230\243\337\162\364\114\305\347"
	"\276\156\202\045\130\224\035\132\345\016\024"
#define      msg1_z	42
#define      msg1	((&data[448]))
	"\116\117\035\267\001\040\353\320\175\025\035\013\235\341\121\257"
	"\153\126\261\156\061\147\350\371\270\121\027\323\124\321\234\110"
	"\353\312\351\071\212\011\115\132\166\113\014\145\261\207\056\043"
	"\212"
#define      inlo_z	3
#define      inlo	((&data[495]))
	"\201\001\122"
#define      chk1_z	22
#define      chk1	((&data[500]))
	"\205\247\020\207\320\035\116\225\354\224\330\106\262\356\332\266"
	"\146\267\166\340\206\340\135\255\133\154\146"
#define      opts_z	1
#define      opts	((&data[525]))
	"\365"
#define      xecc_z	15
#define      xecc	((&data[528]))
	"\175\151\040\032\125\303\000\247\371\236\104\031\131\326\145\313"
	"\200\267\221"
#define      rlax_z	1
#define      rlax	((&data[545]))
	"\137"
#define      text_z	4783
#define      text	((&data[808]))
	"\123\146\361\336\124\156\002\345\312\230\153\162\363\327\330\275"
	"\306\143\340\112\015\135\263\305\357\061\255\014\374\345\333\120"
	"\114\315\057\241\073\061\206\005\311\362\167\275\312\117\172\220"
	"\263\133\333\301\271\217\206\251\300\064\266\275\032\221\016\147"
	"\136\075\010\232\156\217\237\070\201\027\365\113\147\160\334\033"
	"\314\270\334\205\107\143\057\010\230\345\305\262\166\323\031\325"
	"\020\042\157\177\262\017\270\063\047\256\177\216\036\134\252\352"
	"\024\206\160\133\352\237\144\202\204\051\064\373\375\116\320\016"
	"\161\100\216\043\117\106\126\166\364\326\005\023\062\257\376\106"
	"\066\156\242\041\016\006\243\223\060\330\216\056\047\137\074\230"
	"\240\312\273\357\021\022\146\006\350\154\031\032\034\027\141\122"
	"\206\003\164\224\012\027\050\072\360\267\150\027\027\245\257\267"
	"\160\152\247\201\175\015\210\145\172\242\200\226\271\341\351\100"
	"\345\135\325\357\165\375\052\145\265\223\175\314\070\054\203\251"
	"\227\052\053\024\070\263\172\263\125\372\112\017\333\063\117\301"
	"\221\044\260\007\042\333\155\327\156\352\244\247\026\047\120\256"
	"\122\173\303\213\057\075\147\102\350\373\160\234\071\102\174\306"
	"\231\243\025\054\051\027\345\051\136\212\266\024\275\140\062\167"
	"\070\210\137\210\021\231\201\066\372\025\166\214\376\045\005\151"
	"\074\361\251\045\102\006\242\054\002\053\057\152\335\006\214\016"
	"\316\107\242\031\005\237\155\133\270\310\133\134\011\315\275\071"
	"\070\313\336\121\132\354\163\367\260\261\034\053\007\276\361\031"
	"\023\263\070\266\257\056\011\171\112\066\204\301\220\036\142\322"
	"\010\133\376\306\121\022\354\015\067\005\036\315\247\015\211\275"
	"\225\261\101\122\303\220\003\371\226\350\200\033\335\225\024\113"
	"\115\144\167\232\151\120\204\003\360\355\157\036\370\113\017\360"
	"\163\062\050\277\375\150\360\004\240\313\252\366\240\013\363\236"
	"\320\251\016\242\240\103\117\214\257\030\246\031\017\032\315\071"
	"\307\147\253\345\142\137\016\033\344\314\316\006\267\170\231\104"
	"\313\315\126\053\360\364\376\143\335\101\375\203\033\300\176\031"
	"\141\317\275\152\204\074\222\203\213\360\362\053\300\014\056\076"
	"\116\251\362\131\243\046\215\065\336\076\252\243\341\377\031\166"
	"\212\264\227\332\002\277\161\220\064\307\323\345\054\016\272\154"
	"\371\371\341\017\162\070\215\227\346\243\170\167\043\241\223\300"
	"\161\054\040\216\236\220\177\031\204\257\371\023\067\213\347\342"
	"\142\331\025\266\226\315\150\127\332\052\354\220\361\320\157\115"
	"\031\252\314\367\174\167\177\143\315\073\014\077\114\226\131\012"
	"\200\207\026\251\026\077\340\050\306\206\346\325\113\033\030\150"
	"\227\153\030\040\170\004\157\053\005\155\351\016\036\222\241\075"
	"\111\146\203\275\217\011\357\320\342\141\122\325\210\155\376\055"
	"\373\126\204\346\126\175\132\004\030\032\250\265\320\072\335\240"
	"\242\351\007\042\010\177\325\075\012\161\166\032\217\137\112\176"
	"\173\304\247\172\015\050\227\037\157\142\330\201\224\101\027\171"
	"\133\002\155\061\124\020\062\171\223\302\340\034\165\313\161\255"
	"\315\006\032\124\222\357\056\140\243\357\304\007\322\176\244\052"
	"\351\205\304\127\076\256\020\247\202\212\076\002\023\117\047\175"
	"\251\273\074\243\023\155\372\020\032\260\036\122\141\364\234\114"
	"\000\174\025\234\217\306\176\352\351\365\071\041\071\226\041\001"
	"\343\233\061\221\002\114\363\307\357\100\325\316\003\133\005\174"
	"\331\046\342\220\223\013\345\006\136\337\301\367\044\017\115\332"
	"\304\307\042\224\160\200\041\277\136\120\047\271\020\260\345\017"
	"\222\200\135\341\143\272\154\344\075\251\172\153\017\051\125\343"
	"\255\314\067\300\077\343\261\236\164\374\204\234\134\013\301\046"
	"\267\217\143\346\216\263\005\271\270\065\364\056\254\126\040\076"
	"\345\012\232\244\205\233\076\102\362\205\043\025\011\131\127\245"
	"\125\127\262\357\245\362\111\114\232\360\343\200\020\166\313\273"
	"\326\211\271\341\147\047\317\322\005\250\251\167\201\041\356\312"
	"\335\373\236\307\157\316\114\136\302\023\001\210\165\074\302\275"
	"\023\261\333\210\237\323\113\052\313\203\334\022\151\106\246\365"
	"\325\113\120\372\360\324\265\005\222\043\354\216\215\227\021\062"
	"\020\231\335\330\176\272\100\104\014\221\375\311\344\350\050\174"
	"\250\072\277\111\357\304\121\013\222\057\172\052\361\156\361\023"
	"\166\362\077\155\157\211\353\302\060\251\263\007\173\205\172\271"
	"\132\221\001\242\163\217\125\224\356\022\054\106\155\003\064\017"
	"\303\022\130\137\227\364\345\232\131\327\010\052\272\221\240\315"
	"\363\362\042\052\374\205\065\054\022\234\220\052\220\357\232\203"
	"\351\165\320\240\235\157\107\244\001\040\122\244\254\255\116\057"
	"\056\253\201\233\140\246\245\113\275\144\105\050\264\332\332\330"
	"\302\332\126\011\020\272\125\243\371\123\040\343\134\353\271\374"
	"\374\012\206\274\141\252\255\111\236\221\312\364\041\261\017\203"
	"\244\235\224\072\033\140\250\202\037\013\053\150\312\370\075\361"
	"\152\214\331\347\160\261\261\074\347\246\101\326\274\374\021\151"
	"\306\376\156\203\226\017\237\160\066\277\146\211\364\017\323\365"
	"\353\020\252\151\334\224\350\364\074\127\003\351\136\000\317\233"
	"\025\333\335\316\212\111\350\236\220\262\053\031\154\340\331\133"
	"\122\073\037\357\161\253\317\346\173\202\347\273\355\012\216\343"
	"\323\034\353\001\356\262\124\262\103\023\067\366\353\353\203\262"
	"\377\133\005\075\335\370\206\052\146\135\036\314\200\317\210\101"
	"\115\114\071\035\352\312\364\110\107\202\354\147\121\117\045\162"
	"\017\116\247\074\053\261\244\305\117\217\311\133\301\150\040\161"
	"\101\165\173\237\167\003\303\213\030\056\054\255\032\156\020\271"
	"\063\061\100\014\366\024\355\035\227\276\357\354\353\202\346\330"
	"\302\134\127\313\237\362\313\377\312\107\256\010\224\005\377\240"
	"\320\270\153\007\364\146\210\004\301\333\010\245\376\320\153\351"
	"\114\116\274\024\100\206\112\033\236\035\130\015\021\075\210\271"
	"\324\350\155\332\201\330\007\257\312\342\354\200\213\306\040\032"
	"\045\036\273\062\251\004\051\276\345\013\320\347\354\347\321\134"
	"\100\106\331\336\261\361\346\377\326\326\136\242\143\166\210\361"
	"\245\030\021\351\047\047\320\072\064\115\013\222\101\323\361\077"
	"\153\021\147\047\027\143\150\007\233\127\222\324\171\174\270\060"
	"\234\032\144\177\263\374\103\102\213\132\053\273\324\145\363\121"
	"\360\221\006\032\377\021\250\106\373\150\074\323\210\166\164\051"
	"\212\313\204\153\134\027\232\070\155\120\366\266\231\256\006\275"
	"\377\115\215\233\252\133\010\120\051\075\377\261\156\236\200\110"
	"\176\107\172\332\273\104\053\306\125\340\303\317\340\262\312\100"
	"\061\031\045\142\306\315\371\272\036\142\016\272\200\122\110\314"
	"\315\013\135\250\306\120\127\164\261\207\101\370\067\151\121\006"
	"\162\117\124\124\116\027\137\226\273\042\046\274\372\301\164\135"
	"\375\160\330\273\077\111\030\177\002\052\100\062\304\357\002\000"
	"\132\172\140\007\071\125\070\360\257\362\232\257\034\017\007\333"
	"\216\276\121\111\120\153\000\174\152\334\152\255\240\077\043\164"
	"\025\062\005\207\273\330\166\037\156\174\223\073\022\206\122\122"
	"\310\000\107\227\343\056\061\140\076\127\174\104\260\322\075\357"
	"\304\076\217\024\047\110\346\100\263\301\221\252\275\063\076\337"
	"\200\323\210\321\036\206\164\005\242\247\072\352\056\100\076\260"
	"\165\312\202\334\224\372\222\042\062\336\340\357\266\311\331\023"
	"\175\215\257\001\346\340\145\330\325\000\362\203\377\163\340\313"
	"\333\334\260\074\254\154\046\022\132\070\136\002\327\302\057\317"
	"\354\365\122\075\352\027\147\260\322\145\057\204\374\054\316\141"
	"\324\300\033\340\303\160\347\166\000\311\133\144\354\207\046\004"
	"\306\141\356\375\200\311\144\331\103\310\212\071\370\242\247\166"
	"\176\024\246\256\170\143\374\160\076\156\005\131\056\112\062\342"
	"\247\060\001\275\027\000\143\117\334\145\057\103\112\175\102\102"
	"\275\226\111\324\035\117\314\361\245\340\207\077\076\131\315\273"
	"\167\106\010\032\161\247\053\244\072\177\134\021\337\146\250\112"
	"\277\330\271\027\123\204\112\030\031\050\237\255\356\351\365\155"
	"\225\160\260\106\337\262\250\006\354\152\224\314\050\025\204\304"
	"\247\172\361\355\073\266\156\015\150\371\143\177\244\122\111\020"
	"\336\111\363\266\020\364\321\155\170\013\307\253\272\046\077\307"
	"\211\307\270\006\202\313\217\200\073\007\265\166\056\030\125\236"
	"\001\210\136\151\262\054\375\262\326\336\306\126\322\120\064\020"
	"\027\307\125\051\202\324\053\217\334\117\026\371\173\121\067\120"
	"\036\000\154\113\175\334\333\232\205\333\165\372\347\244\337\275"
	"\246\274\245\174\173\240\326\000\211\301\325\240\333\226\112\322"
	"\004\125\123\175\060\171\370\231\333\143\364\122\345\142\351\205"
	"\307\101\060\167\144\265\341\360\071\004\341\336\273\172\370\013"
	"\003\351\134\172\231\050\277\023\226\327\126\034\020\161\323\367"
	"\311\135\362\071\026\264\214\167\324\162\366\211\174\215\053\157"
	"\236\366\067\063\054\244\145\160\265\320\324\125\072\022\302\113"
	"\341\326\040\071\132\147\233\055\321\177\235\067\314\260\175\335"
	"\156\215\010\250\011\350\245\073\107\354\075\124\026\166\310\262"
	"\076\003\023\375\000\277\152\256\266\306\366\275\310\175\143\224"
	"\162\155\033\271\043\117\107\021\331\155\125\367\222\345\174\225"
	"\224\147\146\216\114\255\242\010\304\347\331\031\357\030\312\272"
	"\136\027\237\112\363\044\251\336\331\234\235\151\243\234\313\047"
	"\250\310\027\145\074\042\075\230\311\051\002\115\101\102\364\174"
	"\174\323\321\371\361\102\344\133\135\123\341\144\314\345\074\252"
	"\133\212\011\302\202\155\216\003\124\146\030\072\174\000\044\242"
	"\201\135\042\155\370\124\132\351\223\035\357\206\354\015\226\155"
	"\063\017\254\062\034\245\212\366\365\370\043\021\221\255\153\372"
	"\106\266\237\130\166\041\302\111\122\167\062\317\113\155\024\247"
	"\002\101\152\277\043\157\254\005\340\157\237\372\212\123\337\071"
	"\330\151\320\063\103\245\050\030\126\274\107\001\042\154\326\023"
	"\227\307\025\207\333\122\323\361\235\343\052\246\030\361\176\041"
	"\053\027\321\042\230\067\220\224\141\156\130\345\354\136\125\114"
	"\340\303\061\373\366\147\253\363\143\044\056\204\072\307\177\052"
	"\242\150\063\063\207\330\130\354\314\024\234\011\350\011\274\303"
	"\014\043\116\242\316\046\207\342\111\201\356\056\113\211\325\331"
	"\067\174\234\124\354\104\075\027\057\363\010\203\124\331\120\323"
	"\006\340\276\314\161\154\222\274\317\003\035\351\046\072\133\126"
	"\262\212\301\210\212\375\166\312\326\027\273\263\017\270\267\214"
	"\063\071\356\362\017\052\303\230\141\075\057\315\377\054\347\102"
	"\235\030\162\201\076\140\304\170\103\160\367\310\343\331\037\073"
	"\016\014\047\346\143\153\360\203\152\216\125\031\324\142\157\077"
	"\003\273\067\076\351\100\103\015\360\363\067\021\262\015\054\320"
	"\032\115\236\272\017\267\017\266\161\012\167\254\146\006\260\001"
	"\201\275\322\171\044\364\140\352\172\323\261\323\361\151\174\143"
	"\003\227\362\061\020\125\206\165\277\057\247\277\105\217\113\051"
	"\050\003\051\063\316\151\037\277\150\013\014\047\034\345\366\364"
	"\354\305\276\207\073\360\225\175\206\370\174\161\313\213\176\373"
	"\047\370\220\207\106\355\222\273\160\310\043\035\274\202\161\246"
	"\020\165\163\277\115\115\132\137\043\040\234\133\112\375\362\276"
	"\005\204\033\224\252\031\253\307\155\361\301\322\146\200\203\132"
	"\100\241\354\200\016\251\311\300\352\051\241\313\377\271\044\175"
	"\363\270\265\027\066\257\010\347\165\253\136\213\306\012\023\133"
	"\137\015\350\206\246\266\075\050\177\230\233\364\342\347\312\317"
	"\037\131\235\212\071\077\377\160\047\165\224\232\006\365\314\077"
	"\356\225\031\123\126\043\235\303\304\340\034\125\145\202\330\136"
	"\011\236\075\252\237\033\254\317\001\044\067\132\202\211\101\362"
	"\044\313\307\320\144\026\224\001\346\216\002\363\372\003\364\034"
	"\066\270\041\305\330\314\357\260\077\347\127\005\160\215\016\377"
	"\177\173\306\034\271\141\224\266\116\142\115\223\174\027\037\115"
	"\261\243\155\155\112\221\162\223\137\224\354\171\315\317\322\156"
	"\042\321\040\176\220\210\120\273\264\312\347\361\231\274\376\077"
	"\133\223\005\321\175\040\030\261\042\006\262\054\111\065\021\070"
	"\031\373\303\143\324\331\347\217\032\177\255\061\365\212\070\130"
	"\242\360\222\216\327\064\275\300\071\307\374\326\275\341\127\252"
	"\251\031\056\147\241\132\146\126\155\346\162\021\207\306\134\374"
	"\151\251\332\241\164\143\005\321\352\234\360\305\127\045\121\205"
	"\363\142\062\154\277\007\032\315\044\235\375\133\215\343\061\066"
	"\100\256\334\215\355\172\112\012\257\051\323\147\360\120\142\317"
	"\135\234\330\054\027\265\015\362\122\162\343\264\204\340\021\166"
	"\067\055\137\012\377\314\175\072\021\347\225\042\344\255\003\376"
	"\132\041\356\204\014\047\051\307\002\035\175\012\133\255\157\265"
	"\375\177\060\001\326\222\337\245\211\270\063\153\300\202\103\162"
	"\313\172\213\254\352\212\307\204\024\146\274\261\130\023\024\315"
	"\044\205\052\116\234\266\120\107\202\002\252\003\126\053\061\371"
	"\274\346\126\224\140\014\352\140\344\136\201\266\033\150\104\303"
	"\225\172\123\115\276\030\073\007\076\220\012\053\375\334\105\150"
	"\031\000\160\165\037\301\220\175\323\125\000\225\203\360\143\262"
	"\251\013\327\063\275\364\274\321\023\036\164\135\202\167\064\242"
	"\060\320\035\046\323\306\336\062\242\240\130\050\332\072\321\012"
	"\333\340\123\130\300\361\256\125\176\201\024\115\145\366\034\277"
	"\210\051\126\104\374\210\304\353\104\351\314\207\344\073\203\073"
	"\362\371\117\317\146\217\203\053\324\121\373\077\003\360\044\204"
	"\275\372\303\324\347\320\355\336\077\262\167\016\264\175\333\377"
	"\075\306\226\131\330\357\312\226\131\150\272\250\276\252\117\256"
	"\135\201\236\317\012\077\256\307\373\122\256\144\035\070\351\313"
	"\330\223\337\130\377\032\206\074\002\161\077\203\247\074\256\172"
	"\157\037\002\225\357\122\214\264\303\105\247\224\270\172\212\030"
	"\113\231\143\257\241\151\257\043\053\137\311\316\367\225\165\314"
	"\272\070\030\131\200\051\243\056\204\252\356\270\237\270\036\366"
	"\227\205\260\302\137\250\213\240\156\106\317\217\347\115\132\023"
	"\145\366\363\004\147\166\253\205\106\244\024\273\051\021\330\144"
	"\371\257\312\216\126\117\303\254\233\126\255\324\224\072\207\262"
	"\334\161\010\320\110\257\126\060\202\373\022\265\347\301\125\070"
	"\264\130\206\047\157\167\201\353\066\105\030\324\043\115\173\113"
	"\105\055\151\203\362\341\151\356\226\332\005\336\125\153\376\071"
	"\203\034\175\221\144\163\223\022\211\027\334\102\026\362\337\211"
	"\143\301\265\061\165\222\176\242\125\375\124\176\212\330\123\250"
	"\275\137\231\312\104\130\320\266\211\004\011\133\001\256\001\065"
	"\320\150\277\317\353\335\066\316\030\274\345\073\021\133\266\264"
	"\047\117\013\234\340\242\013\200\255\324\115\132\276\173\021\366"
	"\076\365\236\106\246\206\257\156\055\056\146\266\267\110\315\136"
	"\014\365\317\113\241\171\055\024\277\003\267\354\241\016\137\365"
	"\212\104\167\216\261\157\260\001\114\254\003\356\267\367\321\003"
	"\162\170\040\070\330\150\101\036\323\132\007\202\374\375\273\312"
	"\152\152\205\300\360\351\073\262\134\355\323\173\255\255\111\216"
	"\366\045\333\003\377\011\154\221\163\203\224\110\317\317\376\166"
	"\136\157\016\152\104\275\155\000\377\120\315\110\236\250\312\311"
	"\227\004\044\036\334\331\357\343\066\006\157\021\364\360\254\024"
	"\112\004\045\063\163\254\300\251\341\241\363\234\145\247\205\107"
	"\374\115\342\234\332\304\337\152\022\273\135\103\101\322\231\163"
	"\176\106\007\173\074\233\046\102\367\275\006\143\353\261\340\267"
	"\132\027\220\015\207\145\000\341\173\245\173\146\176\041\223\237"
	"\111\272\333\170\301\051\370\330\322\355\235\034\364\024\177\140"
	"\201\271\170\101\044\221\325\302\251\016\004\355\104\045\126\005"
	"\324\076\360\066\321\161\220\362\163\310\055\310\364\137\202\175"
	"\127\372\225\221\312\363\002\206\172\005\022\032\126\150\332\156"
	"\365\207\113\104\017\341\036\147\101\323\110\142\324\200\101\225"
	"\252\057\240\304\221\156\037\106\073\217\205\363\007\355\030\361"
	"\135\255\101\200\156\301\313\157\062\120\114\342\207\175\122\230"
	"\042\105\154\002\172\322\317\207\141\273\315\103\311\120\257\167"
	"\050\003\267\276\105\337\172\365\214\320\174\005\307\215\027\351"
	"\346\352\116\263\351\310\242\115\012\322\070\060\160\246\356\034"
	"\253\365\202\021\152\020\357\104\132\056\111\012\207\226\312\071"
	"\226\170\315\345\014\324\176\036\305\315\234\374\052\032\070\274"
	"\267\233\064\001\366\124\134\343\203\127\220\222\150\177\356\060"
	"\214\320\101\155\335\351\331\047\342\214\304\334\376\062\247\154"
	"\154\155\173\212\336\016\167\226\043\034\067\021\072\062\317\021"
	"\021\161\110\221\223\353\322\120\065\106\272\257\103\236\257\164"
	"\161\103\311\256\077\317\022\146\127\251\030\062\371\027\162\315"
	"\024\371\344\326\372\266\101\057\043\126\245\077\220\240\005\244"
	"\047\342\154\053\314\120\064\215\147\167\353\341\354\216\310\044"
	"\210\016\154\147\173\323\354\131\201\263\356\373\203\036\344\257"
	"\216\275\312\073\360\076\265\012\036\154\266\064\053\030\175\365"
	"\232\211\343\321\321\252\211\076\331\154\374\160\331\347\250\102"
	"\373\006\132\313\302\366\365\070\154\212\172\250\113\264\366\305"
	"\012\353\257\264\235\245\042\200\021\234\336\077\060\104\177\032"
	"\112\026\102\212\044\135\163\124\014\044\057\302\311\113\254\112"
	"\260\360\051\133\144\332\315\106\121\266\345\036\205\015\325\342"
	"\055\004\112\302\272\250\067\116\020\241\114\372\177\314\076\026"
	"\275\354\057\360\375\345\230\177\262\144\044\257\327\276\135\325"
	"\212\261\153\245\125\005\060\302\145\002\133\214\115\160\014\211"
	"\233\120\247\317\377\110\165\036\220\265\062\005\377\135\364\317"
	"\054\114\256\364\343\046\234\137\324\363\312\153\105\122\044\140"
	"\153\151\157\203\226\224\011\036\202\210\067\250\047\176\351\323"
	"\103\277\112\107\074\004\202\044\351\350\031\076\231\140\035\226"
	"\066\203\374\007\241\307\162\062\274\266\274\172\323\376\227\261"
	"\167\276\261\354\023\253\155\132\370\321\230\254\215\354\344\351"
	"\265\176\142\247\336\274\376\217\334\376\175\231\127\250\310\062"
	"\043\072\007\104\161\202\342\177\041\027\311\163\314\367\336\123"
	"\250\125\363\332\217\247\053\334\232\234\236\327\301\050\002\077"
	"\066\236\274\225\275\264\244\076\047\203\231\077\166\374\050\146"
	"\130\140\222\014\125\235\217\371\266\061\220\003\255\012\025\122"
	"\135\207\335\240\137\300\326\034\032\053\154\134\112\246\031\125"
	"\027\277\025\320\025\004\131\170\076\325\024\031\124\203\227\103"
	"\310\336\353\261\317\064\120\272\316\051\124\376\054\160\320\133"
	"\054\207\317\374\164\346\063\325\113\372\022\232\134\167\231\261"
	"\047\051\052\041\236\027\032\173\322\273\044\040\016\372\306\075"
	"\243\233\164\124\226\050\351\333\114\265\254\014\313\310\124\240"
	"\073\151\111\066\370\244\131\136\054\122\017\154\333\213\345\075"
	"\317\372\225\100\072\345\346\171\372\103\025\143\342\302\222\334"
	"\256\317\245\042\045\027\123\266\126\213\157\201\332\304\371\351"
	"\037\211\235\141\174\130\307\214\023\134\132\101\134\313\304\236"
	"\220\120\344\055\140\254\222\101\162\334\362\105\152\005\167\061"
	"\257\102\074\167\345\304\026\000\207\035\014\162\110\011\062\077"
	"\133\033\304\240\207\261\065\137\002\275\245\330\234\242\367\220"
	"\374\225\002\110\171\037\261\326\160\255\267\004\132\113\027\024"
	"\077\070\377\064\341\311\146\242\307\202\364\154\202\154\333\325"
	"\173\105\056\173\163\234\272\342\027\031\265\277\231\157\041\041"
	"\214\057\130\277\251\164\266\212\255\150\237\077\033\123\352\335"
	"\203\053\317\003\232\351\333\032\240\357\142\306\311\117\105\354"
	"\361\065\165\341\122\362\277\175\076\051\265\202\341\137\257\267"
	"\334\363\222\340\113\030\313\170\301\232\074\276\026\255\116\105"
	"\253\024\123\337\145\076\367\345\357\310\075\206\152\073\324\177"
	"\055\242\317\303\150\245\022\241\370\102\230\314\316\377\133\235"
	"\303\044\141\244\224\231\154\353\114\232\163\207\354\255\253\102"
	"\057\111\235\364\243\135\336\001\067\006\133\202\322\073\272\037"
	"\075\115\167\314\067\134\317\013\040\134\052\167\337\123\137\127"
	"\001\212\045\310\203\111\222\271\376\273\060\165\057\262\233\045"
	"\147\330\140\142\145\045\047\076\054\275\153\330\114\007\057\314"
	"\052\272\137\227\127\123\223\270\114\126\057\065\276\277\074\377"
	"\026\217\120\377\147\112\234\033\077\362\100\301\103\253\335\177"
	"\116\224\076\030\177\320\226\330\267\151\134\330\023\255\156\237"
	"\260\375\276\377\112\234\336\033\060\234\337\053\026\375\215\250"
	"\043\136\340\011\211\151\310\075\162\354\352\312\104\366\020\327"
	"\040\217\264\001\123\301\126\354\225\261\352\017\357\022\303\375"
	"\342\002\133\123\343\207\221\202\233\202\154\100\340\211\342\035"
	"\205\144\033\271\356\355\250\135\000\360\151\356\152\142\231\371"
	"\277\016\023\220\172\263\365\035\324\306\254\004\144\314\300\124"
	"\271\237\310\343\366\243\005\324\320\304\267\176\037\111\364\062"
	"\315\054\305\344\020\377\317\276\047\257\215\164\223\002\310\350"
	"\323\154\077\135\216\103\044\333\061\122\175\325\202\234\030\026"
	"\101\230\173\052\352\106\100\273\366\213\225\304\224\047\065\244"
	"\311\007\113\322\311\317\366\207\311\256\275\150\227\175\206\024"
	"\045\373\314\012\205\276\060\125\035\231\026\022\353\226\316\142"
	"\014\001\017\141\233\243\262\227\214\030\157\010\105\067\221\030"
	"\263\267\076\305\244\205\130\025\017\267\103\364\172\144\270\030"
	"\070\230\222\015\074\352\314\160\370\163\263\324\110\117\377\067"
	"\170\366\342\337\016\074\341\352\000\161\003\202\122\273\241\150"
	"\113\052\325\140\032\014\235\171\362\360\005\275\054\321\004\020"
	"\373\073\255\277\126\006\366\361\311\205\067\351\020\305\055\075"
	"\221\351\355\225\322\162\150\336\013\313\203\261\110\260\033\273"
	"\353\312\064\271\042\145\034\256\202\344\226\337\355\037\306\352"
	"\022\200\344\020\172\076\204\070\210\224\024\274\343\325\116\010"
	"\205\126\053\140\303\003\317\255\247\166\304\317\306\163\041\102"
	"\066\255\161\163\353\366\254\164\212\300\061\156\225\200\166\033"
	"\326\242\174\231\245\113\107\114\301\013\034\210\176\076\313\264"
	"\353\074\050\327\062\324\114\275\225\175\053\052\375\241\105\323"
	"\103\302\155\351\015\264\066\317\277\122\127\076\220\042\363\173"
	"\137\033\123\221\360\237\116\206\034\172\260\032\033\366\355\137"
	"\270\132\110\306\016\176\225\316\321\354\014\141\017\377\335\156"
	"\033\060\000\014\317\117\222\354\311\103\006\345\072\364\105\363"
	"\116\215\271\135\014\116\054\336\073\071\077\112\070\035\271\124"
	"\115\272\141\035\011\363\011\323\067\020\270\161\004\375\145\123"
	"\213\036\261\230\154\335\166\250\026\266\363\117\323\254\243\041"
	"\146\004\076\160\370\110\103\060\130\373\242\135\371\007\260\205"
	"\045\141\035\222\076\224\072\125\112\055\244\036\332\110\100\101"
	"\115\177\261\106\307\364\166\040\360\030\175\351\037\056\157\105"
	"\217\214\327\316\041\022\043\153\100\310\212\032\021\312\133\137"
	"\111\015\245\021\001\034\061\362\065\257\334\124\335\113\232\155"
	"\327\161\073\370\204\137\144\304\050\357\337\071\271\073\230\002"
	"\110\076\024\111\132\106\073\217\365\027\344\323\143\176\100\072"
	"\360\173\063\165\333\230\071\003\207\031\074\100\124\325\103\234"
	"\023\130\346\155\236\042\375\223\072\341\147\235\140\247\327\121"
	"\043\013\306\376\244\377\001\053\031\076\154\155\023\260\011\046"
	"\010\357\223\246\022\221\072\114\162\241\351\323\111\301\044\154"
	"\314\352\153\160\352\154\234\003\252\010\160\275\270\172\344\301"
	"\152\170\150\174\011\242\310\173\104\261\117\215\162\163\372\077"
	"\136\145\260\111\322\114\114\174\124\275\072\015\070\036\316\243"
	"\226\066\037\240\331\350\033\036\231\153\254\014\336\246\114\075"
	"\014\374\206\336\110\323\133\234\221\226\252\312\265\171\155\114"
	"\260\215\354\211\165\010\247\017\163\123\033\121\372\150\217\006"
	"\144\025\344\254\351\100\111\172\326\363\104\213\155\262\327\035"
	"\077\303\247\264\313\116\303\076\242\337\220\235\107\037\243\253"
	"\065\210\130\036\310\241\231\237\225\336\052\002\220\002\040\317"
	"\306\307\203\221\026\107\320\271\047\141\126\157\201\372\032\266"
	"\202\163\325\113\025\156\353\252\115\025\255\335\030\316\255\336"
	"\225\060\160\253\170\100\144\237\241\273\016\042\265\051\331\067"
	"\235\256\203\262\035\156\135\153\204\012\110\234\330\365\173\156"
	"\046\353\032\237\053\177\077\315\072\115\360\357\167\311\047\024"
	"\170\253\307\226\031\044\002\236\056\112\073\007\100\266\166\147"
	"\241\220\006\315\017\106\233\112\224\213\071\013\125\141\040\316"
	"\014\347\145\046\013\147\304\072\262\377\102\363\265\271\132\127"
	"\111\141\045\131\247\300\243\073\114\335\107\242\077\150\161\113"
	"\117\326\162\133\076\066\226\360\066\331\344\354\222\076\103\333"
	"\240\151\065\110\051\331\203\166\267\313\030\366\063\211\102\202"
	"\140\264\336\236\353\164\217\041\115\164\016\340\262\122\274\123"
	"\273\361\233\345\313\037\133\202\352\164\171\035\376\274\240\136"
	"\160\176\375\134\363\215\176\101\001\214\041\264\336\336\007\231"
	"\317\243\176\233\302\332\036\255\117\227\312\115\123\153\254\304"
	"\351\252\040\335\067\237\037\071\053\101\355\011\037\365\243\357"
	"\231\042\213\134\374\251\011\114\100\323\231\224\076\106\130\050"
	"\360\171\006\050\030\046\141\104\147\117\115\207\105\360\167\336"
	"\022\002\072\017\253\103\134\354\027\366\200\126\074\331\177\055"
	"\123\206\125\154\254\266\260\024\006\376\234\113\357\023\052\001"
	"\025\144\021\301\250\156\255\300\144\056\027\240\010\226\315\133"
	"\035\043\310\312\332\170\336\340\167\172\054\146\216\126\150\244"
	"\273\171\145\143\347\023\044\114\101\073\354\111\322\272\245\357"
	"\336\155\271\270\346\230\231\135\023\305\303\241\034\053\105\327"
	"\245\253\072\215\276\136\331\377\232\306\111\154\201\356\134\140"
	"\134\025\030\102\256\262\237\302\170\143\143\224\216\251\153\064"
	"\124\246\301\023\005\233\023\237\141\134\014\343\113\150\103\247"
	"\176\134\352\055\016\212\357\207\355\122\033\174\374\207\260\121"
	"\056\162\144\064\015\167\324\157\323\340"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	0	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned)chkenv;
	mask ^= (unsigned)getpid() * ~mask;
	sprintf(buff, "x%x", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%u %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%u %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && date[0]<time(NULL))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		if (text_z < hide_z) {
			/* Prepend spaces til a hide_z script size. */
			scrpt = malloc(hide_z);
			if (!scrpt)
				return 0;
			memset(scrpt, (int) ' ', hide_z);
			memcpy(&scrpt[hide_z - text_z], text, text_z);
		} else {
			scrpt = text;	/* Script text */
		}
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, argv[0]);
		} else {
			scrpt = argv[0];
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
