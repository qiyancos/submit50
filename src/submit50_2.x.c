#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	shc -r -T -f ./submit50_2 
#endif

static  char data [] = 
#define      msg1_z	42
#define      msg1	((&data[7]))
	"\342\113\260\224\030\171\073\042\060\262\157\350\266\035\260\274"
	"\202\125\314\357\324\301\171\174\261\143\104\275\134\002\200\302"
	"\147\360\134\203\101\106\221\025\006\160\057\116\354\041\034\335"
	"\256"
#define      xecc_z	15
#define      xecc	((&data[50]))
	"\031\263\221\265\167\300\006\367\163\016\333\005\114\272\114\304"
	"\006"
#define      date_z	1
#define      date	((&data[66]))
	"\135"
#define      lsto_z	1
#define      lsto	((&data[67]))
	"\004"
#define      chk1_z	22
#define      chk1	((&data[71]))
	"\124\023\157\332\234\173\040\274\230\330\045\161\027\304\060\013"
	"\150\303\125\057\363\353\336\232\202"
#define      chk2_z	19
#define      chk2	((&data[94]))
	"\140\235\366\312\325\215\227\122\145\224\251\175\337\023\215\347"
	"\346\112\316\276\111\046"
#define      tst1_z	22
#define      tst1	((&data[116]))
	"\024\120\046\370\332\106\054\330\331\105\256\372\310\202\165\240"
	"\040\053\176\133\014\061\221\277\212"
#define      msg2_z	19
#define      msg2	((&data[144]))
	"\006\120\372\014\335\017\230\361\107\233\040\330\240\376\214\161"
	"\262\047\326\053\263\203\102\150\366\325\304"
#define      pswd_z	256
#define      pswd	((&data[217]))
	"\226\330\262\252\107\242\340\270\002\051\336\146\124\120\172\024"
	"\332\007\017\273\016\140\265\032\310\254\357\214\275\264\352\123"
	"\214\234\376\323\076\336\214\101\010\152\247\135\273\042\161\225"
	"\052\201\124\073\271\353\216\231\340\011\201\315\222\346\032\011"
	"\121\320\302\075\273\252\042\336\276\371\305\343\216\127\371\275"
	"\274\116\370\166\071\207\020\032\221\221\347\043\167\001\055\311"
	"\321\357\006\214\231\050\153\130\041\061\074\260\211\065\155\106"
	"\203\146\274\274\356\315\326\177\136\276\243\326\277\320\237\221"
	"\300\245\036\132\315\211\262\357\273\356\240\104\044\015\212\247"
	"\164\107\144\142\024\073\342\163\371\205\111\271\126\350\112\027"
	"\216\151\161\134\363\044\114\256\023\354\363\067\372\176\337\156"
	"\306\103\321\333\177\263\116\171\071\227\062\220\200\175\247\017"
	"\346\030\153\331\074\267\210\117\243\174\207\236\372\146\014\301"
	"\252\336\234\052\221\352\243\312\202\325\132\003\123\002\022\071"
	"\032\175\023\127\065\234\247\331\030\056\167\023\225\204\325\100"
	"\142\161\152\364\134\015\276\337\343\031\342\066\033\365\160\066"
	"\162\204\216\250\041\065\201\071\144\371\115\372\175\042\072\340"
	"\224\245\324\360\263\223\317\226\255\261\315\310\247\075\377\031"
	"\302\215\302\343\303\104\035\047\075\153\041\273\216\134\233\042"
	"\001\160\121\070\342\006\122\252\263\101\067\160\365\041\304\202"
	"\276\302\126\374\240\342\075\250\115"
#define      tst2_z	19
#define      tst2	((&data[496]))
	"\231\343\332\026\114\301\077\350\175\041\057\067\126\075\330\102"
	"\242\277\227"
#define      shll_z	10
#define      shll	((&data[516]))
	"\061\351\013\042\272\364\060\137\314\245\312\371"
#define      inlo_z	3
#define      inlo	((&data[527]))
	"\001\136\257"
#define      rlax_z	1
#define      rlax	((&data[530]))
	"\106"
#define      opts_z	1
#define      opts	((&data[531]))
	"\272"
#define      text_z	2094
#define      text	((&data[1029]))
	"\336\165\236\240\314\233\100\257\330\351\375\276\357\006\306\147"
	"\244\367\140\224\141\074\213\035\302\065\032\200\117\015\140\055"
	"\203\376\315\117\232\015\376\163\367\373\061\346\001\367\115\246"
	"\357\256\073\120\352\306\156\254\373\210\055\112\226\216\167\031"
	"\215\104\151\047\122\150\232\112\143\313\060\145\303\176\014\262"
	"\055\107\003\027\016\161\304\012\372\361\124\221\177\314\253\014"
	"\021\024\063\143\174\316\256\340\231\337\106\134\135\122\017\213"
	"\232\022\242\251\203\147\263\176\130\007\017\330\324\272\345\345"
	"\316\031\111\113\347\367\054\201\326\162\335\064\305\354\277\140"
	"\377\142\011\202\311\274\000\042\304\020\373\230\312\340\176\231"
	"\372\307\344\341\276\020\142\225\203\100\311\110\055\211\251\054"
	"\353\262\257\265\157\257\327\063\277\323\314\212\263\112\043\256"
	"\022\007\217\321\030\362\146\233\062\060\344\140\271\215\214\245"
	"\100\073\132\257\353\062\343\253\005\257\065\271\372\131\147\014"
	"\140\367\335\171\351\104\025\034\164\371\174\056\206\010\323\306"
	"\104\056\166\057\141\131\333\147\010\020\040\003\151\210\017\312"
	"\177\355\104\151\062\131\205\246\122\002\325\331\013\251\240\117"
	"\327\026\177\071\160\132\240\171\153\301\174\325\111\214\240\311"
	"\171\344\062\254\076\270\122\221\272\050\153\305\321\013\025\251"
	"\042\225\342\222\357\203\013\133\104\210\060\216\024\321\127\216"
	"\266\212\072\364\103\215\205\375\265\360\303\206\374\330\060\037"
	"\155\022\262\135\226\276\271\332\106\352\151\133\273\301\351\161"
	"\114\043\146\217\260\354\214\146\335\120\355\332\051\035\371\227"
	"\057\254\364\306\152\256\241\261\230\012\014\123\314\365\305\030"
	"\031\053\247\312\030\063\060\365\204\035\317\255\072\311\104\152"
	"\165\071\060\337\347\321\221\177\334\235\323\250\222\230\300\253"
	"\304\147\166\334\233\246\322\037\303\241\315\376\153\021\151\340"
	"\113\231\300\062\153\121\261\107\356\205\360\201\035\260\055\341"
	"\030\243\276\263\111\220\323\015\062\240\014\235\261\165\175\375"
	"\016\076\057\172\220\341\301\176\146\261\000\204\142\055\146\172"
	"\320\044\056\032\264\001\050\347\241\064\204\123\251\002\120\270"
	"\100\145\307\157\313\233\002\202\234\267\277\060\143\070\220\003"
	"\046\027\127\375\105\300\375\031\061\200\322\244\373\242\044\144"
	"\157\150\217\245\131\202\141\100\373\133\223\145\023\212\331\235"
	"\266\011\030\124\376\013\116\063\142\071\321\363\204\024\266\340"
	"\022\062\335\156\307\063\331\347\245\050\040\135\364\031\271\271"
	"\045\272\002\377\277\204\077\320\264\014\124\003\115\366\333\165"
	"\037\041\161\237\020\322\361\362\117\252\064\047\164\041\233\057"
	"\365\151\134\360\161\116\074\306\044\271\353\163\203\022\116\333"
	"\153\062\330\064\051\247\227\101\030\072\075\112\015\021\320\154"
	"\265\023\312\276\206\016\021\111\217\273\210\171\316\037\225\216"
	"\127\016\101\136\107\161\274\124\150\310\015\012\161\247\074\352"
	"\345\324\130\321\326\133\226\315\322\022\011\045\012\040\176\151"
	"\207\240\153\235\335\276\246\175\213\362\044\124\323\164\202\303"
	"\274\204\355\352\260\225\005\005\062\046\147\302\156\307\147\150"
	"\053\131\212\125\032\113\045\350\333\100\332\030\034\337\035\320"
	"\077\224\346\336\116\016\363\045\002\201\134\010\037\273\310\354"
	"\361\355\306\366\112\263\026\372\242\105\357\003\150\010\203\024"
	"\277\162\215\211\333\361\101\170\373\366\344\222\363\110\117\336"
	"\330\266\320\174\063\204\026\022\054\361\060\025\234\375\145\150"
	"\174\023\175\346\353\206\310\136\040\126\177\236\101\343\315\131"
	"\144\141\022\177\312\123\362\351\062\275\100\364\140\371\266\166"
	"\044\224\126\272\106\026\233\065\067\374\176\030\057\130\150\221"
	"\336\216\321\226\116\353\311\322\334\200\244\244\017\015\271\007"
	"\235\222\275\361\221\075\065\036\236\063\120\112\352\013\210\004"
	"\317\123\066\015\146\314\075\236\017\346\132\052\145\301\076\152"
	"\300\256\364\200\237\112\210\304\342\241\114\045\203\260\221\317"
	"\206\045\270\046\043\236\370\210\024\201\366\230\235\265\303\343"
	"\220\015\125\236\040\252\273\000\277\316\335\126\320\264\370\225"
	"\022\303\231\000\171\231\226\210\156\036\131\065\146\162\201\112"
	"\277\241\244\303\265\141\154\241\200\003\245\132\250\143\164\166"
	"\237\254\265\053\261\311\006\277\270\225\315\312\166\177\026\061"
	"\037\156\131\046\365\251\075\325\366\220\225\156\014\306\225\343"
	"\310\005\347\335\222\332\131\133\127\356\251\252\031\212\244\055"
	"\150\367\110\114\301\335\125\074\245\224\271\151\151\343\000\041"
	"\131\263\151\325\326\126\035\033\220\121\210\013\211\207\101\315"
	"\107\111\024\104\065\154\252\050\161\073\315\341\347\362\105\067"
	"\023\233\110\023\210\266\045\235\077\254\241\237\166\126\014\250"
	"\230\163\165\172\303\166\123\312\244\222\014\363\266\110\267\022"
	"\016\227\145\356\152\313\020\115\237\011\356\310\374\270\106\161"
	"\314\152\221\147\272\017\342\357\033\201\133\033\310\036\065\154"
	"\163\364\010\001\152\103\235\370\362\177\134\266\147\077\345\070"
	"\156\357\341\200\125\306\336\003\333\346\161\126\135\145\110\253"
	"\325\364\342\367\256\236\230\032\025\333\052\334\132\054\052\137"
	"\343\375\111\052\203\376\052\342\075\373\301\375\003\233\104\025"
	"\156\211\215\321\256\221\325\151\274\242\007\162\252\367\170\115"
	"\070\223\305\247\070\275\210\004\162\135\001\106\360\150\376\145"
	"\136\013\162\336\070\023\004\011\306\015\304\334\263\134\216\144"
	"\371\352\266\116\323\107\252\003\353\374\001\006\057\340\207\272"
	"\307\275\355\212\207\156\343\274\063\223\331\043\125\234\345\120"
	"\127\123\223\354\215\216\074\347\307\251\373\074\365\137\237\311"
	"\032\017\126\357\324\217\331\155\227\120\324\315\327\214\124\107"
	"\111\035\307\113\230\000\242\325\012\001\112\003\116\000\034\226"
	"\200\224\133\100\004\206\343\003\367\105\305\266\375\173\114\212"
	"\233\316\156\007\101\037\036\175\041\023\246\262\174\346\040\123"
	"\067\115\107\321\155\213\132\212\342\217\254\341\340\343\017\170"
	"\205\251\156\227\341\340\317\055\340\335\143\052\143\001\200\110"
	"\025\264\213\346\235\103\371\304\307\125\061\077\121\260\064\271"
	"\261\367\014\322\031\347\022\217\025\212\316\160\046\103\105\307"
	"\342\312\114\070\170\035\307\066\121\246\050\204\006\324\073\202"
	"\322\313\002\264\246\357\174\146\052\305\365\375\003\135\317\114"
	"\376\052\256\206\161\072\346\214\315\155\131\013\106\047\065\326"
	"\062\331\311\042\073\361\365\342\377\133\024\300\154\275\261\172"
	"\043\376\277\161\170\011\114\272\202\267\215\353\111\272\160\310"
	"\217\170\263\371\117\202\057\324\276\055\044\156\060\001\017\046"
	"\353\376\367\373\073\313\107\266\010\324\337\364\074\202\253\130"
	"\355\106\131\254\166\376\134\123\202\256\040\032\004\175\030\205"
	"\106\265\244\126\005\312\107\233\222\243\040\363\066\366\077\032"
	"\041\265\134\232\157\040\313\134\055\261\224\357\014\040\201\031"
	"\277\004\000\117\107\163\361\270\355\374\337\353\330\235\167\217"
	"\061\366\054\101\243\111\340\105\261\151\336\361\162\267\267\162"
	"\251\203\106\013\345\261\237\105\061\066\253\012\312\037\231\144"
	"\332\365\324\070\315\252\111\327\122\271\370\336\301\300\200\062"
	"\132\275\202\276\366\074\132\317\000\375\267\133\212\223\242\166"
	"\204\321\215\171\150\310\314\154\020\120\367\367\322\021\074\376"
	"\211\036\046\130\266\026\330\157\176\104\001\232\344\266\337\007"
	"\370\302\211\125\170\152\361\237\202\213\310\052\063\315\271\062"
	"\154\022\032\331\222\172\240\323\371\065\266\132\066\132\177\341"
	"\031\020\145\335\007\006\245\102\067\207\031\034\326\127\145\332"
	"\363\122\356\342\326\230\015\311\354\244\024\100\105\070\153\341"
	"\131\364\226\021\243\133\001\047\113\164\046\367\030\173\206\070"
	"\174\315\276\253\301\275\063\232\201\365\034\070\310\022\103\240"
	"\327\006\124\352\231\307\215\203\363\170\056\221\310\360\175\152"
	"\240\327\346\370\310\213\326\151\224\046\062\125\031\150\105\110"
	"\320\022\265\014\032\310\012\263\314\013\017\157\247\115\126\246"
	"\157\116\274\047\300\263\000\172\161\004\076\055\247\010\314\332"
	"\024\200\355\055\237\177\344\101\213\071\102\354\034\262\233\030"
	"\202\011\155\201\366\301\223\241\117\056\317\141\201\305\302\373"
	"\171\162\105\034\304\002\353\171\263\053\235\201\201\043\174\075"
	"\131\120\362\376\244\116\047\012\170\333\066\070\256\056\124\111"
	"\157\350\367\241\106\252\366\031\053\322\351\257\076\203\167\053"
	"\210\161\223\246\020\304\204\241\303\344\233\245\360\200\146\026"
	"\343\323\363\274\274\265\001\117\245\113\074\211\226\374\264\050"
	"\124\241\300\165\376\110\007\155\237\046\377\304\333\131\175\036"
	"\363\241\344\124\104\105\251\156\117\373\026\130\040\256\026\031"
	"\331\341\045\346\130\254\135\002\255\224\016\001\063\134\363\314"
	"\006\320\337\123\073\371\067\345\331\120\232\113\276\123\356\152"
	"\005\054\044\120\132\214\200\112\373\167\047\254\151\147\065\266"
	"\360\255\322\122\343\271\042\122\247\043\137\376\130\173\020\225"
	"\225\200\256\127\253\024\372\145\030\201\217\223\013\314\271\316"
	"\174\012\032\061\025\064\040\161\261\120\314\174\337\157\201\353"
	"\051\355\136\217\204\000\027\341\323\324\333\222\066\276\321\105"
	"\127\177\006\272\026\144\023\364\332\130\320\172\155\371\156\337"
	"\327\322\344\302\030\370\344\217\155\370\015\362\041\054\054\055"
	"\034\012\056\225\003\114\306\122\325\145\326\103\065\315\000\034"
	"\103\203\337\114\334\230\351\367\370\125\166\273\323\013\017\264"
	"\337\213\216\365\311\135\150\363\033\101\352\044\243\074\144\331"
	"\077\075\257\223\100\334\263\171\273\023\135\255\341\350\214\002"
	"\331\100\114\126\073\217\333\037\252\106\205\021\043\076\137\115"
	"\375\102\211\355\351\261\112\076\223\353\167\262\207\272\100\026"
	"\317\356\163\005\271\327\174\204\160\021\263\254\165\141\346\066"
	"\235\155\375\100\354\003\360\154\050\001\372\307\054\260\131\270"
	"\015\020\231\233\336\071\006\232\371\371\374\121\151\373\203\105"
	"\174\223\262\352\257\103\102\052\022\372\371\272\312\200\363\374"
	"\116\367\122\063\120\136\336\211\103\224\042\115\040\274\261\253"
	"\370\320\314\224\115\026\203\064\350\347\243\042\002\072\143\010"
	"\223\326\274\142\377\347\227\360\271\355\147\135\234\164\027\260"
	"\251\327\102\217\206\321\104\201\036\332\244\320\300\347\020\365"
	"\010\254\124\030\315\154\006\065\320\265\326\026\315\220\013\161"
	"\236\172\315\251\171\103\106\373\276\255\070\305\325\323\123\343"
	"\074\317\213\174\270\276\376\354\013\173\140\027\066\174\302\032"
	"\204\003\157\311\126\151\367\024\176\077\132\004\220\022\141\267"
	"\164\261\322\303\102\205\102\347\017\335\101\362\242\166\037\106"
	"\164\336\202\250\324\053\311\110\012\036\172\305\064\035\066\345"
	"\220\336\347\261\220\341\053\164\072\342\034\074\304\127\213\067"
	"\220\352\125\373\113\022\157\052\113\253\377\320\305\366\002\377"
	"\240\000\051\026\174\070\351\347\112\000\110\041\034\051\316\207"
	"\074\165\142\250\371\123\125\174\244\112\254\240\010\004\130\034"
	"\271\043\007\011\065\026\235\044\167\062\160\173\343\036\202\050"
	"\303\240\025\022\053\227\325\230\316\215\313\110\262\245\117\226"
	"\272\241\114\214\162\156\036\326\067\042\006\002\271\242\325\364"
	"\113\134\203\135\076\332\126\055\111\275\317\131\132\076\223\200"
	"\062\320\141\364\117\310\246\117\114\010\175\262\203\116\326\261"
	"\150\213\262\221\162\124\305\366\250\157\371\370\047\071\171\132"
	"\012\332\117\132\242\365\251\357\376\047\241\201\165\170\063\336"
	"\003\345\157\166\072\065\155\342\244\146\333\314\240\124\047\253"
	"\056\166\005\321\154\256\301\152\326\142\354\113\333\037\051\337"
	"\005\231\125\077\316\303\041\163\051\374\100\312\120\147\165\177"
	"\336\172\121\112\051\022\265\377\164\241\112\117\301\164\056\306"
	"\016\204\005\335\107\047\121\161\043\221\073\164\371\261\363\330"
	"\053\104\042\124\126\327\124\313\171\236\033\072\023\111\000\041"
	"\316\006\376\026\055\117\207\120\341\303\304\333\164\270\263\240"
	"\374\325\365\123\255\111\036\046\350\071\141\373\203\141\035\122"
	"\150\034\150\225\154\360\346\116\263\252\051\050\143\334\311\137"
	"\262\276\263\140\010\321\206\360\013\350\354\217\112\012\341\262"
	"\046\111\107\223\072\055\341\355\330\012\026\073\347\337\233\232"
	"\236\116\372\246\040\200\226\053\151\203\272\263\215\234\145\264"
	"\345\255\107\037\332\051\015\263\064\044\356\034\004\212\266\242"
	"\330\260\110\370\061\337\043\232\143\336\115\360\172\263\245\140"
	"\140\355\200\073\026\216\356\113\262\335\147\266\147\035\131\100"
	"\315\242\070\376\201\134\231\345\073\346\326\265\232\173\026\372"
	"\150\226\066\177\044\045\312\327\002\062\215\152\117\346\252\035"
	"\210\343\033\012\077\264\357\172\233\306\060\066\101\106\061\252"
	"\334\147\051\001\214\364\330\217\046\146\372\166\115\244\223\326"
	"\210\257\341\307\144\321\102\000\227\162\066\330\270\147\202\225"
	"\317\254\227\134\241\160\353\310\326\346\077\044\213\322\372\023"
	"\202\333\332\347\254\035\347\104\217\035\034\110\205\237\335\124"
	"\114\165\260\356\345\234\266\274\203\365\340\016\310\332\041\112"
	"\266\374\062\143\031\031\247\251\067\304\361\274\144\317\021\260"
	"\104\302\236\052\137\125\346\342\113\307\360\023\242\022\136\130"
	"\017\220\274\051\252\143\322\341\047"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */

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
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !defined(TRACEABLE)

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
#endif /* !defined(TRACEABLE) */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
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
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
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
