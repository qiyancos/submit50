#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	shc -r -f ./setup 
#endif

static  char data [] = 
#define      shll_z	10
#define      shll	((&data[1]))
	"\266\237\254\107\144\015\126\202\173\025\035"
#define      chk2_z	19
#define      chk2	((&data[15]))
	"\175\204\236\243\373\162\052\041\100\045\050\310\020\220\077\212"
	"\360\371\122\164\217\275\352\331\162\303"
#define      msg2_z	19
#define      msg2	((&data[37]))
	"\313\245\102\013\244\007\372\347\114\136\072\175\125\377\001\022"
	"\232\376\042\121"
#define      opts_z	1
#define      opts	((&data[57]))
	"\067"
#define      chk1_z	22
#define      chk1	((&data[61]))
	"\227\212\224\025\313\211\051\222\347\227\027\353\130\314\015\322"
	"\033\137\231\042\373\333\121\003\152\124\322\055\045\026"
#define      rlax_z	1
#define      rlax	((&data[88]))
	"\070"
#define      text_z	4734
#define      text	((&data[430]))
	"\031\316\056\274\247\241\200\117\273\266\240\175\352\221\010\207"
	"\154\237\022\001\364\345\057\031\373\322\150\311\156\262\131\207"
	"\200\210\104\050\051\304\170\344\172\031\142\145\252\153\355\027"
	"\013\377\030\377\344\107\030\340\031\201\252\207\063\003\017\264"
	"\214\123\335\265\030\125\232\223\156\374\370\031\147\346\060\163"
	"\346\110\162\312\217\212\253\250\013\125\060\077\131\077\363\345"
	"\223\320\233\253\045\065\076\224\062\067\255\232\036\335\015\004"
	"\046\177\316\265\011\172\136\025\320\216\124\051\315\110\017\141"
	"\030\252\014\076\337\113\322\022\202\177\254\241\135\271\245\203"
	"\070\164\071\102\356\230\130\276\046\254\350\364\364\370\125\015"
	"\242\142\113\202\255\035\224\060\235\100\321\372\371\166\176\062"
	"\352\270\164\331\120\314\230\166\171\200\153\156\170\300\173\033"
	"\043\306\235\320\344\062\000\201\163\322\174\154\110\372\237\063"
	"\262\023\015\003\337\245\171\130\045\345\307\236\246\102\271\311"
	"\011\127\231\355\211\232\157\375\154\353\152\265\346\011\351\231"
	"\034\366\234\374\233\026\125\301\373\034\137\241\136\031\152\150"
	"\160\004\126\372\237\305\367\014\261\141\301\230\152\253\061\207"
	"\241\316\203\075\345\330\376\340\365\135\202\124\167\355\274\347"
	"\361\022\342\220\330\331\234\211\073\136\041\246\011\123\055\253"
	"\042\260\350\007\211\346\347\177\104\152\323\273\127\217\243\111"
	"\242\205\331\172\137\166\003\232\325\045\100\337\171\156\212\233"
	"\037\163\242\251\132\106\060\256\107\125\353\123\123\174\374\157"
	"\252\273\176\264\135\006\040\161\153\315\217\322\375\142\155\032"
	"\072\212\372\310\310\310\232\072\333\233\100\321\024\066\243\277"
	"\372\112\243\262\327\133\261\246\234\004\026\327\313\370\065\070"
	"\063\316\230\277\353\345\150\315\371\346\352\262\160\101\166\162"
	"\133\120\215\332\357\271\351\165\237\106\101\364\162\313\111\143"
	"\167\142\305\115\115\066\217\026\007\365\133\243\205\164\130\114"
	"\341\007\367\251\144\065\314\111\112\227\323\065\377\215\060\304"
	"\034\217\106\333\272\156\201\177\334\250\143\143\223\113\135\231"
	"\001\217\005\163\131\024\316\065\171\361\137\334\325\012\070\316"
	"\036\137\154\130\173\365\224\040\056\067\313\227\074\215\016\334"
	"\326\300\006\077\274\210\216\037\146\377\044\065\367\373\322\210"
	"\161\234\043\377\117\261\232\110\002\072\030\167\005\221\102\177"
	"\201\242\265\353\277\153\326\073\217\301\311\331\375\212\276\341"
	"\112\224\133\111\145\055\052\134\142\260\212\232\061\252\012\005"
	"\134\337\023\253\365\365\067\223\234\301\272\304\322\206\053\147"
	"\230\106\153\033\374\053\365\313\146\152\200\331\151\053\137\314"
	"\374\001\155\241\047\244\144\040\300\376\161\065\250\251\014\072"
	"\232\147\340\326\073\254\257\162\156\333\147\366\076\237\331\022"
	"\361\361\064\040\141\150\062\166\127\345\212\155\354\325\014\235"
	"\210\002\001\033\333\024\315\366\062\027\024\007\031\055\142\000"
	"\302\073\062\010\243\247\231\325\223\043\027\070\142\125\303\277"
	"\201\135\157\343\165\365\204\156\322\105\275\276\053\134\175\226"
	"\250\360\254\314\305\115\274\176\072\001\113\336\163\265\107\371"
	"\054\251\313\143\037\242\160\377\110\341\144\261\235\102\264\125"
	"\071\321\030\045\307\073\154\071\130\216\100\142\207\311\373\063"
	"\034\073\356\074\107\135\140\232\254\054\206\154\111\230\265\156"
	"\164\144\146\335\256\233\065\275\311\172\307\232\242\142\055\332"
	"\272\342\071\176\014\147\367\236\157\173\166\001\244\200\202\015"
	"\020\135\054\105\042\044\374\016\023\260\177\254\351\124\003\211"
	"\145\176\251\011\340\213\246\244\200\214\060\314\260\364\265\017"
	"\144\205\240\304\245\161\007\222\013\333\105\325\243\226\324\230"
	"\254\102\307\247\127\021\015\175\362\272\020\054\300\203\073\261"
	"\343\330\050\166\006\356\302\311\274\035\271\047\237\222\064\215"
	"\147\202\036\172\261\264\264\105\307\175\170\054\256\370\327\226"
	"\035\165\335\250\332\126\171\002\074\005\051\316\146\156\164\347"
	"\275\066\177\030\304\366\130\121\270\217\223\044\360\165\052\153"
	"\355\002\303\275\232\102\247\147\104\115\236\017\147\050\242\327"
	"\004\270\102\134\330\332\214\205\106\272\036\145\026\117\265\340"
	"\051\101\145\151\363\147\126\164\055\145\247\070\270\161\217\166"
	"\372\367\321\360\324\227\352\360\045\357\003\054\374\115\156\310"
	"\022\057\274\331\175\342\124\226\016\200\062\003\063\304\107\211"
	"\023\224\103\216\301\074\377\015\044\074\074\141\166\100\116\263"
	"\221\201\225\074\160\313\031\132\330\023\075\203\046\067\157\321"
	"\127\142\175\135\310\117\034\102\141\125\306\225\272\004\354\015"
	"\334\370\044\361\146\021\102\045\142\343\303\226\201\333\337\311"
	"\214\060\245\264\032\330\270\104\117\201\344\166\140\033\167\313"
	"\232\273\012\205\233\064\234\261\124\065\266\367\134\376\221\352"
	"\176\102\373\144\377\357\134\245\017\025\235\363\336\170\260\232"
	"\361\262\103\342\045\326\332\040\115\333\274\136\334\210\065\277"
	"\015\155\117\341\147\212\265\153\360\016\055\070\323\343\361\151"
	"\040\326\340\235\274\327\020\376\110\371\373\306\050\002\011\160"
	"\044\325\044\163\254\061\335\370\311\032\326\331\364\231\102\002"
	"\036\361\166\165\321\347\214\271\133\037\162\324\340\117\176\075"
	"\072\324\143\166\371\354\235\012\267\172\333\333\037\036\254\103"
	"\134\030\144\346\332\304\316\063\034\026\300\005\361\107\164\130"
	"\205\222\064\042\144\312\013\325\277\011\143\155\016\157\127\304"
	"\325\130\165\117\003\065\261\137\122\040\142\333\074\024\027\377"
	"\331\201\171\150\040\131\163\173\333\171\327\313\225\344\151\217"
	"\352\027\035\041\150\252\123\073\060\002\337\116\234\200\177\253"
	"\146\007\245\114\116\306\104\225\312\106\367\231\231\254\107\335"
	"\265\171\014\042\321\115\373\221\124\231\147\120\357\206\276\301"
	"\310\143\201\243\157\037\062\365\143\111\101\170\022\303\116\071"
	"\253\355\021\064\335\034\206\064\232\175\212\127\304\030\037\230"
	"\101\007\301\046\224\164\157\044\054\162\047\175\335\140\325\363"
	"\210\104\270\072\261\124\122\054\065\201\156\277\352\122\336\150"
	"\101\344\051\110\025\334\053\327\242\365\027\037\077\353\317\030"
	"\006\363\226\257\140\002\214\340\161\074\353\306\273\022\204\204"
	"\100\116\173\054\064\310\255\067\127\035\343\013\172\017\023\010"
	"\266\364\330\302\360\247\064\220\067\374\015\144\276\350\170\004"
	"\241\356\070\036\160\347\077\240\303\266\256\021\217\236\112\157"
	"\004\036\316\165\152\067\327\245\225\367\327\140\231\013\336\161"
	"\373\037\264\200\323\120\371\121\331\376\167\163\377\213\334\325"
	"\162\023\206\365\012\105\337\234\036\131\373\164\337\201\023\244"
	"\121\064\047\035\155\206\366\352\353\261\101\070\162\320\146\025"
	"\347\006\225\006\252\335\035\037\227\245\236\207\277\274\007\345"
	"\350\102\076\166\036\140\262\127\276\036\165\265\124\327\351\256"
	"\167\130\123\073\266\034\162\005\375\331\021\223\322\034\373\360"
	"\224\131\361\102\332\174\040\205\240\025\045\327\157\152\372\310"
	"\150\364\063\043\055\103\163\103\213\324\227\327\255\302\120\120"
	"\004\116\147\350\331\125\160\046\215\075\027\326\123\350\077\061"
	"\142\233\315\031\047\343\246\374\244\171\110\257\134\015\313\301"
	"\315\243\107\374\243\204\136\322\233\144\263\272\177\041\164\003"
	"\246\242\303\036\167\371\213\167\166\265\101\376\135\343\130\264"
	"\174\316\353\361\110\245\306\262\266\177\151\326\077\374\130\216"
	"\075\044\041\266\010\144\072\306\202\235\161\347\343\345\133\063"
	"\122\007\361\376\250\247\150\277\175\223\203\362\304\367\365\371"
	"\312\157\146\001\243\227\366\347\364\350\103\320\234\060\040\060"
	"\030\013\241\211\261\341\347\353\174\222\344\303\000\204\300\253"
	"\377\311\366\305\200\037\212\253\335\336\074\275\160\113\122\163"
	"\203\355\200\323\313\064\053\245\172\073\063\262\233\051\303\171"
	"\010\052\312\351\354\110\240\201\134\006\264\252\341\273\374\052"
	"\026\031\325\236\316\034\001\033\016\106\124\352\163\312\345\164"
	"\015\107\034\236\061\252\124\176\010\116\126\030\130\057\366\222"
	"\212\164\235\010\155\307\132\226\203\232\373\322\250\341\322\071"
	"\272\076\357\375\321\020\302\147\036\335\010\201\150\115\064\334"
	"\315\151\313\115\156\363\110\136\333\133\046\003\313\327\160\122"
	"\370\012\144\036\077\252\177\364\116\232\261\345\313\030\006\113"
	"\145\204\256\026\116\241\063\356\132\316\061\025\122\264\201\204"
	"\320\061\043\012\170\201\221\024\225\353\325\026\053\062\146\176"
	"\016\034\076\070\051\205\323\207\132\012\223\161\306\047\120\207"
	"\117\315\356\237\230\257\151\010\206\110\263\171\376\261\112\012"
	"\014\035\161\345\340\152\212\326\324\054\341\073\316\377\245\302"
	"\136\106\174\070\366\173\221\257\060\260\146\004\263\300\057\031"
	"\230\371\070\226\233\201\352\131\343\023\153\321\140\307\362\252"
	"\214\170\272\310\065\200\227\222\117\132\376\043\054\224\244\253"
	"\164\002\337\117\077\172\353\060\362\134\023\065\256\361\113\200"
	"\053\351\240\364\342\037\053\051\256\175\142\276\076\062\170\035"
	"\004\353\202\364\142\266\077\103\312\161\173\303\207\202\163\023"
	"\125\233\372\151\156\242\252\364\044\065\226\322\125\013\147\052"
	"\054\106\132\137\363\307\146\302\024\213\230\237\030\155\357\102"
	"\042\140\277\341\212\233\145\307\336\067\204\235\023\017\170\167"
	"\310\305\250\032\151\072\067\014\035\032\014\131\355\063\144\277"
	"\127\177\075\076\204\150\327\076\364\024\022\040\144\231\040\047"
	"\004\274\021\152\204\013\317\217\357\120\160\347\044\256\327\262"
	"\343\354\020\055\030\350\155\261\365\166\136\026\062\302\023\022"
	"\362\222\030\111\130\372\031\234\161\240\061\121\037\226\366\275"
	"\043\140\270\064\145\244\160\140\055\351\102\126\233\103\211\112"
	"\016\224\342\255\205\222\350\144\002\302\021\152\242\253\102\001"
	"\122\272\175\076\335\171\070\323\275\200\032\074\166\146\151\253"
	"\033\154\207\013\121\136\061\273\121\051\272\351\330\212\277\247"
	"\373\350\262\165\241\035\157\270\122\220\072\226\057\134\060\064"
	"\276\163\267\002\273\334\243\355\377\007\053\043\222\032\326\035"
	"\230\353\043\206\017\275\041\353\246\257\221\171\063\100\355\245"
	"\267\116\212\261\326\132\252\044\271\315\065\302\320\007\331\152"
	"\005\120\003\067\311\110\105\252\177\001\161\035\231\105\327\234"
	"\325\313\104\061\362\310\170\272\223\363\305\045\057\136\346\311"
	"\155\344\117\214\155\104\347\005\026\201\051\113\057\154\053\304"
	"\350\165\361\103\363\104\302\253\235\336\044\067\346\110\024\057"
	"\371\101\307\010\303\273\327\217\003\263\327\102\165\145\072\103"
	"\164\252\300\224\206\126\042\341\211\166\230\244\162\320\007\345"
	"\210\002\250\264\122\351\025\274\013\035\241\264\271\213\325\311"
	"\156\076\177\260\146\074\152\030\303\301\307\006\145\111\372\373"
	"\306\364\060\275\036\136\237\251\136\324\201\261\256\025\340\077"
	"\355\000\216\120\127\372\067\255\020\121\115\307\031\333\050\040"
	"\041\125\104\114\150\175\157\046\017\100\362\121\351\366\361\273"
	"\163\331\032\024\006\074\261\160\235\005\260\365\137\350\366\150"
	"\272\317\223\241\066\071\304\055\115\207\361\171\263\215\206\336"
	"\322\215\105\163\307\211\217\156\310\043\016\251\355\364\171\066"
	"\205\107\134\110\054\141\311\345\252\073\137\206\140\302\217\035"
	"\376\276\100\033\206\377\140\124\060\124\117\050\172\321\043\136"
	"\033\332\012\255\114\151\023\212\303\124\037\322\311\245\221\265"
	"\040\231\152\256\240\170\071\332\146\076\203\342\043\302\023\125"
	"\262\370\245\355\151\257\355\110\135\160\232\207\316\366\205\206"
	"\077\342\310\254\115\011\300\344\311\101\310\303\236\377\111\004"
	"\027\320\033\007\046\036\226\313\012\173\212\236\236\203\144\074"
	"\267\316\073\231\311\263\346\346\324\230\243\362\165\114\266\116"
	"\352\176\265\360\251\376\017\022\345\211\325\333\220\007\316\311"
	"\266\134\325\240\127\045\143\366\064\174\351\016\366\264\273\014"
	"\175\054\176\103\144\125\121\163\114\222\144\363\310\304\034\072"
	"\321\177\176\032\104\256\375\121\151\240\013\153\373\310\304\030"
	"\273\000\047\177\010\267\317\140\042\035\366\216\007\223\206\061"
	"\234\376\365\036\205\122\244\071\127\222\102\106\002\150\205\050"
	"\271\275\214\264\033\232\246\015\320\141\072\002\152\304\234\310"
	"\151\200\231\101\133\246\361\144\315\111\244\137\325\340\312\243"
	"\055\011\276\221\342\052\125\213\126\020\371\067\230\352\175\050"
	"\275\313\036\321\372\254\145\377\244\310\153\302\277\000\104\230"
	"\013\136\136\164\231\336\160\352\277\074\267\360\041\075\133\230"
	"\116\031\003\034\103\052\065\274\175\310\172\331\172\375\170\076"
	"\055\211\141\212\164\241\104\167\021\043\062\037\154\127\134\307"
	"\101\067\037\337\024\051\127\310\102\335\242\215\000\344\000\252"
	"\342\377\342\346\022\274\344\370\332\203\346\335\165\037\256\215"
	"\062\314\147\004\062\035\361\021\334\300\100\242\174\250\314\370"
	"\137\055\313\132\126\155\210\004\260\376\060\212\006\344\056\315"
	"\306\117\253\244\026\053\274\111\153\230\116\137\337\161\161\264"
	"\057\153\262\061\040\340\037\071\141\136\217\111\252\115\032\225"
	"\224\230\077\340\206\252\217\167\364\121\341\056\226\070\232\235"
	"\040\373\257\345\051\334\132\132\036\045\343\062\267\150\010\115"
	"\223\106\100\071\233\144\055\153\174\336\013\161\255\341\362\036"
	"\300\246\061\175\136\167\104\150\356\230\140\211\074\112\065\022"
	"\227\376\342\050\260\176\307\131\201\301\054\221\250\132\143\362"
	"\064\303\361\377\153\170\152\202\043\017\141\073\313\157\204\013"
	"\253\276\007\212\022\316\142\055\046\263\112\311\001\341\307\064"
	"\366\011\273\151\223\010\130\115\102\071\220\172\203\373\055\001"
	"\011\300\026\365\277\157\020\074\072\152\242\231\215\123\060\140"
	"\266\353\364\155\305\071\141\364\204\352\157\033\056\375\151\357"
	"\114\270\265\216\356\070\271\030\330\215\202\054\030\121\000\043"
	"\107\114\355\001\013\212\137\342\046\115\067\222\345\367\070\165"
	"\251\363\216\023\324\143\176\325\206\026\055\175\106\110\107\322"
	"\046\154\066\250\035\232\342\206\026\054\207\257\363\350\316\163"
	"\312\123\175\156\142\205\035\247\264\123\167\143\205\250\145\021"
	"\023\147\361\346\241\142\320\057\167\133\042\255\215\266\140\236"
	"\212\344\306\377\127\010\102\315\316\336\206\032\346\315\230\204"
	"\200\166\167\222\221\072\133\232\331\114\072\025\033\312\221\235"
	"\132\371\170\131\246\051\233\165\262\033\172\367\156\150\306\024"
	"\046\014\100\227\172\206\112\006\053\241\212\101\337\130\105\123"
	"\262\311\114\255\117\356\231\035\215\362\333\023\141\271\316\210"
	"\121\063\206\065\271\216\374\133\053\060\114\276\244\333\244\336"
	"\214\045\115\057\221\305\353\010\373\124\327\202\155\326\047\164"
	"\075\367\361\227\110\327\231\336\113\252\345\224\134\351\301\355"
	"\346\153\110\333\327\201\054\017\116\336\056\132\305\312\252\032"
	"\347\305\231\317\315\230\370\336\153\014\023\352\167\076\333\013"
	"\234\247\251\035\310\034\101\230\230\365\256\113\236\074\003\321"
	"\270\364\070\126\337\362\014\366\202\317\031\065\071\002\044\345"
	"\263\223\356\030\060\027\156\011\174\006\103\133\033\115\256\071"
	"\125\156\163\113\010\220\275\022\116\050\323\007\264\242\004\116"
	"\003\356\171\061\326\006\274\224\350\200\027\111\026\326\340\146"
	"\223\123\026\050\342\062\241\320\166\321\040\115\364\352\364\201"
	"\012\070\144\240\133\335\321\055\334\030\017\234\266\266\027\035"
	"\345\005\145\210\021\230\302\057\317\013\133\303\272\202\060\005"
	"\160\224\004\222\011\151\075\305\234\132\305\144\102\175\032\174"
	"\165\034\333\344\055\203\145\347\217\302\024\303\242\015\037\100"
	"\155\300\027\277\204\055\057\172\052\030\010\053\021\077\063\064"
	"\253\127\303\021\277\137\132\322\241\234\166\040\046\375\047\057"
	"\157\063\071\337\130\344\357\225\147\233\120\225\310\016\340\077"
	"\135\363\267\331\172\167\147\337\227\243\351\134\077\321\153\173"
	"\327\012\376\135\111\067\070\162\132\215\121\010\275\211\143\347"
	"\246\253\325\327\016\020\106\151\221\024\351\276\340\073\116\156"
	"\311\007\103\174\347\346\314\175\311\130\326\322\257\146\052\320"
	"\116\251\101\024\272\347\332\104\247\373\344\135\210\314\324\332"
	"\375\117\122\056\317\032\164\224\035\102\030\374\026\076\052\127"
	"\350\101\317\276\122\304\375\330\124\157\015\063\220\302\044\100"
	"\326\256\376\361\221\340\360\264\334\246\327\002\042\010\270\055"
	"\343\044\316\313\114\170\261\121\242\006\011\251\154\233\351\170"
	"\357\064\310\261\272\371\226\026\156\175\140\125\261\307\001\257"
	"\320\017\300\163\264\327\063\142\310\060\067\211\053\150\344\332"
	"\343\312\015\142\064\355\160\103\135\021\134\072\242\170\150\251"
	"\164\152\355\232\312\371\314\170\102\077\002\265\224\025\343\374"
	"\256\034\203\314\350\071\236\076\277\257\332\027\074\023\355\270"
	"\055\226\157\056\074\317\102\130\326\127\331\377\264\370\315\070"
	"\354\242\260\063\142\033\154\233\114\223\261\272\361\140\152\135"
	"\150\247\371\376\073\056\005\252\345\163\175\115\351\264\107\110"
	"\152\345\341\211\371\344\073\115\060\243\015\126\303\174\367\100"
	"\066\244\307\020\035\265\205\106\040\035\013\212\373\335\057\203"
	"\372\060\250\040\111\124\247\037\226\375\373\326\355\313\253\105"
	"\322\212\320\143\065\272\011\217\312\054\102\256\261\176\216\027"
	"\232\262\201\164\216\150\021\354\265\153\111\244\341\074\371\127"
	"\344\321\203\033\327\174\361\157\236\064\312\361\332\046\210\352"
	"\206\314\164\001\357\356\215\253\202\273\013\110\360\161\237\330"
	"\251\034\050\330\320\320\330\045\063\341\232\170\071\131\047\141"
	"\042\142\056\002\013\377\275\272\265\346\340\037\030\131\111\301"
	"\101\376\267\266\263\202\066\065\045\224\147\262\301\174\266\330"
	"\326\052\154\263\151\245\043\163\345\004\366\204\142\330\162\332"
	"\054\155\163\006\344\212\061\202\254\126\062\204\127\073\042\065"
	"\227\241\041\324\121\304\204\052\254\030\113\307\114\261\374\174"
	"\251\204\043\107\045\002\141\153\163\073\050\145\300\125\062\364"
	"\010\117\270\311\170\212\374\253\220\020\347\310\325\377\104\243"
	"\113\366\225\153\373\055\376\125\116\306\160\212\131\101\004\371"
	"\222\252\176\341\052\161\327\034\137\273\100\141\130\050\235\331"
	"\277\307\160\040\223\022\150\361\245\235\302\360\220\271\377\063"
	"\310\103\236\003\036\150\126\072\226\374\044\167\245\056\155\336"
	"\342\265\156\143\211\264\202\037\011\371\136\100\215\327\340\227"
	"\337\234\223\072\022\366\147\002\316\046\235\303\036\002\205\323"
	"\316\371\341\063\145\335\135\275\042\273\066\051\214\034\001\045"
	"\074\262\042\242\115\022\033\205\315\065\361\011\320\143\111\224"
	"\000\320\311\231\172\040\362\221\266\164\213\353\161\040\366\360"
	"\270\036\127\040\313\303\211\034\265\215\026\107\367\023\067\030"
	"\116\060\053\263\341\004\217\255\311\130\101\357\201\236\032\015"
	"\264\254\301\047\340\037\234\071\143\312\256\175\073\244\101\347"
	"\350\101\255\116\265\274\210\143\150\144\263\306\231\177\043\326"
	"\117\366\162\266\311\176\032\056\151\127\211\035\120\304\271\067"
	"\150\272\074\112\313\166\155\221\301\366\317\013\330\037\060\276"
	"\332\003\360\065\153\031\265\242\306\362\171\175\257\214\371\164"
	"\216\302\054\023\017\144\371\357\134\325\372\341\117\041\151\201"
	"\064\035\207\101\347\345\222\074\075\163\137\151\017\365\213\216"
	"\330\000\306\301\175\164\043\254\131\171\203\300\003\052\171\005"
	"\337\145\024\242\174\370\254\321\320\302\367\261\021\216\071\250"
	"\254\113\055\327\370\254\066\322\257\002\043\031\053\323\071\026"
	"\036\211\273\224\207\217\152\156\044\135\334\256\371\357\375\361"
	"\162\106\207\204\127\126\136\070\263\142\033\303\341\360\066\344"
	"\273\154\013\165\224\050\153\073\315\162\144\266\142\153\313\070"
	"\314\300\234\130\231\117\157\313\232\377\374\365\220\245\025\352"
	"\331\361\244\260\221\142\305\224\230\356\057\047\222\157\157\357"
	"\151\107\206\267\233\077\156\233\100\111\264\146\242\337\067\143"
	"\307\011\027\070\162\075\273\047\202\174\016\353\120\221\316\035"
	"\011\135\132\264\342\266\026\160\124\345\037\071\230\043\337\032"
	"\324\025\201\071\120\361\223\116\116\014\127\306\100\172\025\251"
	"\223\366\277\074\367\005\167\277\022\210\203\052\040\141\312\230"
	"\325\347\271\106\063\205\003\222\237\122\110\030\261\236\070\051"
	"\374\261\236\233\027\050\236\317\017\245\200\013\361\230\220\345"
	"\266\242\342\135\331\253\150\314\067\316\276\234\074\002\067\032"
	"\367\177\315\134\077\202\320\314\322\223\131\210\325\240\001\244"
	"\353\357\166\251\370\342\240\062\133\306\174\006\256\171\261\005"
	"\174\024\212\104\346\164\333\123\215\011\033\052\173\130\363\217"
	"\374\254\134\016\276\372\076\364\352\161\214\303\236\107\304\325"
	"\277\041\335\124\212\006\352\016\201\124\307\254\014\162\247\170"
	"\060\250\147\316\065\316\115\044\337\174\037\237\374\325\305\311"
	"\171\250\011\214\316\371\055\345\217\010\361\120\302\354\162\375"
	"\023\376\102\157\024\133\301\037\032\122\100\234\373\213\217\056"
	"\352\161\017\251\122\270\131\106\341\321\163\011\213\067\165\055"
	"\357\105\027\126\035\356\365\142\372\075\155\261\075\250\040\116"
	"\152\365\272\173\270\164\253\036\322\260\360\015\210\341\053\277"
	"\330\022\225\127\125\000\227\334\246\327\327\267\151\073\346\257"
	"\225\371\317\010\245\011\355\024\241\351\136\375\130\236\353\367"
	"\205\104\207\076\032\374\122\045\046\217\057\365\370\156\212\274"
	"\232\226\103\321\101\307\356\341\306\030\233\312\325\202\012\160"
	"\000\202\115\135\004\264\151\156\132\360\240\264\115\113\022\005"
	"\037\014\127\154\175\141\045\322\042\263\353\111\244\245\341\215"
	"\212\351\155\006\171\157\376\356\101\300\114\300\151\037\234\002"
	"\057\310\273\046\247\026\355\147\300\310\334\053\210\072\233\260"
	"\062\321\106\271\017\337\311\012\004\260\356\132\141\060\041\254"
	"\225\161\027\115\207\324\317\112\236\002\155\341\267\301\300\306"
	"\055\057\226\101\252\254\256\015\202\115\026\265\103\140\210\133"
	"\020\065\354\276\215\221\225\046\033\041\217\143\125\261\363\266"
	"\325\200\273\301\066\102\063\135\307\220\112\363\217\161\070\316"
	"\161\053\154\363\144\370\324\052\217\127\117\313\105\035\147\011"
	"\275\027\224\212\050\237\364\373\133\114\213\376\225\055\204\157"
	"\247\343\346\253\176\273\320\277\233\111\056\045\345\115\231\210"
	"\366\363\022\036\222\007\032\355\123\246\354\351\323\160\130\173"
	"\124\076\046\323\372\367\223\225\101\301\273\046\017\124\256\005"
	"\110\301\044\333\311\077\311\035\345\265\006\271\046\137\064\173"
	"\235\133\117\227\122\342\055\224\244\350\272\263\075\151\271\205"
	"\053\336\140\365\036\051\022\003\337\031\275\005\170\361\201\026"
	"\115\320\256\237\263\333\063\130\304\356\013\001\130\305\206\204"
	"\244\347\172\303\021\215\307\360\246\204\366\037\166\167\066\303"
	"\110\344\142\373\300\226\123\204\205\137\206\336\045\014\143\312"
	"\364\335\215\005\152\124\366\021\330\355\061\116\145\150\021\255"
	"\115\164\251\015\013\374\222\221\134\030\157\202\045\323\114\032"
	"\260\331\040\033\055\026\055\006\004\137\124\151\307\146\026\025"
	"\332\300\043\346\275\265\167\031\316\347\233\364\272\350\016\153"
	"\301\056\207\357\105\265\366\111\024\112\262\334\261\311\362\214"
	"\212\025\162\107\313\351\141\231\321\375\216\213\345\234\366\247"
	"\313\176\226\020\063\215\131\110\327\014\045\211\326\027\025\140"
	"\054\210\247\367\162\010\221\103\005\037\316\353\274\305\222\207"
	"\103\051\230\167\266\361\277\216\376\344\027\324\374\055\065\050"
	"\265\334\040\047\345\262\152\353\322\071\326\216\377\151\026\103"
	"\222\256\272\110\240\172\327\236\137\356\163\133\034\251\204\321"
	"\206\245\370\153\130\143\127\052\235\056\271\234\227\317\337\051"
	"\176\232\162\036\024\111\275\164\070\061\320\124\332\125\046\140"
	"\372\036\314\122\202\044\175\037\122\066\274\351\006\233\023\204"
	"\066\205\243\113\317\141\277\010\222\220\134\155\345\202\316\340"
	"\241\233\063\044\277\260\103\021\347\000\373\356\233\016\162\322"
	"\224\026\035\143\167\335\153\012\155\310\167\122\113\106\062\355"
	"\341\145\021\240\026\125\262\376\125\255\354\361\274\136\303\120"
	"\165\341\264\355\276\040\367\054\350\157\176\064\265\261\042\227"
	"\027\063\070\056\211\353\054\337\230\030\321\125\167\225\245\354"
	"\166\131\331\065\171\321\141\142\101\340\227\367\222\271\216\252"
	"\355\307\330\166\262\004\126\112\035\047\240\224\274\105\201\063"
	"\237\133\150\031\055\312\173\156\252\023\145\075\314\364\347\271"
	"\273\277\060\155\304\206\270\341\255\130\166\152\236\367\235\075"
	"\123\006\126\200\320\322\356\173\345\124\270\262\110\240\153\003"
	"\137\234\160\044\042\050\006\320\201\174\072\037\164\330\135\310"
	"\337\264\110\257\206\067\053\154\213\344\037\324\204\212\327\344"
	"\046\110\010\111\161\017\031\362\213\124\022\000\055\157\310\014"
	"\043\021\274\252\110\347\026\324\313\065\250\120\300\177\064\347"
	"\310\075\060\071\114\112\053\330\237\075\330\314\255\241\331\320"
	"\262\225\172\373\175\221\317\111\306\170\231\207\370\316\156\300"
	"\013\237\371\127\352\045\057\211\143\010\126\020\251\060"
#define      tst2_z	19
#define      tst2	((&data[5832]))
	"\133\367\124\374\140\226\347\342\305\052\020\111\010\140\012\070"
	"\146\037\042\371\127\103\354"
#define      date_z	1
#define      date	((&data[5854]))
	"\072"
#define      pswd_z	256
#define      pswd	((&data[5864]))
	"\227\364\251\127\377\110\121\127\062\247\166\370\145\321\177\261"
	"\061\205\256\046\015\334\315\064\304\232\127\273\342\124\002\357"
	"\057\006\200\117\217\112\372\245\362\161\236\130\102\035\012\164"
	"\243\270\233\261\224\150\345\131\003\075\024\346\222\026\325\301"
	"\035\125\021\255\240\013\122\223\174\360\353\277\016\365\064\262"
	"\256\317\143\102\070\110\233\073\206\260\042\030\307\370\332\345"
	"\116\353\222\356\367\344\201\164\325\155\064\343\143\150\225\021"
	"\070\370\123\161\101\357\255\307\240\317\340\147\307\272\115\025"
	"\245\337\004\235\303\206\021\230\363\105\174\126\256\021\147\347"
	"\012\273\130\113\253\005\023\114\325\364\264\234\256\001\262\124"
	"\340\266\361\244\074\003\075\060\111\271\207\367\313\357\336\326"
	"\253\067\042\126\075\065\243\022\052\127\257\331\130\142\055\071"
	"\030\037\335\125\043\033\206\154\325\015\144\241\375\103\167\250"
	"\172\231\377\267\317\242\312\371\371\172\322\122\334\000\213\364"
	"\040\151\112\103\205\320\260\132\336\024\373\333\127\162\204\322"
	"\014\203\211\333\046\124\324\040\316\247\162\252\250\376\237\310"
	"\150\351\014\355\272\274\110\231\321\167\207\274\332\217\022\353"
	"\071\102\314\226\010\047\355"
#define      inlo_z	3
#define      inlo	((&data[6134]))
	"\142\333\102"
#define      msg1_z	42
#define      msg1	((&data[6145]))
	"\377\000\114\363\252\244\363\362\003\163\261\350\150\271\362\025"
	"\006\354\005\116\023\241\226\351\031\006\016\244\111\262\045\025"
	"\303\173\015\132\050\355\236\255\333\066\300\145\154\277\277\375"
	"\266\242\366\113\045\155\322\341\107"
#define      xecc_z	15
#define      xecc	((&data[6197]))
	"\234\066\377\024\137\201\171\161\242\372\273\205\240\140\145\277"
	"\173\146"
#define      lsto_z	1
#define      lsto	((&data[6212]))
	"\374"
#define      tst1_z	22
#define      tst1	((&data[6216]))
	"\065\144\000\113\053\112\105\362\011\233\220\077\030\044\203\143"
	"\262\044\077\153\173\005\326\341\116\352"/* End of data[] */;
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
