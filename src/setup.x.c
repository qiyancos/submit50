#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	shc -r -T -f ./setup 
#endif

static  char data [] = 
#define      date_z	1
#define      date	((&data[0]))
	"\331"
#define      chk1_z	22
#define      chk1	((&data[6]))
	"\324\243\065\222\275\131\317\370\064\070\022\116\210\006\376\361"
	"\265\066\264\044\331\152\323\264\315\377\246"
#define      msg1_z	42
#define      msg1	((&data[28]))
	"\016\002\263\132\142\060\012\333\020\341\315\104\343\106\253\177"
	"\072\106\110\237\344\003\073\250\053\101\214\312\231\126\370\015"
	"\035\372\310\201\132\307\065\200\267\075\027\244\304\172\304\230"
	"\026\133\306\321"
#define      tst2_z	19
#define      tst2	((&data[81]))
	"\255\313\056\372\235\306\253\226\031\372\377\032\231\362\120\076"
	"\277\206\172\270\232"
#define      opts_z	1
#define      opts	((&data[101]))
	"\226"
#define      msg2_z	19
#define      msg2	((&data[103]))
	"\150\136\273\264\104\136\014\317\215\113\071\323\115\021\056\176"
	"\351\326\023\212\204"
#define      shll_z	10
#define      shll	((&data[123]))
	"\353\135\255\223\171\224\012\222\155\034\274\311"
#define      text_z	4745
#define      text	((&data[1077]))
	"\346\160\176\140\064\027\166\220\335\110\174\073\226\051\326\137"
	"\357\232\352\115\360\122\321\032\136\213\327\047\132\243\342\101"
	"\023\141\241\110\170\030\330\126\141\124\222\370\176\150\127\155"
	"\002\101\272\363\223\214\016\361\030\346\031\163\211\373\264\234"
	"\134\126\344\325\157\275\053\320\022\275\310\220\046\040\375\051"
	"\141\270\034\365\105\052\347\135\021\000\320\232\374\204\066\131"
	"\332\033\056\111\330\132\032\353\027\342\173\075\002\171\147\144"
	"\061\203\131\166\256\101\323\277\101\243\131\076\050\220\227\003"
	"\254\306\115\205\040\147\160\070\112\353\165\115\144\335\261\226"
	"\140\013\014\017\114\340\316\216\204\050\314\254\271\143\257\145"
	"\052\374\353\112\144\133\202\256\106\370\373\253\325\254\101\066"
	"\270\116\105\004\056\024\223\263\075\137\140\367\303\017\134\355"
	"\014\110\067\161\243\272\037\352\262\033\225\210\307\326\276\200"
	"\044\003\205\123\030\030\006\125\167\146\114\073\166\251\050\203"
	"\361\140\364\224\033\024\177\315\057\024\126\367\352\024\167\017"
	"\030\374\142\060\025\151\206\215\320\322\310\107\174\361\312\156"
	"\122\277\003\155\323\202\073\003\226\221\372\201\245\162\220\276"
	"\157\363\357\204\134\165\021\055\110\332\164\304\313\076\063\036"
	"\376\066\213\322\270\306\325\116\130\317\317\376\101\140\274\260"
	"\123\253\065\260\041\106\335\151\041\121\056\355\220\141\013\217"
	"\227\227\141\120\135\066\236\266\005\156\264\107\316\160\370\042"
	"\034\055\323\075\164\260\247\225\002\325\203\223\067\216\042\317"
	"\045\203\037\203\272\275\071\277\054\355\007\373\136\377\036\173"
	"\054\361\271\241\242\140\067\245\066\272\070\155\110\133\075\156"
	"\337\134\361\231\032\053\131\106\031\140\102\167\137\140\363\214"
	"\121\254\056\363\015\145\230\104\037\321\262\150\055\357\326\014"
	"\113\310\245\145\363\377\254\015\137\356\205\277\117\170\114\240"
	"\045\172\224\062\337\055\166\377\377\050\147\054\030\076\070\143"
	"\006\336\311\372\335\165\007\075\144\214\374\263\005\110\124\052"
	"\302\350\135\242\026\324\241\025\375\010\101\025\107\172\170\115"
	"\131\101\110\066\267\120\163\033\335\160\316\342\270\042\015\173"
	"\013\152\036\041\076\277\067\074\310\171\121\017\363\312\135\114"
	"\014\245\203\304\365\367\337\323\147\256\265\040\321\302\234\335"
	"\055\272\377\154\171\066\250\102\257\372\121\242\305\256\357\321"
	"\124\162\225\112\152\165\035\321\044\323\362\365\225\216\322\303"
	"\111\321\057\303\010\330\005\267\322\127\132\227\005\111\151\132"
	"\274\377\244\046\164\302\370\230\225\352\216\052\171\140\356\302"
	"\062\035\205\072\366\212\362\310\341\114\140\347\226\312\102\123"
	"\311\346\171\076\250\162\327\075\134\145\150\325\306\127\230\371"
	"\164\035\063\153\250\046\064\212\162\224\162\011\137\264\134\050"
	"\232\326\147\103\111\076\201\245\243\352\173\151\101\024\143\266"
	"\061\226\042\331\275\126\144\060\353\326\071\112\212\226\163\045"
	"\155\332\151\266\030\353\134\274\325\330\046\027\354\211\316\035"
	"\040\360\367\335\106\133\015\061\062\107\174\274\335\357\342\113"
	"\312\113\001\342\066\135\237\014\065\305\043\042\116\362\077\156"
	"\342\067\114\050\223\131\132\305\240\326\202\176\306\144\311\220"
	"\257\313\163\345\051\022\361\136\327\025\200\046\007\300\225\352"
	"\370\341\022\213\073\155\121\334\104\323\132\013\067\044\233\346"
	"\357\017\314\030\041\276\167\371\324\370\037\334\271\265\306\261"
	"\227\331\075\322\106\216\257\213\141\012\226\230\056\062\177\036"
	"\101\114\066\142\012\256\134\337\246\174\273\140\061\201\021\311"
	"\132\116\234\241\334\113\054\076\125\303\326\204\365\126\242\066"
	"\242\330\231\255\207\365\214\055\161\107\216\243\311\237\154\043"
	"\356\010\304\313\123\361\011\251\264\340\055\252\066\317\340\331"
	"\250\172\206\057\160\023\135\342\132\353\205\043\213\361\107\171"
	"\372\013\104\116\375\116\367\261\056\044\133\145\364\074\076\234"
	"\267\305\313\047\330\051\011\062\024\217\126\237\201\235\031\173"
	"\251\136\311\247\254\301\130\333\346\264\100\332\361\177\166\251"
	"\104\102\320\034\154\332\117\200\152\246\040\353\104\071\330\025"
	"\374\075\043\375\141\070\271\256\341\206\375\056\072\154\146\060"
	"\272\003\365\056\337\005\367\176\360\133\112\055\320\114\126\151"
	"\107\056\210\006\173\006\165\347\364\030\266\321\374\217\156\004"
	"\350\074\002\222\261\134\267\246\021\233\150\021\136\067\370\237"
	"\052\023\371\215\322\170\134\354\314\376\023\174\355\354\175\035"
	"\107\244\134\201\100\310\343\377\165\250\352\340\063\154\334\164"
	"\052\300\033\054\000\177\111\237\143\310\025\266\335\270\011\173"
	"\151\171\163\324\212\014\164\306\227\136\017\006\264\146\066\232"
	"\041\052\141\276\166\250\001\072\275\253\065\024\255\276\321\327"
	"\355\053\017\257\073\345\300\115\240\347\130\253\177\354\141\205"
	"\142\165\265\313\231\263\243\051\051\322\262\202\357\345\206\133"
	"\322\140\172\255\237\114\332\070\210\117\272\372\112\175\262\164"
	"\247\105\333\365\037\021\275\013\243\336\056\257\107\326\103\322"
	"\052\055\316\061\040\177\357\316\364\153\241\251\365\234\124\246"
	"\114\261\106\377\167\352\127\350\206\316\344\277\306\232\002\203"
	"\333\056\040\216\212\165\304\204\051\023\310\134\055\154\036\217"
	"\022\300\061\157\024\056\031\065\333\276\137\014\215\204\256\063"
	"\006\331\270\324\172\221\074\233\173\051\016\225\012\304\117\365"
	"\353\143\320\356\057\263\152\014\334\115\213\332\234\010\043\332"
	"\260\124\252\064\352\221\033\145\114\376\275\305\167\256\247\155"
	"\227\126\376\055\116\127\345\363\151\233\352\213\213\207\220\316"
	"\120\036\102\234\266\243\246\025\112\211\203\257\306\073\157\222"
	"\372\057\171\267\011\313\054\075\234\111\256\125\057\355\107\210"
	"\167\070\164\226\112\060\231\212\120\360\317\052\264\377\320\152"
	"\363\354\261\213\224\222\152\151\046\120\344\271\333\216\043\312"
	"\121\231\161\346\274\142\246\364\033\033\360\240\337\053\236\040"
	"\311\312\270\007\321\115\013\260\017\225\253\004\075\027\272\035"
	"\213\241\055\320\176\220\122\013\277\343\251\331\254\352\006\367"
	"\276\056\137\165\300\046\160\113\154\350\376\212\324\227\203\306"
	"\347\074\023\236\322\201\050\011\311\174\246\374\311\242\076\214"
	"\350\345\356\111\363\230\223\104\041\374\274\202\131\040\232\200"
	"\031\166\176\044\173\020\314\201\062\270\024\127\302\173\200\311"
	"\203\367\135\130\201\223\362\331\371\357\377\203\226\014\157\275"
	"\220\255\235\062\333\251\037\250\072\361\172\351\273\203\264\121"
	"\210\150\161\075\355\035\101\365\315\333\021\055\240\225\043\214"
	"\367\116\353\043\002\262\022\374\252\340\357\375\046\254\306\224"
	"\357\253\042\072\212\375\312\360\316\355\310\165\164\131\351\174"
	"\126\005\064\023\365\137\152\204\307\124\322\175\103\202\334\322"
	"\100\227\136\124\145\122\307\066\063\161\151\373\307\171\331\041"
	"\036\060\115\351\120\145\330\053\172\232\017\317\237\340\257\125"
	"\277\176\333\016\162\375\026\065\056\352\316\224\200\161\076\230"
	"\200\301\345\050\256\212\326\220\375\343\016\030\213\036\210\244"
	"\255\350\024\000\373\362\227\250\236\035\312\363\202\220\212\375"
	"\374\043\375\160\314\075\363\137\033\303\104\216\166\344\042\055"
	"\136\304\335\053\217\236\324\255\353\130\015\055\313\170\237\166"
	"\161\272\345\017\327\145\117\023\221\126\272\314\002\341\336\257"
	"\256\146\100\143\234\221\255\135\256\151\010\263\312\134\213\163"
	"\362\242\354\353\303\165\242\065\234\214\363\066\104\012\064\324"
	"\151\035\203\222\104\351\002\276\305\147\150\320\071\017\217\232"
	"\173\322\332\106\107\306\371\035\027\104\321\012\366\012\367\205"
	"\012\223\015\005\061\317\020\112\227\334\255\366\363\044\266\203"
	"\307\214\344\152\150\374\154\133\274\344\334\045\137\355\251\076"
	"\142\260\053\335\057\056\112\273\160\164\127\170\052\342\170\311"
	"\076\025\233\161\306\124\024\332\124\354\323\143\361\325\356\363"
	"\044\040\063\317\360\051\110\062\024\100\076\125\236\051\250\171"
	"\062\052\003\055\331\152\072\351\236\053\152\057\237\220\376\264"
	"\310\156\275\164\154\235\164\030\075\162\222\031\151\330\301\360"
	"\202\020\300\214\245\062\172\060\145\315\064\312\235\225\035\176"
	"\051\007\243\273\256\151\255\010\367\113\134\366\343\047\057\114"
	"\315\060\345\336\211\257\037\050\252\137\305\174\001\140\110\117"
	"\312\365\177\342\333\340\262\073\020\121\223\004\003\325\034\345"
	"\323\176\235\020\241\021\241\332\317\207\156\072\262\165\055\347"
	"\054\116\302\341\306\103\377\004\304\103\043\373\067\342\067\360"
	"\051\043\205\125\235\176\303\223\035\254\120\061\064\077\147\315"
	"\245\061\347\160\175\172\070\222\241\252\104\045\101\232\275\073"
	"\240\333\216\001\160\220\075\107\050\253\132\251\177\372\120\273"
	"\013\160\225\050\057\335\132\210\231\233\031\376\361\361\037\277"
	"\135\203\201\043\233\321\256\314\377\113\242\331\151\135\001\370"
	"\107\220\310\212\013\373\150\017\226\330\146\235\222\177\026\256"
	"\303\226\331\353\141\121\375\251\240\243\324\327\041\312\144\304"
	"\231\320\025\136\244\217\063\151\133\242\072\016\332\270\027\265"
	"\045\240\361\373\050\364\211\221\320\115\105\370\265\127\273\007"
	"\221\104\237\200\352\110\047\221\350\364\260\337\220\105\210\025"
	"\140\237\201\312\330\111\347\332\274\342\163\376\065\330\152\031"
	"\354\301\366\155\176\377\173\111\372\154\011\354\221\344\115\110"
	"\016\112\004\130\346\220\155\146\246\017\232\354\011\213\150\241"
	"\350\041\072\166\074\207\327\364\245\022\336\221\351\002\212\100"
	"\261\340\331\067\370\116\016\376\043\056\374\314\060\155\374\035"
	"\330\371\137\206\066\245\017\250\155\073\345\301\164\021\073\206"
	"\155\253\235\342\374\206\311\052\251\263\176\243\004\110\263\307"
	"\225\220\166\240\347\155\220\273\060\155\261\106\033\054\225\351"
	"\163\353\063\055\077\221\262\342\244\266\213\236\056\376\375\364"
	"\364\053\151\152\177\205\030\061\047\203\236\077\147\344\222\353"
	"\234\215\246\107\056\134\177\036\067\076\307\265\162\162\357\302"
	"\143\276\100\007\336\100\244\250\316\136\244\157\065\314\012\146"
	"\266\254\171\076\067\037\205\137\035\225\052\062\346\177\031\076"
	"\262\210\147\120\235\030\246\155\107\037\200\341\021\261\216\150"
	"\244\022\014\204\371\152\043\007\003\261\175\032\161\277\270\142"
	"\142\124\115\356\360\007\276\206\207\107\215\033\220\360\150\165"
	"\233\354\334\321\113\032\271\241\112\030\047\305\160\150\011\104"
	"\157\145\321\157\106\115\373\102\204\240\125\152\033\215\246\117"
	"\127\031\146\100\243\052\342\315\221\321\012\377\210\255\060\146"
	"\343\376\214\065\317\074\323\010\060\111\061\222\227\325\106\370"
	"\311\007\055\330\357\046\074\013\237\365\277\354\076\202\217\332"
	"\151\007\276\006\174\217\231\362\135\120\253\063\246\006\204\233"
	"\377\326\133\133\030\333\151\141\316\042\255\016\273\027\217\223"
	"\210\076\272\343\372\002\375\342\340\054\062\100\241\263\126\103"
	"\354\172\224\210\113\157\277\057\175\300\132\070\023\256\313\252"
	"\375\122\216\120\337\023\210\330\273\165\030\322\075\016\001\366"
	"\351\053\031\313\132\360\247\052\271\316\124\154\124\131\143\125"
	"\040\000\247\202\063\167\201\070\141\171\341\103\122\213\006\357"
	"\315\037\043\262\317\325\057\104\214\135\037\325\121\033\264\241"
	"\326\034\171\174\312\036\153\163\011\376\267\050\035\274\231\010"
	"\224\356\273\175\312\337\010\275\156\106\003\125\372\321\003\245"
	"\201\106\176\370\064\106\135\113\371\166\131\366\240\015\216\071"
	"\013\175\154\311\033\351\160\360\056\330\162\177\307\057\134\225"
	"\330\306\044\246\252\375\271\025\127\173\277\113\151\132\304\250"
	"\174\307\213\012\026\001\012\067\221\042\215\052\073\120\327\027"
	"\301\222\240\267\173\275\055\167\034\040\212\304\334\201\106\310"
	"\256\115\066\332\307\151\114\244\144\226\173\170\330\150\047\001"
	"\204\223\021\144\313\063\127\243\153\353\161\142\253\042\120\350"
	"\237\333\063\257\217\321\253\114\240\363\371\075\153\113\156\053"
	"\172\224\275\021\226\064\312\223\205\326\052\103\352\255\342\300"
	"\074\060\004\220\210\372\237\333\162\267\052\342\370\266\017\061"
	"\124\137\347\037\317\254\366\200\133\147\373\065\033\237\125\367"
	"\074\010\027\321\353\247\161\112\364\275\340\102\207\237\146\114"
	"\017\035\273\111\132\162\213\321\243\336\124\145\047\144\133\272"
	"\201\261\121\331\345\307\074\324\241\200\202\332\363\110\307\116"
	"\021\355\260\334\306\347\210\042\042\034\046\304\122\327\325\113"
	"\207\034\123\150\234\200\047\152\232\234\024\366\163\332\124\360"
	"\005\246\137\327\270\366\064\172\143\374\030\310\004\144\373\273"
	"\055\064\266\050\301\113\202\372\347\244\357\153\225\273\133\361"
	"\110\167\327\050\173\072\013\242\056\330\157\060\234\331\117\143"
	"\020\072\144\174\372\067\070\171\327\256\347\251\276\251\142\253"
	"\170\037\143\244\001\030\176\007\022\332\274\016\334\062\176\317"
	"\334\001\163\323\077\352\215\041\362\213\245\053\304\056\025\040"
	"\220\315\203\107\016\163\104\363\340\036\230\234\101\074\325\207"
	"\340\034\062\147\210\003\242\010\015\235\173\265\337\274\107\032"
	"\174\155\342\140\235\365\332\033\070\004\074\120\145\056\247\060"
	"\246\375\364\153\151\366\327\057\174\321\356\160\143\304\336\040"
	"\026\047\167\057\256\307\244\253\120\224\055\014\101\256\331\317"
	"\213\215\040\372\263\373\267\375\022\020\261\311\111\241\074\032"
	"\226\274\314\275\040\233\326\311\323\350\031\324\044\114\324\127"
	"\106\313\062\246\012\105\350\334\300\030\065\072\065\274\122\076"
	"\061\360\164\351\003\315\320\320\212\233\063\215\201\005\227\121"
	"\073\222\210\067\216\246\164\103\253\156\374\356\072\025\362\004"
	"\155\243\041\021\334\017\015\315\201\163\344\066\235\133\116\073"
	"\373\100\160\352\171\011\347\324\241\301\353\153\041\032\203\334"
	"\305\310\150\157\023\236\214\130\205\205\176\222\246\156\267\026"
	"\103\225\320\115\050\002\074\170\161\342\166\010\155\114\150\335"
	"\120\315\244\216\322\073\357\031\326\042\052\233\021\223\017\150"
	"\246\211\077\042\173\123\070\041\275\047\232\342\104\303\251\022"
	"\215\232\272\303\312\214\360\306\277\324\364\365\045\116\101\016"
	"\214\072\311\111\331\077\370\355\306\066\164\222\146\220\213\111"
	"\342\050\342\267\061\123\116\030\066\011\020\001\104\245\104\076"
	"\063\103\145\115\031\011\034\333\315\014\216\160\336\017\134\104"
	"\233\201\224\144\227\372\232\240\102\246\350\074\127\272\377\370"
	"\100\235\107\346\267\244\351\015\325\211\331\240\025\156\163\252"
	"\265\142\012\237\165\341\252\054\101\200\313\144\111\151\047\253"
	"\332\256\020\125\346\372\344\036\115\125\035\233\160\332\370\113"
	"\074\121\045\117\053\253\104\237\233\346\256\137\101\364\012\037"
	"\062\200\234\023\033\377\054\301\304\040\352\327\056\263\031\343"
	"\350\346\002\212\240\207\135\107\243\242\234\175\230\362\055\365"
	"\137\216\000\065\061\220\024\250\323\366\022\145\267\111\241\322"
	"\270\015\361\153\156\234\130\002\176\150\222\250\054\237\116\341"
	"\254\144\337\354\077\375\333\370\100\302\170\356\332\035\134\321"
	"\206\207\143\063\055\122\230\362\010\140\033\120\132\206\223\102"
	"\260\065\122\361\375\300\072\132\050\312\276\044\075\312\206\106"
	"\010\140\316\374\257\275\006\344\207\027\036\030\247\226\164\144"
	"\070\175\146\223\126\310\201\253\224\132\010\236\332\077\364\026"
	"\022\057\201\313\012\162\060\176\052\103\065\052\172\234\121\232"
	"\045\340\201\151\243\145\235\055\144\173\354\215\121\040\150\311"
	"\376\371\006\001\006\347\075\006\237\065\030\027\026\347\152\127"
	"\116\314\227\232\165\302\337\000\315\263\227\201\373\270\061\337"
	"\361\277\135\140\033\074\255\321\323\315\350\034\045\244\156\211"
	"\224\014\205\175\043\166\022\226\216\030\335\336\224\137\057\160"
	"\226\047\133\103\155\303\061\046\317\347\003\331\172\257\312\131"
	"\336\074\250\262\120\135\260\320\267\157\120\143\362\331\060\156"
	"\327\024\250\310\231\312\164\303\205\046\276\147\333\134\043\235"
	"\120\343\162\130\356\355\070\307\025\256\050\046\264\106\333\251"
	"\000\367\335\114\153\026\364\011\004\022\306\303\312\071\102\217"
	"\110\331\032\124\125\232\024\205\167\074\006\321\116\134\011\170"
	"\135\357\362\224\034\044\164\316\364\175\223\360\313\077\166\322"
	"\111\304\167\150\211\217\314\151\266\260\050\264\273\207\334\350"
	"\356\070\134\100\303\024\242\243\075\152\067\323\206\104\327\141"
	"\263\031\211\040\007\372\221\066\245\044\304\242\331\336\272\015"
	"\203\254\274\227\214\101\240\060\336\106\264\343\345\222\116\260"
	"\125\363\142\213\331\357\127\250\124\107\146\144\264\003\053\005"
	"\301\363\164\162\352\143\120\060\006\267\355\360\343\103\101\332"
	"\024\170\331\033\222\070\234\245\212\070\165\050\375\231\227\360"
	"\261\052\243\314\264\073\205\371\227\144\210\272\144\365\206\166"
	"\327\360\142\377\355\042\016\320\150\111\020\043\344\023\335\134"
	"\134\367\171\175\370\362\056\016\243\020\210\120\137\074\327\164"
	"\151\056\056\222\203\173\217\313\133\103\072\175\366\165\314\204"
	"\107\155\023\332\376\273\137\316\325\104\353\330\323\235\045\342"
	"\013\174\023\304\143\271\124\136\077\234\240\100\252\124\124\314"
	"\056\025\340\277\337\034\131\325\345\310\147\073\166\367\274\263"
	"\054\331\203\250\242\210\046\354\336\017\265\036\362\203\312\121"
	"\162\202\067\174\075\133\247\267\064\040\247\375\055\167\376\234"
	"\230\306\064\247\213\124\204\333\073\346\036\040\340\041\116\227"
	"\146\052\126\347\220\020\042\322\341\271\017\356\206\134\331\320"
	"\201\052\203\332\110\235\117\034\257\137\076\076\301\012\262\321"
	"\050\162\176\240\066\002\001\137\245\105\100\061\216\155\340\125"
	"\274\045\117\004\351\145\046\043\334\144\355\102\201\236\307\263"
	"\264\242\306\370\325\267\256\203\300\247\011\234\134\134\300\026"
	"\375\163\213\127\013\131\337\020\343\273\354\366\135\050\220\260"
	"\066\267\155\274\363\022\046\264\015\026\007\314\272\164\306\064"
	"\076\067\127\277\006\104\126\107\023\024\260\225\301\062\343\070"
	"\047\235\040\350\070\030\146\107\040\321\206\264\217\050\073\245"
	"\154\231\220\331\265\171\047\333\360\272\141\367\172\377\222\163"
	"\246\052\274\303\126\350\003\375\264\077\257\102\145\131\166\264"
	"\107\352\105\037\004\114\220\317\266\254\155\375\363\124\275\060"
	"\331\341\110\251\360\260\144\022\030\314\170\313\161\147\202\033"
	"\336\310\164\300\226\050\073\164\332\237\222\203\021\264\137\362"
	"\133\275\350\334\013\231\372\066\015\160\217\351\044\161\131\230"
	"\176\352\233\137\262\132\010\263\320\364\346\147\137\274\315\212"
	"\343\074\020\271\363\272\276\142\040\221\245\233\314\166\116\357"
	"\256\276\336\153\002\250\021\146\331\176\304\153\371\334\244\075"
	"\013\331\243\367\017\345\063\114\144\002\304\015\067\347\260\257"
	"\235\226\172\231\127\256\011\101\244\161\124\101\073\322\161\146"
	"\340\165\130\117\216\214\131\175\237\275\124\045\041\027\300\211"
	"\365\253\251\360\171\324\351\177\271\256\243\266\316\161\113\341"
	"\016\056\102\355\043\117\245\377\124\164\077\024\316\055\222\304"
	"\171\004\331\373\065\051\215\202\233\301\025\171\035\113\065\333"
	"\324\063\233\215\244\226\043\350\067\122\331\066\204\060\053\334"
	"\317\156\226\036\366\174\244\347\317\054\145\076\015\136\302\251"
	"\157\077\021\155\244\215\127\104\106\062\153\133\351\024\056\126"
	"\365\173\247\111\164\124\270\011\206\125\130\353\223\033\234\112"
	"\204\073\047\070\245\333\275\216\050\251\314\335\250\371\163\107"
	"\353\034\322\162\072\372\061\213\000\325\050\061\062\064\157\016"
	"\054\314\074\302\275\260\037\243\215\043\002\255\134\134\101\311"
	"\131\065\333\100\227\227\314\340\362\371\065\100\332\154\151\342"
	"\356\364\126\275\016\040\265\230\156\112\201\034\370\101\031\127"
	"\227\035\061\312\014\176\061\320\231\101\222\172\063\025\171\211"
	"\244\056\350\000\072\061\207\373\326\272\310\066\314\141\275\266"
	"\050\311\026\123\115\006\061\321\314\314\344\237\012\303\372\237"
	"\035\333\311\014\077\074\257\060\074\342\343\016\003\222\171\077"
	"\144\204\214\026\006\073\075\175\001\174\220\153\276\142\061\007"
	"\237\000\005\107\372\336\222\365\012\107\162\120\107\332\356\162"
	"\375\366\075\301\206\304\231\064\043\174\000\356\215\021\235\016"
	"\103\032\030\201\075\243\215\167\025\271\214\361\272\330\010\101"
	"\342\172\355\116\120\123\322\355\053\317\010\065\037\027\230\014"
	"\073\115\155\147\030\357\341\332\126\145\111\025\176\056\066\266"
	"\105\231\274\207\120\112\311\270\331\053\342\151\346\354\322\235"
	"\344\226\041\254\055\105\310\175\320\165\222\170\022\336\264\323"
	"\134\161\337\115\352\015\014\014\024\125\000\140\007\026\031\310"
	"\123\072\271\115\306\317\253\352\047\001\350\174\312\017\030\264"
	"\064\152\250\026\100\010\344\007\115\253\261\117\363\227\255\326"
	"\247\035\075\167\236\323\221\215\051\155\375\162\354\100\305\373"
	"\005\241\170\357\352\174\264\256\231\141\320\047\114\125\246\140"
	"\114\127\035\303\240\373\045\131\212\112\263\157\037\262\310\205"
	"\273\317\356\373\153\131\312\263\047\342\075\007\354\316\110\333"
	"\112\261\326\365\223\202\010\230\241\171\117\026\056\311\173\244"
	"\047\111\276\265\123\226\274\274\136\204\233\321\206\067\021\020"
	"\300\344\263\341\112\176\267\123\321\165\306\053\002\321\227\050"
	"\140\202\252\013\073\060\063\374\205\204\075\166\125\314\046\160"
	"\235\145\362\337\062\255\261\356\171\325\227\217\354\003\253\234"
	"\357\203\207\161\274\136\137\270\123\251\067\150\301\370\053\015"
	"\065\037\147\375\364\376\144\260\060\332\262\142\074\103\242\044"
	"\357\055\215\274\023\165\250\012\121\163\153\274\070\264\151\135"
	"\011\266\263\122\203\351\342\105\016\302\327\162\351\363\362\131"
	"\204\157\247\037\337\142\021\144\115\075\300\161\273\317\270\200"
	"\016\327\237\166\015\274\212\072\353\354\337\152\303\205\326\265"
	"\334\100\251\145\332\227\002\233\306\104\157\261\073\170\174\137"
	"\351\051\113\233\211\133\012\053\136\010\104\345\144\331\066\072"
	"\213\141\040\352\211\243\216\146\270\062\116\176\121\217\341\010"
	"\364\314\020\001\114\223\066\256\335\031\207\376\347\132\045\312"
	"\256\146\373\132\054\313\004\176\251\341\105\355\121\117\271\224"
	"\044\155\010\323\157\165\021\210\015\274\322\340\156\355\164\007"
	"\211\012\161\326\305\236\367\113\213\317\231\367\230\142\351\262"
	"\257\102\050\202\034\357\161\121\254\373\007\141\331\070\206\311"
	"\051\303\163\373\370\207\346\155\221\235\166\134\376\267\243\267"
	"\214\313\271\006\353\046\305\235\325\301\305\062\262\026\244\330"
	"\366\172\101\356\002\106\326\303\023\025\160\335\226\111\163\323"
	"\377\132\376\276\344\040\027\072\070\263\174\133\174\051\163\167"
	"\016\250\304\207\102\040\055\120\235\353\365\201\125\213\030\116"
	"\346\265\062\161\070\164\247\064\365\152\043\163\103\032\056\146"
	"\306\206\237\306\311\152\164\126\253\232\026\057\242\377\040\151"
	"\232\142\372\236\177\032\373\270\266\334\143\050\164\203\116\043"
	"\365\333\326\145\272\325\332\050\245\276\323\312\121\171\143\264"
	"\074\045\060\176\241\250\231\004\057\262\230\103\271\144\112\031"
	"\264\246\002\260\131\054\011\300\217\222\105\315\052\073\246\314"
	"\377\312\157\316\110\367\066\130\036\333\110\041\164\065\113\162"
	"\236\107\120\046\055\230\350\107\341\333\347\256\040\332\057\241"
	"\147\226\375\144\260\100\370\217\042\300\231\113\116\024\304\131"
	"\167\303\112\373\251\204\274\153\036\252\242\312\245\246\152\121"
	"\032\264\105\141\052\240\075\045\314\230\232\176\322\206\323\057"
	"\360\222\120\352\037\273\234\060\033\002\335\327\205\366\315\251"
	"\334\117\155\260\104\147\002\041\130\025\134\164\137\306\230\214"
	"\061\167\272\154\017\365\373\273\350\321\027\202\232\116\252\046"
	"\203\200\011\004\052\337\067\202\371\311\106\101\064\316\121\373"
	"\141\145\223\251\323\153\107\101\244\367\160\127\344\237\274\000"
	"\065\140\240\175\002\327\151\350\342\071\336\165\072\060\120\310"
	"\264\354\243\236\030\166\075\364\361\133\117\067\001\205\327\252"
	"\063\214\113\047\345\247\332\266\111\026\350\165\337\247\216\035"
	"\054\302\037\066\375\070\330\200\212\305\344\065\045\302\264\204"
	"\264\053\245\376\361\070\131\265\014\355\112\043\061\207\306\350"
	"\233\306\227\113\023\024\324\143\363\067\271\250\135\017\076\301"
	"\311\022\235\261\020\024\126\076\303\352\042\357\201\141\353\014"
	"\316\062\166\107\255\242\324\211\173\173\345\323\275\133\322\255"
	"\056\101\147\044\307\004\253\015\074\274\142\354\034\347\127\007"
	"\034\040\265\027\116\356\212\153\217\053\100\167\006\035\377\345"
	"\116\040\052\155\252\373\331\174\317\376\037\063\311\027\251\052"
	"\120\146\000\166\141\202\356\151\355\324\241\062\066\033\127\007"
	"\061\325\024\021\260\325\131\306\053\206\162\067\057\067\272\304"
	"\350\002\261\370\161\376\076\127\051\162\351\176\071\153\202\330"
	"\275\347\113\326\210\122\372\146\356\230\060\225\104\362\355\037"
	"\330\242\140\262\224\337\051\075\044\154\016\100\330\351\220\131"
	"\123\066\172\076\173\264\245\151\114\326\376\220\310\354\260\240"
	"\216\020\123\043\360\174\140\024\351\157\125\302\130\346\033\253"
	"\034\226\352\227\112\217\001\227\146\377\050\056\353\330\316\172"
	"\351\042\235\332\236\376\357\210\155\104\112\305\052\146\161\107"
	"\374\133\337\107\353\340\337\121\337\007\177\313\340\116\105\312"
	"\160\342\244\017\340\223\227\115\330\342\023\003\110\204\112\105"
	"\340\052\215\313\012\154\035\352\164\235\265\124\353\372\037\134"
	"\334\304\154\275\127\004\012\060\346\036\063\057\242\176\165\203"
	"\250\003\116\263\160\154\235\344\011\122\071\365\115\130\121\051"
	"\035\275\347\165\302\362\245\251\020\331\330\263\127\116\066\377"
	"\121\205\262\302\361\120\246\373\242\340\360\360\071\101\032\126"
	"\377\001\313\302\363\161\153\003\112\103\267\241\222\356\241\344"
	"\163\124\246\145\245\114\140\110\055\120\070\146\222\122\275\222"
	"\123\211\124\106\372\277\112\104\003\002\346\225\360\210\171\143"
	"\335\037\311\202\154\051\312\232\172\002\001\015\124\276\237\250"
	"\107\363\357\101\262\072\206\266\074\154\113\054\365\305\220\322"
	"\345\131\124\122\203\037\354\376\042\355\013\167\254\252\037\363"
	"\236\016\065\121\110\274\007\205\051\122\261\036\030\102\361\375"
	"\233\106\120\037\145\074\036\207\052\051\377\326\324\036\312\162"
	"\055\000\303\166\274\312\373\346\035\255\004\066\357\365\064\213"
	"\073\204\253\241\301\311\051\353\363\050\302\307\107\215\072\164"
	"\215\376\353\112\311\347\060\346\224\064\035\204\052\121\017\146"
	"\326\273\010\227\204\061\203\170\132\105\077\241\322\172\026\140"
	"\170\002\252\101\351\333\050\175\020\105\001\072\227\021\241\155"
	"\314\251\004\121\333\207\311\066\315\011\330\240\204\357\000\374"
	"\361\253\076\332\206\147\130\226\255\132\321\104\154\162\261\071"
	"\034\266\212\370\075\124\056\013\135\006\253\342\365\253\337\347"
	"\127\035\302\335\205\032\164\062\165\105\166\341\270\050\032\324"
	"\336\244\315\034\371\373\047\127\002\323\071\370\177\030\340\326"
	"\066\242\264\273\274\050\356\061\155\144\022\046\215\055\372\153"
	"\322\310\210\313\304\260\042\306\203\134\277\002\164\237\331\252"
	"\101\215\146\375\265\124\057\043\271\102\111\106\157\104\262\101"
	"\014\073\015\320\353\060\227\156\214\127\161\000\366\112\253\067"
	"\327\022\065\215\146\145\261\040\247\372\147\027\077\032\131\114"
	"\125\147\035\100\227\264\257\043\014\040\044\002\153\317\072\103"
	"\342\160\320\111\325\201\151\175\174\321\225\274\353\357\010\100"
	"\126\046\201\355\333\060\020\347\121\064\351\274\004\044\000\346"
	"\224\320\057\152\122\231\350\317\152\175\214\125\154\225\226\302"
	"\273\027\260\226\110\300\176\232\365\150\127\372\214\127\341\040"
	"\050\020\213\173\252\163\112\024\360\327\152\135\154\001\040\047"
	"\031\320\276\142\221\075\374\207\245\124\201\061\253\142\122\324"
	"\163\335\117\036\121\232\062\101\161\235\237\335\236\277\005\267"
	"\220\304\032\041\001\026\250\246\152\052\327\026\215\052\352\001"
	"\007\071\037\130\323\121\232\105\357\072\042\216\371\050\106\212"
	"\354\140\253\355\166\124\224\341\177\153\367\014\226\342\015\236"
	"\034\054\366\360\176\221\065\156\314\130\374\306\200\102\120\155"
	"\243\374\132\032\120\357\373\320\132\363\334\361\326\352\217\362"
	"\027\206\342\226\027\030\005\343\160\001\251\361\104\372\136\350"
	"\366\271\002\106\250\375\026\003\361\363\364\307\336\203\271\366"
	"\011\234\214\041\264\221\005\045\223\257\027\330\251\165\300\237"
	"\057\302\346\327\300\375\333\261\361\320\171\317\123\063\305\135"
	"\317\122\176\204\344\204\252\167\063\301\117\335\067\020\175\146"
	"\322\143\076\222\141\031\104"
#define      inlo_z	3
#define      inlo	((&data[6686]))
	"\070\217\121"
#define      xecc_z	15
#define      xecc	((&data[6689]))
	"\242\066\103\035\343\134\256\046\276\042\042\003\326\132\256\350"
	"\232\300"
#define      lsto_z	1
#define      lsto	((&data[6707]))
	"\056"
#define      tst1_z	22
#define      tst1	((&data[6711]))
	"\226\321\260\210\317\353\024\020\132\074\360\235\164\221\061\024"
	"\327\007\066\126\073\360\003\335\301\346\257\347\366\054"
#define      rlax_z	1
#define      rlax	((&data[6738]))
	"\137"
#define      chk2_z	19
#define      chk2	((&data[6740]))
	"\245\063\135\152\262\300\342\265\153\016\200\045\156\353\370\104"
	"\045\070\014\150\237\103\217\135"
#define      pswd_z	256
#define      pswd	((&data[6814]))
	"\116\146\015\212\200\122\251\036\102\100\360\362\046\237\332\035"
	"\313\050\346\133\264\102\114\132\342\220\351\077\367\265\214\106"
	"\034\232\320\234\355\171\273\057\271\253\042\340\112\374\375\026"
	"\045\344\161\151\263\065\064\330\346\054\241\226\330\326\037\263"
	"\300\060\073\131\342\221\137\220\060\330\316\205\070\174\155\301"
	"\223\237\052\106\325\137\037\274\214\301\122\144\227\162\027\127"
	"\242\123\261\204\345\020\025\025\351\343\233\042\137\011\343\363"
	"\250\016\071\175\156\131\072\372\032\215\137\262\377\166\011\241"
	"\312\273\046\257\314\073\305\265\037\140\327\177\151\273\162\022"
	"\311\254\220\070\005\312\062\037\127\222\322\126\011\333\370\323"
	"\227\036\203\143\132\110\030\171\251\357\371\022\253\153\045\164"
	"\027\265\255\035\177\340\075\327\162\017\055\173\353\046\116\202"
	"\105\322\345\240\032\376\031\303\356\022\326\231\176\374\016\225"
	"\261\273\263\061\233\360\010\015\377\066\210\352\134\327\155\242"
	"\251\122\102\304\120\134\210\076\157\137\330\355\133\346\203\014"
	"\241\066\075\074\046\106\112\046\174\323\021\331\252\176\173\124"
	"\321\276\030\042\032\240\141\211\377\071\166\133\037\372\150\300"
	"\060\246\375\127\354\110\176\150\033\217\102\306\016\276\032\337"
	"\174\062\001\226\323\142\037\323\234\226\056\273\220\226\174\301"
	"\074\172\030\332\046\276\064\010\117\036\107\106\324\324\214\360"
	"\157\135\215\134\326\110"/* End of data[] */;
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
