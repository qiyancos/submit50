#if 0
	shc Version 3.8.6, Generic Script Compiler
	Copyright (c) 1994-2006 Francisco Rosales <frosal@fi.upm.es>

	shc -r -f ./setup 
#endif

static  char data [] = 
#define      msg2_z	19
#define      msg2	((&data[2]))
	"\336\247\060\053\031\004\013\122\163\231\225\054\026\123\264\177"
	"\047\045\107\370\300"
#define      tst2_z	19
#define      tst2	((&data[25]))
	"\003\000\211\263\175\342\202\226\005\150\303\342\361\233\115\142"
	"\077\062\156\373\373\001\245\006\210\232\200"
#define      rlax_z	1
#define      rlax	((&data[48]))
	"\313"
#define      xecc_z	15
#define      xecc	((&data[52]))
	"\160\215\161\074\310\140\221\315\336\004\272\367\017\315\262\257"
	"\255\321"
#define      text_z	4694
#define      text	((&data[564]))
	"\004\142\102\247\355\126\205\224\066\165\204\071\166\016\355\175"
	"\226\210\376\073\077\022\235\061\103\016\277\264\343\054\325\347"
	"\216\030\216\173\156\024\020\244\212\225\336\000\243\314\175\072"
	"\124\173\165\223\216\023\305\322\042\205\206\005\261\134\354\100"
	"\164\173\273\343\217\313\210\031\140\147\032\004\063\230\076\210"
	"\024\264\034\242\310\341\165\352\147\373\357\031\130\334\131\315"
	"\127\024\260\347\340\070\000\101\237\033\105\323\263\204\133\307"
	"\070\167\152\001\131\337\353\300\332\333\332\063\267\063\000\017"
	"\110\260\366\050\351\366\152\211\021\260\134\305\064\270\214\155"
	"\057\366\156\211\325\131\111\260\065\044\343\354\127\343\373\237"
	"\224\361\310\176\350\062\007\372\342\144\277\027\034\113\204\114"
	"\102\362\325\030\114\037\310\201\103\254\156\232\220\151\072\044"
	"\133\002\242\103\065\252\075\030\017\375\057\053\111\263\170\213"
	"\246\115\243\363\154\154\164\257\030\343\112\250\114\204\315\250"
	"\207\160\353\275\033\051\325\052\046\004\126\160\267\316\373\136"
	"\033\236\121\207\013\306\067\043\251\201\314\366\006\231\236\216"
	"\012\212\113\045\263\040\117\332\044\245\112\334\163\106\073\217"
	"\345\214\026\360\123\116\023\374\320\340\363\327\171\221\145\203"
	"\033\260\251\317\321\370\251\366\236\364\323\021\072\016\240\040"
	"\233\267\020\356\006\044\352\326\004\335\255\176\157\022\002\212"
	"\303\253\132\225\243\003\213\102\370\136\124\063\155\365\123\010"
	"\255\143\366\263\207\341\211\214\277\067\012\056\112\014\271\016"
	"\270\023\243\134\027\056\236\020\215\362\103\373\347\226\003\224"
	"\371\371\107\201\333\321\016\232\011\030\311\123\045\203\141\335"
	"\227\004\071\256\063\327\276\301\312\001\274\261\230\277\106\222"
	"\271\216\024\225\140\042\060\151\072\371\274\140\174\036\075\023"
	"\042\167\302\126\117\201\027\031\203\324\313\033\223\021\255\115"
	"\237\301\342\000\343\022\151\036\014\045\176\211\103\274\235\146"
	"\064\137\275\203\341\324\234\144\251\147\177\074\171\054\212\031"
	"\356\155\031\322\200\202\360\214\250\157\025\354\054\263\123\140"
	"\023\020\344\364\345\201\130\216\351\330\313\142\005\125\174\363"
	"\303\240\106\056\014\151\163\040\171\050\243\212\307\137\115\325"
	"\020\264\011\061\063\300\214\320\140\267\071\006\352\367\353\333"
	"\000\221\207\026\321\101\352\301\344\107\173\253\235\201\052\365"
	"\212\075\355\005\367\316\220\132\217\070\265\225\260\367\175\276"
	"\010\167\353\314\000\121\045\201\013\125\076\275\166\077\063\007"
	"\247\076\161\102\125\226\150\034\303\061\241\115\370\131\367\062"
	"\322\217\104\336\114\021\244\271\054\330\313\006\262\217\171\031"
	"\213\006\073\310\252\111\346\035\257\162\022\034\165\235\121\302"
	"\225\164\074\115\332\051\236\200\350\372\052\321\134\345\164\245"
	"\220\367\067\357\372\271\104\022\327\307\247\246\121\362\075\135"
	"\316\324\363\036\104\270\374\121\017\262\336\024\157\224\154\214"
	"\102\002\274\055\205\103\300\050\166\056\333\026\065\276\254\316"
	"\124\145\046\202\173\310\121\170\302\176\124\254\025\065\335\252"
	"\020\341\066\244\001\276\121\303\271\147\306\304\123\167\200\307"
	"\026\261\116\321\237\142\137\122\070\024\076\271\022\130\243\210"
	"\052\214\104\017\355\206\246\201\337\340\112\321\123\036\150\171"
	"\104\354\053\032\071\336\032\052\276\017\066\336\006\233\077\313"
	"\040\144\347\035\101\140\207\326\243\372\261\112\017\264\244\135"
	"\275\255\144\263\021\054\166\376\123\202\303\331\153\066\233\302"
	"\340\272\070\234\310\003\052\027\130\056\331\343\123\044\215\367"
	"\301\075\306\004\002\041\040\372\023\115\115\306\112\322\361\065"
	"\061\263\245\155\044\013\346\301\037\041\025\010\170\313\335\270"
	"\011\067\175\016\207\340\302\037\250\100\136\262\370\076\134\230"
	"\277\274\036\203\044\061\225\123\267\005\234\243\066\037\001\313"
	"\362\125\076\060\361\330\057\231\363\053\025\002\030\225\055\041"
	"\346\045\142\160\206\326\256\047\360\047\116\255\163\210\002\366"
	"\364\214\007\241\176\200\056\045\165\003\257\321\120\010\300\241"
	"\151\337\113\345\072\167\207\003\015\160\022\155\301\331\154\212"
	"\362\232\316\325\301\347\244\200\062\343\154\004\112\110\120\070"
	"\243\367\002\162\235\073\373\220\027\257\360\272\014\334\214\274"
	"\225\272\355\217\025\201\100\123\351\312\136\011\174\305\020\220"
	"\170\144\051\162\342\130\052\310\347\004\077\177\275\020\063\026"
	"\115\005\000\344\171\252\140\110\352\070\310\256\336\035\123\365"
	"\042\062\166\243\021\327\352\310\232\170\222\234\052\135\025\333"
	"\104\353\162\204\151\035\112\314\245\104\304\337\355\101\113\021"
	"\010\334\034\044\363\243\253\063\035\370\050\040\217\071\366\245"
	"\055\226\317\330\043\231\072\075\047\273\011\061\142\345\214\351"
	"\220\355\202\315\257\221\004\215\014\040\145\322\174\104\336\354"
	"\336\146\155\217\307\064\266\060\346\232\001\356\155\136\022\101"
	"\153\157\355\373\325\207\005\315\263\151\014\204\116\233\362\216"
	"\145\200\260\021\257\137\226\134\316\303\204\074\205\021\344\244"
	"\140\240\036\035\275\323\046\271\164\321\326\020\127\365\175\233"
	"\340\132\066\304\125\033\127\171\146\236\173\153\351\227\077\342"
	"\340\233\173\345\075\306\151\111\337\364\164\114\045\220\377\124"
	"\302\331\117\150\232\150\300\301\153\373\310\275\344\352\051\074"
	"\023\064\337\230\060\117\125\302\300\370\311\023\113\310\120\213"
	"\200\277\202\326\215\135\005\221\322\113\316\036\347\013\204\325"
	"\130\357\302\014\043\226\211\041\301\231\035\366\064\354\167\171"
	"\332\252\175\336\335\170\340\344\301\333\110\153\105\072\174\160"
	"\106\271\340\160\035\300\327\366\064\073\267\171\100\010\246\353"
	"\211\236\362\240\052\065\362\365\264\266\306\002\265\310\224\174"
	"\211\273\230\373\325\313\326\345\365\251\317\133\216\132\315\245"
	"\052\176\150\313\365\062\377\252\303\171\012\066\312\160\236\372"
	"\233\220\002\333\006\264\225\206\302\147\235\017\074\377\212\220"
	"\111\213\056\151\031\163\102\346\246\332\264\043\311\261\020\134"
	"\022\057\151\302\251\233\110\317\332\065\250\061\324\011\136\036"
	"\276\230\043\237\044\122\306\003\304\342\037\037\227\265\310\242"
	"\114\121\300\324\025\005\013\026\073\336\102\203\054\136\212\121"
	"\024\215\207\362\224\237\041\071\047\210\224\157\356\016\230\231"
	"\071\001\342\306\264\105\245\054\310\172\065\106\012\354\220\273"
	"\113\134\023\172\250\014\176\176\164\006\273\157\367\376\326\306"
	"\220\311\030\275\241\221\141\143\037\272\015\246\371\030\157\061"
	"\215\000\010\017\210\233\270\017\003\364\334\255\172\112\222\055"
	"\023\063\373\210\052\243\177\345\027\337\346\162\326\064\017\266"
	"\047\352\331\036\246\027\236\053\056\024\267\324\276\232\351\350"
	"\303\164\037\037\046\374\322\351\210\371\105\065\346\121\354\175"
	"\164\212\374\346\101\375\163\304\064\171\272\261\157\212\151\334"
	"\105\254\254\252\106\021\034\340\337\174\352\003\013\350\335\245"
	"\345\253\213\141\005\215\230\006\072\157\224\204\027\244\355\327"
	"\326\244\015\037\205\224\122\327\334\017\331\051\332\142\252\176"
	"\256\337\222\036\172\333\075\003\350\040\205\227\054\230\250\150"
	"\245\314\262\177\012\026\313\037\214\251\337\007\070\067\324\132"
	"\242\055\141\251\300\373\074\266\005\344\147\312\215\203\217\251"
	"\147\263\002\151\352\243\206\042\024\062\260\232\205\340\147\261"
	"\052\275\106\311\277\330\256\060\055\074\047\316\332\024\116\322"
	"\154\071\156\271\363\332\270\050\261\332\232\252\127\117\302\140"
	"\045\237\071\204\150\025\377\000\041\001\033\011\327\270\074\110"
	"\140\232\263\272\346\270\233\001\112\364\326\361\204\352\016\240"
	"\101\160\231\017\302\153\325\051\025\344\177\133\000\030\207\214"
	"\233\114\377\043\120\055\365\074\066\163\350\111\053\000\273\316"
	"\023\165\211\175\140\210\266\215\235\232\366\116\364\073\175\174"
	"\215\176\327\150\171\040\234\116\053\054\273\214\362\362\032\053"
	"\202\001\133\214\112\140\033\366\236\020\100\131\315\207\335\253"
	"\041\353\352\364\203\225\062\037\077\106\004\222\046\220\321\260"
	"\224\037\275\002\120\354\217\223\124\023\171\253\255\076\107\064"
	"\204\266\303\172\133\314\244\145\146\301\107\370\210\142\235\047"
	"\223\151\105\311\221\132\131\114\275\305\021\044\131\015\001\073"
	"\327\267\021\376\303\245\077\326\353\136\307\146\206\265\233\370"
	"\176\367\311\117\235\173\356\264\000\220\005\057\071\042\170\140"
	"\106\114\015\016\072\227\363\067\311\216\330\301\062\213\243\225"
	"\047\257\043\012\304\106\210\134\031\002\063\150\042\276\216\137"
	"\064\303\347\135\320\055\010\122\347\300\065\031\355\172\165\045"
	"\006\143\221\327\035\353\346\177\347\312\147\364\035\066\057\252"
	"\006\065\252\110\320\142\225\225\242\161\313\355\132\056\017\147"
	"\001\057\201\143\071\347\326\133\310\006\065\135\226\020\354\277"
	"\146\374\032\046\362\326\134\261\327\132\112\271\010\240\000\372"
	"\202\075\063\202\322\050\023\034\102\362\126\224\241\317\033\014"
	"\056\147\246\011\121\337\174\024\065\141\117\372\167\060\226\231"
	"\273\300\264\334\250\237\312\163\050\372\024\212\225\367\027\207"
	"\276\034\354\257\356\173\346\220\003\163\245\326\040\031\016\234"
	"\146\102\000\364\354\141\053\055\137\355\177\052\277\120\006\076"
	"\113\117\271\354\272\232\247\241\313\020\200\352\155\215\334\134"
	"\064\324\064\151\100\162\207\027\050\154\230\214\344\323\200\126"
	"\153\274\102\011\000\140\115\311\144\070\345\037\211\066\011\142"
	"\070\133\360\367\157\321\360\117\304\233\015\240\052\041\216\337"
	"\067\153\272\316\361\017\025\012\331\014\015\327\346\044\030\165"
	"\167\026\102\073\231\223\362\304\033\320\147\321\341\113\333\256"
	"\227\312\246\355\345\367\316\145\121\306\043\112\353\242\241\066"
	"\145\105\071\273\034\312\153\277\340\256\314\363\371\302\225\356"
	"\053\047\202\340\247\365\203\000\044\070\172\353\062\023\252\062"
	"\037\344\075\254\152\030\213\064\272\360\340\050\171\333\040\321"
	"\037\036\177\267\141\254\142\250\332\103\277\044\334\151\122\143"
	"\165\115\174\356\242\201\340\014\163\026\205\123\227\040\012\355"
	"\162\062\133\354\147\313\075\363\077\367\073\200\146\225\277\316"
	"\264\017\010\322\365\262\170\016\252\206\247\042\364\000\221\224"
	"\373\064\143\360\377\144\236\316\011\355\016\007\173\266\153\343"
	"\334\174\144\330\142\110\376\226\106\224\053\126\030\153\052\154"
	"\201\333\276\343\367\152\046\114\310\333\131\133\140\060\237\201"
	"\272\134\050\014\260\267\005\120\323\310\032\211\325\116\125\217"
	"\011\020\355\317\210\124\061\026\146\165\126\354\140\201\172\222"
	"\011\333\266\047\150\232\207\027\274\356\343\335\170\026\210\340"
	"\251\254\033\134\065\017\143\253\037\130\220\027\352\221\226\135"
	"\001\375\171\371\250\301\277\120\072\127\200\000\177\064\161\007"
	"\060\344\261\052\230\143\340\217\132\147\320\263\202\353\242\130"
	"\367\013\012\162\253\076\041\074\267\273\313\243\166\302\034\127"
	"\213\346\213\200\324\375\057\272\307\347\267\067\261\161\070\075"
	"\077\155\005\034\327\140\141\035\127\143\026\206\367\170\036\061"
	"\061\211\064\332\315\001\136\115\147\311\051\225\042\016\066\004"
	"\126\214\110\210\070\042\303\115\103\233\205\344\152\361\301\074"
	"\143\107\365\205\025\250\377\030\103\064\364\307\343\200\025\317"
	"\305\002\231\137\156\240\342\207\075\327\161\240\114\224\374\373"
	"\264\223\132\034\230\362\336\336\153\163\231\202\152\326\065\141"
	"\044\121\330\353\022\241\110\354\360\174\051\130\233\250\314\035"
	"\345\232\017\352\327\316\366\045\307\217\231\230\170\341\050\212"
	"\136\054\270\365\061\371\061\276\060\371\161\273\364\252\042\054"
	"\072\232\017\242\352\045\362\336\371\017\205\005\022\345\147\071"
	"\300\254\337\266\075\026\162\105\151\245\260\163\265\247\145\032"
	"\375\164\275\004\226\240\171\102\103\342\137\002\353\236\134\005"
	"\105\170\260\365\037\300\046\004\163\335\252\051\240\015\167\323"
	"\124\242\054\213\013\107\274\126\272\240\074\173\367\332\216\070"
	"\006\263\040\334\311\202\304\331\155\105\141\357\340\247\354\350"
	"\256\145\337\257\376\151\344\306\260\005\253\304\143\372\327\066"
	"\371\263\071\126\004\304\304\251\014\260\025\347\066\346\076\077"
	"\101\363\114\116\350\154\025\266\007\064\301\123\136\107\106\370"
	"\143\353\356\145\314\103\274\164\133\260\344\064\253\334\143\032"
	"\150\155\315\301\026\036\252\172\211\000\075\003\027\214\076\033"
	"\120\335\031\076\260\176\332\313\004\355\051\146\301\063\016\121"
	"\112\003\231\304\370\360\014\225\372\301\346\163\263\317\010\353"
	"\114\136\261\021\367\311\244\323\210\322\226\261\045\122\244\246"
	"\125\112\276\343\126\333\170\310\113\363\337\017\230\366\162\025"
	"\141\107\255\200\270\161\116\325\045\321\321\216\331\153\254\343"
	"\175\275\362\164\354\224\270\250\313\352\141\372\335\121\355\004"
	"\303\255\010\370\362\241\017\351\376\336\373\152\175\062\345\047"
	"\152\360\360\006\205\003\027\017\115\204\044\256\014\062\032\322"
	"\342\332\040\054\052\137\020\202\262\273\310\000\173\160\252\332"
	"\256\117\325\043\106\263\331\120\271\212\135\265\363\007\022\324"
	"\126\172\037\033\114\313\235\077\267\136\044\143\252\300\160\345"
	"\335\160\366\375\060\226\353\075\251\173\045\171\366\203\313\351"
	"\044\224\326\100\003\074\362\345\361\326\177\202\061\326\030\015"
	"\261\041\264\163\133\213\164\165\143\276\327\076\100\001\170\054"
	"\353\230\270\252\240\104\336\355\265\371\250\327\134\237\024\043"
	"\155\353\160\110\142\062\316\324\172\312\165\233\304\337\064\000"
	"\316\253\106\266\330\322\061\155\153\222\161\236\266\134\217\123"
	"\200\023\002\170\307\173\113\214\257\067\067\123\075\150\041\015"
	"\360\253\036\017\107\140\025\017\240\042\365\352\137\155\135\146"
	"\347\130\101\061\343\022\232\061\362\133\157\223\034\377\175\166"
	"\250\100\376\340\161\154\065\222\162\172\034\120\321\060\145\366"
	"\303\041\011\160\073\273\057\247\076\054\126\072\047\266\341\311"
	"\353\020\025\377\021\261\051\214\044\242\346\310\172\144\121\000"
	"\017\337\334\374\323\022\112\262\232\164\027\364\070\005\012\363"
	"\037\260\334\124\306\331\266\221\115\260\042\062\037\216\042\156"
	"\246\172\335\104\330\203\060\221\011\156\373\361\370\233\327\072"
	"\113\130\277\311\117\130\051\054\061\130\370\141\013\174\266\164"
	"\007\104\336\232\046\024\043\073\353\143\021\060\367\351\051\302"
	"\177\364\365\232\306\065\347\244\017\011\114\111\236\021\025\073"
	"\255\302\106\000\143\310\307\361\224\120\145\207\224\041\357\055"
	"\350\247\370\376\374\014\311\076\012\046\144\120\130\136\307\122"
	"\042\273\115\261\375\345\051\050\111\176\265\132\300\013\253\054"
	"\337\373\356\234\265\321\067\276\127\353\117\327\306\160\335\207"
	"\226\334\222\004\014\041\121\376\334\321\264\255\231\352\114\143"
	"\364\070\031\006\221\326\375\202\173\161\241\015\356\300\101\013"
	"\367\324\315\312\314\212\142\011\061\306\373\204\233\173\112\162"
	"\151\126\021\363\321\333\353\150\253\336\143\347\004\301\303\244"
	"\372\067\176\171\166\200\073\374\236\236\014\330\110\256\252\320"
	"\366\274\142\023\274\351\362\325\013\221\163\321\310\300\011\235"
	"\056\002\337\230\352\214\162\037\277\024\313\267\067\314\067\257"
	"\243\003\174\316\345\365\074\124\366\217\230\240\251\206\134\135"
	"\207\141\250\125\267\117\316\166\174\273\037\352\124\014\251\270"
	"\111\236\003\211\213\003\325\227\353\142\352\163\047\214\053\141"
	"\343\343\125\305\172\044\316\147\067\035\132\144\106\210\345\335"
	"\327\102\114\031\312\075\055\007\004\145\330\171\101\371\360\031"
	"\355\317\330\031\173\221\212\310\343\205\041\117\021\031\326\257"
	"\065\134\070\333\164\367\103\344\236\004\334\020\243\166\042\156"
	"\146\072\354\302\020\310\354\013\056\016\027\335\342\165\272\200"
	"\146\217\301\370\202\154\370\217\047\024\035\317\036\347\070\117"
	"\136\106\346\363\365\141\075\311\045\325\011\137\352\310\047\360"
	"\373\166\044\262\221\251\036\132\064\125\201\047\267\255\101\100"
	"\110\177\165\232\213\305\233\173\312\065\275\336\163\017\331\201"
	"\247\221\050\104\273\077\207\213\056\131\227\260\125\167\304\065"
	"\253\226\350\207\241\157\345\166\023\013\277\341\131\100\052\032"
	"\056\231\105\265\354\246\144\071\372\251\235\324\020\020\165\171"
	"\344\101\224\174\033\111\240\110\365\203\271\011\335\123\156\011"
	"\167\176\056\266\227\154\137\273\164\061\374\323\365\172\112\220"
	"\317\261\102\303\234\134\145\256\270\022\244\004\143\071\303\234"
	"\363\002\043\314\067\266\010\110\123\054\101\240\315\003\200\336"
	"\122\000\216\275\314\330\202\243\055\076\120\012\207\276\037\323"
	"\102\137\157\062\173\351\212\141\115\170\053\220\230\226\224\204"
	"\323\123\254\115\004\043\352\314\013\230\310\224\025\147\071\276"
	"\341\333\150\077\111\141\175\337\375\257\117\240\311\164\223\334"
	"\171\153\301\055\124\202\145\111\277\205\076\063\353\112\324\050"
	"\237\373\100\145\072\051\212\276\063\023\203\053\022\176\142\202"
	"\305\254\356\371\017\347\270\272\223\005\142\335\055\163\374\106"
	"\376\173\367\003\302\124\373\306\233\113\155\324\210\172\056\261"
	"\205\072\223\204\056\026\176\201\370\154\213\164\364\031\244\021"
	"\031\334\255\360\221\327\135\045\140\221\215\203\314\324\166\151"
	"\144\010\145\231\035\020\062\264\212\076\125\245\130\115\075\113"
	"\102\117\340\210\071\331\213\303\355\351\204\145\021\376\120\351"
	"\335\325\327\317\357\134\212\117\210\262\013\224\211\027\362\216"
	"\300\327\221\154\166\070\043\370\031\366\250\230\202\367\103\341"
	"\260\275\043\252\251\035\100\016\147\301\037\303\167\077\253\126"
	"\347\110\133\356\231\007\367\117\046\045\211\000\057\027\125\113"
	"\313\170\000\042\104\073\217\001\070\273\300\373\207\025\263\145"
	"\273\000\122\376\057\267\377\033\037\026\220\223\105\376\154\203"
	"\324\020\332\225\122\363\322\337\032\255\011\055\020\007\272\065"
	"\013\200\335\074\257\215\343\321\225\215\275\164\265\335\071\335"
	"\255\111\076\001\325\342\254\363\062\131\067\104\277\166\220\363"
	"\205\177\356\305\032\307\133\026\125\113\334\174\223\107\122\323"
	"\250\111\320\147\123\014\104\215\050\054\105\301\163\302\104\331"
	"\004\171\153\045\373\055\006\065\371\210\057\334\365\015\200\073"
	"\050\364\204\102\137\350\251\340\162\357\001\107\007\253\236\367"
	"\127\065\167\226\122\216\012\324\373\241\376\023\243\117\253\000"
	"\120\033\370\165\366\126\073\136\030\223\275\057\220\300\316\170"
	"\152\303\340\367\047\204\335\027\150\150\314\162\134\166\110\217"
	"\033\356\066\375\204\204\143\160\226\077\367\235\345\274\015\110"
	"\254\056\021\317\312\061\340\014\131\216\370\137\372\261\363\030"
	"\345\125\263\136\341\261\333\050\005\237\062\035\344\220\121\342"
	"\050\324\271\034\266\205\235\111\150\163\354\344\021\300\353\277"
	"\166\012\144\122\036\245\371\242\243\172\025\351\230\156\332\054"
	"\220\240\112\236\100\143\015\235\175\005\275\003\226\051\123\015"
	"\217\021\360\325\255\244\040\024\156\335\016\140\366\220\146\252"
	"\225\212\370\265\067\210\114\203\071\202\273\050\302\342\144\325"
	"\201\153\110\100\054\104\300\234\145\245\166\240\343\152\044\115"
	"\226\022\145\242\263\111\230\023\316\302\213\272\012\363\223\216"
	"\227\270\033\023\012\254\274\160\044\327\173\113\050\005\164\116"
	"\372\130\072\235\313\307\260\152\202\055\224\073\275\064\331\262"
	"\361\301\032\344\032\324\214\101\211\206\014\127\357\022\224\172"
	"\070\227\144\013\377\146\323\201\313\035\267\221\377\176\232\117"
	"\156\345\226\231\147\225\165\323\300\011\165\145\210\116\206\213"
	"\204\124\064\271\337\355\136\235\110\355\204\124\223\371\320\007"
	"\304\163\234\142\006\205\320\355\131\137\260\202\100\366\122\013"
	"\302\206\064\114\377\232\335\105\334\012\323\302\216\143\036\172"
	"\015\257\201\065\014\004\250\034\374\354\365\276\367\156\241\220"
	"\245\374\145\076\342\254\047\056\066\376\012\340\054\277\032\106"
	"\332\061\236\150\132\044\204\027\023\367\035\365\140\072\371\056"
	"\334\172\013\112\356\074\332\154\115\171\166\212\100\033\253\347"
	"\233\370\174\135\266\123\204\256\364\055\172\023\177\212\041\023"
	"\115\370\374\034\310\167\321\252\201\231\134\114\173\077\331\333"
	"\372\112\151\241\124\113\261\261\333\303\011\143\215\121\363\120"
	"\250\016\175\013\237\125\154\033\034\336\377\130\312\341\070\270"
	"\207\046\360\112\217\356\163\036\034\251\022\252\351\316\251\350"
	"\060\332\113\215\333\124\210\313\173\164\236\360\200\373\077\114"
	"\346\356\100\070\300\375\220\153\207\376\102\202\376\342\376\042"
	"\140\354\305\111\030\331\250\011\235\060\011\034\076\331\235\341"
	"\020\105\270\053\046\253\024\261\346\117\067\263\111\103\223\277"
	"\221\077\321\056\220\104\216\253\173\021\063\277\155\315\155\245"
	"\320\231\046\054\037\375\002\056\314\260\317\334\040\376\023\100"
	"\301\356\332\024\021\156\123\036\250\236\137\203\105\326\202\247"
	"\112\265\113\053\155\217\362\304\010\360\016\321\346\371\230\072"
	"\147\064\071\136\247\114\305\357\206\051\000\070\155\141\104\351"
	"\321\160\225\210\356\052\361\136\365\333\046\251\126\112\107\056"
	"\376\035\013\263\000\364\037\004\127\057\143\327\067\357\004\052"
	"\061\010\176\077\037\124\060\106\071\272\231\254\131\012\143\370"
	"\373\061\360\326\002\027\124\013\106\117\366\153\267\134\207\057"
	"\314\362\223\243\135\356\224\351\360\261\104\212\015\312\304\120"
	"\225\015\241\215\044\061\112\102\131\244\265\100\301\172\040\147"
	"\250\067\347\163\163\161\033\064\115\333\162\224\255\061\117\025"
	"\315\164\244\345\206\043\340\057\301\376\022\115\077\260\321\262"
	"\135\126\240\147\053\272\326\141\055\174\126\231\201\035\154\101"
	"\377\101\271\222\276\351\027\074\327\174\311\006\002\356\156\172"
	"\235\353\067\254\117\067\113\067\114\235\156\172\343\104\322\331"
	"\332\323\235\217\072\275\374\345\312\107\245\332\035\356\017\262"
	"\245\300\003\203\140\042\216\345\353\145\006\373\146\160\130\221"
	"\267\300\200\366\100\274\020\255\032\174\200\147\215\136\114\125"
	"\371\214\221\234\306\112\227\016\311\327\162\104\235\104\313\025"
	"\014\343\064\201\125\265\372\050\272\007\372\054\243\310\133\222"
	"\145\035\372\266\134\014\341\101\053\007\171\126\341\346\221\150"
	"\303\320\114\373\211\000\370\066\355\311\033\037\327\024\041\317"
	"\224\156\213\102\100\314\370\163\167\247\271\322\044\257\335\263"
	"\154\225\173\231\120\246\046\305\364\044\312\102\150\175\224\036"
	"\107\173\016\212\273\267\161\052\341\353\306\106\233\154\131\275"
	"\047\030\156\014\006\254\231\341\062\365\001\003\031\347\305\236"
	"\222\247\161\272\044\001\116\044\051\133\261\007\065\054\335\204"
	"\245\044\047\235\163\007\224\072\350\237\110\014\225\342\202\257"
	"\320\320\214\325\251\271\344\225\305\103\030\266\317\301\046\345"
	"\256\123\230\001\263\254\022\230\240\367\031\370\206\002\321\121"
	"\145\326\247\341\311\153\166\217\256\217\105\176\120\154\143\377"
	"\277\374\000\163\250\023\013\111\012\045\102\221\047\023\343\214"
	"\351\213\155\263\366\344\102\245\164\210\043\305\364\207\304\264"
	"\204\305\047\055\330\063\166\343\130\270\164\200\313\130\014\265"
	"\343\172\150\332\137\252\177\323\063\242\231\050\052\135\334\256"
	"\042\004\333\372\067\122\335\220\012\122\020\326\252\034\213\216"
	"\227\364\150\366\237\350\312\322\212\143\372\265\300\327\143\343"
	"\333\077\336\023\221\274\243\233\016\263\162\271\320\376\107"
#define      lsto_z	1
#define      lsto	((&data[5410]))
	"\347"
#define      tst1_z	22
#define      tst1	((&data[5414]))
	"\050\144\043\171\047\133\271\075\306\141\274\075\320\323\023\121"
	"\047\023\353\060\175\067\247\035\122\214\137\330"
#define      inlo_z	3
#define      inlo	((&data[5439]))
	"\206\355\375"
#define      date_z	8
#define      date	((time_t*)(&data[5448]))
	"\016\046\014\313\311\250\302\241\005\143\114\125\340\312\331"
#define      chk1_z	22
#define      chk1	((&data[5457]))
	"\311\110\134\044\035\036\266\150\022\106\303\233\241\177\077\211"
	"\332\035\231\206\213\127\116\031\333"
#define      opts_z	1
#define      opts	((&data[5482]))
	"\015"
#define      msg1_z	42
#define      msg1	((&data[5489]))
	"\075\002\107\312\141\040\146\377\140\267\040\350\163\114\312\333"
	"\333\252\351\021\335\212\077\274\236\104\156\367\104\041\241\001"
	"\046\004\117\344\246\050\016\157\167\235\132\233\005\302\174\142"
	"\027"
#define      chk2_z	19
#define      chk2	((&data[5533]))
	"\253\154\236\303\375\207\063\324\020\207\374\240\014\077\322\204"
	"\150\221\360\343\327"
#define      pswd_z	256
#define      pswd	((&data[5606]))
	"\042\233\214\374\031\247\217\147\300\152\035\314\366\062\152\033"
	"\157\154\143\072\316\203\121\147\340\231\022\267\360\344\234\022"
	"\177\051\016\230\320\236\000\221\011\035\135\000\117\310\033\277"
	"\064\176\371\003\002\341\313\300\244\235\043\273\321\262\260\132"
	"\167\030\245\140\325\220\006\233\110\044\273\276\356\022\050\233"
	"\052\225\006\331\167\321\231\033\157\274\326\100\156\207\233\346"
	"\240\101\106\166\321\115\021\032\162\314\330\141\336\000\375\011"
	"\226\003\342\015\324\173\050\104\070\377\204\247\207\037\215\047"
	"\141\324\235\062\042\256\114\225\172\044\366\130\045\363\142\273"
	"\367\104\310\314\300\361\020\371\361\225\240\170\265\056\237\026"
	"\003\074\110\046\352\225\273\145\272\261\276\337\245\040\232\235"
	"\145\143\151\045\125\172\036\106\017\277\276\304\355\135\332\360"
	"\231\043\026\204\271\322\351\163\203\250\123\051\310\356\307\055"
	"\122\060\123\247\252\162\355\271\061\253\176\037\011\131\017\243"
	"\174\046\047\066\370\021\252\174\271\375\246\202\353\155\260\076"
	"\236\004\345\110\166\322\002\250\176\201\307\207\332\327\052\126"
	"\375\122\214\366\144\066\163\036\064\031\240\040\207\121\136\045"
	"\125\103\156\313\026\161\163\225\362\072\034\314\022\107\043\017"
	"\232\260\006\376\347\171\034\033\223\275\074\033\016\232\101\143"
	"\336\257\057\365\041\113\152\342\344\174\232\325\141\066\350\340"
	"\137\366\171\060\225\172\301\236\227\037\236\347\347\272\247\034"
	"\071\241\037\074\354\211\036\321\006\271\246\147\360\216\110\120"
	"\205\302\200\032\074\102\271\324\142\130\273\112\023\143"
#define      shll_z	10
#define      shll	((&data[5919]))
	"\272\344\154\143\105\202\201\151\067\362"/* End of data[] */;
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
