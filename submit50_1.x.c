#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	shc -r -T -f ./submit50_1 
#endif

static  char data [] = 
#define      tst1_z	22
#define      tst1	((&data[1]))
	"\073\001\213\044\102\072\334\012\355\043\371\040\100\372\173\246"
	"\146\276\035\110\011\353\350\036\353\121"
#define      xecc_z	15
#define      xecc	((&data[27]))
	"\126\155\327\135\277\260\331\254\071\077\113\276\335\175\303\027"
	"\352\152\202"
#define      pswd_z	256
#define      pswd	((&data[85]))
	"\332\273\252\314\352\352\064\154\136\253\266\110\002\060\304\103"
	"\312\377\142\266\120\310\045\023\036\017\175\240\027\034\304\361"
	"\327\157\276\302\131\362\057\267\046\266\052\024\025\045\213\251"
	"\042\366\211\261\247\032\146\105\057\312\256\257\362\301\360\116"
	"\206\051\247\370\332\060\360\001\347\032\025\374\077\240\246\142"
	"\226\057\024\075\111\172\203\170\105\061\050\067\362\030\206\170"
	"\102\056\161\034\137\142\035\106\174\063\102\274\323\350\037\152"
	"\027\063\250\141\256\053\331\363\135\001\053\120\032\261\311\134"
	"\340\073\171\077\235\227\205\031\312\310\326\236\261\365\010\311"
	"\051\261\052\327\335\004\313\072\006\366\212\041\250\124\175\210"
	"\217\367\307\054\216\115\106\130\025\034\366\306\022\377\220\073"
	"\260\272\023\215\276\336\310\305\324\123\346\174\247\144\005\066"
	"\133\314\142\351\032\251\102\057\305\071\366\330\070\206\024\351"
	"\101\047\166\000\005\077\305\332\222\254\126\071\020\133\160\154"
	"\050\322\126\102\174\230\162\101\321\151\032\012\360\056\363\061"
	"\126\151\061\133\251\367\065\073\243\214\165\263\350\345\040\021"
	"\270\166\124\064\016\306\166\340\060\220\352\040\277\335\121\025"
	"\107\203\161\360\172\247\053\036\064\241\322\035\206\362\056\077"
	"\150\202\164\166\111\352\126\171\235\345\000\237\025\304\343\340"
	"\303"
#define      inlo_z	3
#define      inlo	((&data[350]))
	"\177\334\234"
#define      msg1_z	42
#define      msg1	((&data[361]))
	"\053\313\244\314\342\301\221\324\363\325\260\210\204\232\240\106"
	"\355\037\346\323\225\145\023\076\207\001\064\004\153\226\242\072"
	"\012\237\152\160\347\240\222\345\334\302\216\145\275\235\034\314"
	"\264\355\230"
#define      date_z	1
#define      date	((&data[404]))
	"\064"
#define      lsto_z	1
#define      lsto	((&data[405]))
	"\366"
#define      shll_z	10
#define      shll	((&data[406]))
	"\214\334\355\130\174\140\373\100\332\277\020"
#define      opts_z	1
#define      opts	((&data[417]))
	"\350"
#define      msg2_z	19
#define      msg2	((&data[419]))
	"\352\176\051\315\177\343\144\341\115\374\334\335\072\114\363\023"
	"\344\013\010\363\373\255"
#define      chk2_z	19
#define      chk2	((&data[443]))
	"\043\202\172\360\131\215\027\146\307\210\355\370\156\104\055\053"
	"\302\071\033\014\213\313\360\145\073\201"
#define      chk1_z	22
#define      chk1	((&data[470]))
	"\315\057\332\122\331\271\325\106\267\124\123\357\311\104\062\316"
	"\376\023\337\335\222\305\241\167\320\077\271\353\165"
#define      rlax_z	1
#define      rlax	((&data[495]))
	"\357"
#define      text_z	3023
#define      text	((&data[1115]))
	"\023\152\311\017\030\301\306\355\345\111\147\325\256\242\126\350"
	"\166\330\265\245\263\010\137\236\176\207\232\267\066\154\225\111"
	"\327\136\130\357\037\037\334\004\150\104\332\027\346\061\000\135"
	"\011\266\003\274\276\142\133\075\352\366\364\040\142\211\151\071"
	"\350\302\051\010\342\006\015\113\112\347\142\061\030\142\217\042"
	"\030\222\337\327\365\072\024\337\060\010\377\223\222\151\315\173"
	"\054\366\203\017\375\220\132\110\170\274\172\221\037\011\263\070"
	"\233\223\017\221\315\043\160\376\054\160\221\277\332\137\072\006"
	"\126\275\025\123\116\160\233\306\054\025\130\114\037\014\204\272"
	"\237\223\114\155\267\274\153\344\054\375\243\006\134\335\015\262"
	"\233\043\005\352\223\241\261\300\267\011\014\326\025\220\221\264"
	"\044\335\042\334\231\215\300\306\213\143\315\347\101\332\232\335"
	"\376\240\307\221\101\170\121\371\202\136\317\227\356\140\114\023"
	"\076\156\357\330\374\257\237\207\023\154\156\125\107\010\062\105"
	"\251\372\327\352\162\050\343\364\206\263\214\165\024\330\211\122"
	"\107\170\053\103\050\312\313\074\067\072\221\176\103\303\304\354"
	"\275\233\326\060\304\272\045\113\156\261\300\202\212\112\325\322"
	"\302\000\026\353\312\341\047\001\033\271\200\137\175\105\113\072"
	"\340\042\153\245\334\220\360\112\102\261\315\315\373\242\237\276"
	"\243\266\252\155\227\321\157\263\213\360\022\010\065\135\103\026"
	"\177\256\273\134\077\253\247\201\135\165\117\130\027\356\026\272"
	"\244\301\050\074\223\230\360\036\210\002\046\276\140\151\324\340"
	"\030\217\074\127\073\344\331\230\131\050\361\161\027\010\054\274"
	"\311\124\371\134\355\351\172\166\354\241\064\114\012\010\054\043"
	"\230\151\172\323\116\124\154\247\175\136\031\225\146\105\122\057"
	"\232\113\214\210\065\006\376\041\247\062\155\262\073\232\326\323"
	"\004\120\247\122\245\024\372\042\162\023\270\330\131\012\010\363"
	"\126\224\174\213\233\172\254\103\254\032\366\350\264\314\274\271"
	"\035\143\013\302\170\006\345\352\032\235\303\163\250\313\147\376"
	"\140\343\211\373\136\066\076\013\120\065\363\005\001\257\276\036"
	"\023\312\340\213\321\306\166\353\144\072\137\014\006\307\013\146"
	"\253\224\142\011\313\241\025\033\326\010\041\327\270\340\365\313"
	"\253\326\127\174\234\316\150\001\010\310\015\016\217\030\164\073"
	"\255\326\105\170\170\132\224\116\143\265\045\033\226\033\347\101"
	"\362\077\275\217\015\046\220\025\356\235\043\176\266\230\272\144"
	"\157\377\335\347\132\161\066\275\047\133\331\275\167\301\377\151"
	"\000\275\370\015\343\210\043\321\046\107\117\335\340\012\101\120"
	"\011\036\067\144\220\155\042\270\311\373\166\101\275\165\252\275"
	"\062\243\313\025\053\357\347\122\066\067\060\345\100\243\165\332"
	"\125\260\252\314\225\177\033\204\230\125\001\332\030\372\055\345"
	"\067\257\146\200\044\105\373\343\200\120\072\344\306\222\055\264"
	"\360\271\145\145\053\046\331\202\231\220\370\027\335\035\230\020"
	"\264\044\367\354\037\107\104\071\312\075\245\064\211\166\022\153"
	"\377\315\331\120\313\317\213\117\006\004\070\110\131\307\311\367"
	"\243\133\045\256\366\337\312\347\343\064\052\143\057\242\272\005"
	"\117\041\350\235\044\055\251\337\204\116\357\226\357\115\032\114"
	"\227\256\044\246\140\143\043\221\012\004\114\017\020\363\160\207"
	"\062\010\263\074\062\225\050\011\105\353\312\006\006\060\301\357"
	"\055\040\022\315\172\314\047\326\103\012\134\363\261\150\051\151"
	"\204\160\113\244\366\035\007\136\342\316\023\046\072\252\232\201"
	"\132\077\316\123\177\112\166\301\112\330\313\304\014\234\063\150"
	"\122\375\054\267\142\223\143\012\113\050\177\206\261\122\351\113"
	"\265\371\014\064\357\227\077\357\171\226\267\354\334\321\363\051"
	"\365\262\250\362\264\117\157\127\225\315\040\161\320\276\270\106"
	"\210\014\342\370\124\071\356\335\224\130\041\244\325\222\244\224"
	"\322\347\337\076\364\163\212\327\362\314\303\360\244\102\212\042"
	"\316\153\024\377\014\215\303\050\243\231\277\242\116\357\210\044"
	"\203\061\156\264\220\366\336\046\346\244\315\206\041\170\145\173"
	"\163\151\044\147\200\150\022\247\000\315\231\274\011\153\307\341"
	"\311\136\074\275\030\273\330\176\047\153\157\220\236\070\123\352"
	"\060\323\070\136\314\001\301\356\103\345\077\277\062\151\174\160"
	"\132\371\047\356\155\314\366\126\165\047\147\067\041\256\323\260"
	"\254\346\012\152\224\301\236\025\272\270\245\157\250\032\264\115"
	"\205\031\227\044\357\302\057\171\255\202\176\337\151\015\234\036"
	"\047\236\235\160\056\374\145\352\303\044\051\156\315\353\074\041"
	"\167\162\265\376\250\357\355\007\022\131\340\053\234\230\261\221"
	"\224\003\243\336\236\372\303\026\167\271\011\027\240\274\307\253"
	"\273\273\346\062\307\167\162\024\273\107\167\264\252\064\154\017"
	"\035\232\245\223\157\271\115\344\325\361\106\342\375\030\263\230"
	"\072\037\016\170\104\057\306\346\155\241\303\003\076\174\343\240"
	"\124\354\251\354\154\100\063\160\321\237\012\232\377\033\150\274"
	"\012\201\276\273\035\136\154\377\106\333\246\243\313\371\107\306"
	"\032\052\054\014\277\126\145\044\112\207\107\330\112\060\077\061"
	"\226\170\205\253\374\327\160\327\167\004\062\310\336\123\377\146"
	"\036\353\271\356\170\334\227\113\267\331\176\172\261\225\027\273"
	"\337\004\025\304\202\065\246\244\356\203\313\276\056\275\017\231"
	"\273\160\236\130\152\361\014\076\032\121\151\360\051\042\206\164"
	"\021\240\030\251\207\321\032\233\151\125\203\154\072\010\022\257"
	"\056\063\257\000\144\322\203\020\312\116\260\354\356\376\314\321"
	"\126\012\062\000\320\105\111\360\127\357\063\122\022\014\236\211"
	"\356\253\353\224\200\156\150\360\306\377\323\142\172\155\363\152"
	"\176\117\120\041\051\301\233\272\026\030\130\163\025\276\154\336"
	"\053\242\333\067\215\100\072\350\271\071\245\321\274\217\232\065"
	"\154\344\252\155\214\106\117\324\215\334\275\132\207\135\007\246"
	"\122\205\050\237\330\267\217\072\245\050\101\372\340\116\353\102"
	"\166\205\070\254\327\312\121\356\041\044\101\131\006\302\254\220"
	"\041\272\156\237\370\243\063\375\006\207\016\302\302\011\133\332"
	"\262\270\140\256\051\226\176\313\023\023\052\070\074\064\064\241"
	"\144\111\354\120\227\377\271\353\135\230\226\201\245\223\201\061"
	"\103\315\117\246\145\200\326\213\214\130\036\122\277\253\307\317"
	"\050\107\347\225\351\004\337\042\045\110\062\166\304\026\144\373"
	"\345\231\363\373\267\005\157\007\070\250\234\004\341\031\063\344"
	"\177\247\361\164\203\024\305\064\370\325\046\301\156\317\064\215"
	"\276\256\066\026\330\263\300\310\370\302\020\224\265\224\261\345"
	"\366\265\276\215\132\111\314\137\004\377\117\306\004\162\033\157"
	"\211\170\035\261\213\237\150\243\040\332\130\116\137\171\321\043"
	"\015\246\066\070\256\151\324\035\061\000\221\010\256\100\161\244"
	"\132\156\151\365\177\331\032\354\300\316\176\317\060\262\167\134"
	"\001\336\357\266\155\267\365\072\232\337\247\336\023\260\270\042"
	"\375\073\051\205\335\007\176\203\156\054\032\354\135\024\077\035"
	"\322\271\076\323\006\227\150\235\226\112\052\202\076\220\260\056"
	"\056\204\101\027\001\141\221\100\041\206\167\271\230\141\156\046"
	"\274\335\176\137\123\362\346\254\017\223\073\243\171\111\320\110"
	"\143\235\251\073\152\263\302\323\141\206\131\245\226\037\212\326"
	"\201\273\146\327\304\120\206\261\022\107\041\341\337\347\024\266"
	"\240\173\003\065\074\155\106\372\265\136\207\100\340\332\251\201"
	"\125\003\275\056\007\061\250\276\322\071\057\171\163\101\225\151"
	"\253\163\207\300\023\157\247\166\312\054\152\011\172\206\255\057"
	"\341\321\124\112\003\047\045\015\311\341\103\135\256\322\072\002"
	"\110\221\170\376\230\265\070\312\304\263\312\015\030\125\252\137"
	"\333\342\352\163\242\176\164\261\033\205\301\055\161\022\361\357"
	"\036\016\150\350\013\203\035\243\376\330\166\240\016\270\177\301"
	"\150\116\001\370\161\057\267\226\173\051\030\230\140\276\077\305"
	"\123\211\303\151\026\007\040\355\204\213\051\045\213\240\011\377"
	"\225\164\126\127\122\104\321\061\225\246\025\265\242\267\322\020"
	"\353\015\372\265\335\243\345\261\033\001\310\160\173\015\121\116"
	"\253\265\232\356\057\223\235\212\052\346\105\351\077\101\321\051"
	"\311\055\322\141\046\327\371\053\015\153\036\223\070\160\334\017"
	"\376\221\335\130\272\100\304\066\366\036\345\345\131\102\165\012"
	"\337\346\124\020\045\157\033\024\275\376\007\123\264\376\050\314"
	"\304\031\345\020\200\315\355\103\137\150\200\160\117\155\165\323"
	"\320\055\240\253\244\276\253\174\021\273\032\301\110\265\122\014"
	"\007\041\314\065\262\032\075\170\150\243\020\102\156\105\316\107"
	"\347\217\373\116\177\354\050\306\331\023\162\007\037\026\212\252"
	"\276\276\130\264\131\361\377\217\152\051\103\220\104\170\113\313"
	"\005\373\054\354\116\205\347\034\057\061\363\262\017\273\226\053"
	"\152\245\155\240\111\061\002\377\076\311\342\144\331\256\023\132"
	"\256\307\235\047\342\351\101\065\113\006\204\042\245\133\037\375"
	"\256\336\242\206\323\017\131\225\353\232\210\242\313\346\064\106"
	"\233\127\072\034\020\332\375\005\063\313\330\043\116\001\265\027"
	"\146\060\206\040\057\327\330\065\333\315\150\304\243\244\132\105"
	"\225\253\216\065\070\042\377\376\362\070\216\323\323\131\312\213"
	"\235\120\232\116\127\236\333\105\023\370\011\272\320\075\206\277"
	"\035\177\213\020\247\230\152\073\230\126\136\366\347\004\257\223"
	"\346\326\313\000\207\333\117\271\123\251\155\250\153\207\227\007"
	"\256\145\230\063\126\025\161\004\050\142\361\316\245\170\015\313"
	"\215\006\021\213\226\054\126\344\333\305\244\000\130\117\367\025"
	"\232\162\235\152\213\157\033\060\041\356\070\155\335\220\207\260"
	"\013\060\152\155\202\073\205\220\161\047\271\261\316\005\044\127"
	"\331\316\171\217\370\135\307\123\045\234\174\215\132\172\014\171"
	"\015\144\201\105\272\046\113\332\140\213\277\120\334\341\066\141"
	"\064\343\334\053\361\330\111\133\037\135\266\025\052\075\310\043"
	"\250\263\033\177\034\265\274\030\265\377\317\267\023\026\335\060"
	"\123\177\333\172\132\234\366\034\034\102\263\317\277\233\245\307"
	"\374\335\150\111\245\241\354\346\204\130\243\101\166\222\364\023"
	"\030\232\066\230\305\317\140\170\267\326\237\152\066\073\206\257"
	"\304\117\206\031\216\043\170\351\025\362\247\315\053\363\113\034"
	"\355\162\260\315\317\360\377\111\127\075\245\235\246\040\073\160"
	"\057\027\307\362\141\363\015\321\345\036\340\307\167\137\215\243"
	"\320\121\232\217\165\341\161\144\226\106\020\305\106\334\202\310"
	"\206\277\164\353\033\313\354\155\046\151\325\310\355\107\313\111"
	"\114\364\207\353\010\313\042\104\071\131\004\307\157\135\063\243"
	"\157\321\004\213\273\103\272\275\150\125\317\307\014\007\255\077"
	"\016\031\333\220\224\224\372\373\057\014\021\200\036\244\247\075"
	"\336\021\342\325\220\357\165\156\271\303\076\134\355\110\053\035"
	"\350\021\141\137\012\126\106\056\223\324\333\011\334\071\364\245"
	"\300\221\015\303\104\170\047\241\131\135\055\027\260\301\004\034"
	"\060\073\233\307\361\113\361\315\105\377\022\017\246\215\010\244"
	"\357\334\210\311\156\134\374\326\105\106\321\357\326\220\301\301"
	"\201\312\221\010\367\101\134\262\372\250\176\135\051\111\023\206"
	"\104\140\316\026\110\350\014\000\162\042\046\304\322\032\045\311"
	"\164\167\122\266\312\262\022\276\055\310\177\256\245\111\016\023"
	"\070\241\224\374\062\077\167\307\045\207\215\000\254\052\227\333"
	"\316\104\064\266\373\356\242\212\121\235\340\363\146\041\311\224"
	"\374\317\300\221\034\367\226\154\044\061\215\302\252\220\165\265"
	"\326\371\046\001\140\003\106\073\164\224\170\226\256\241\307\357"
	"\245\335\135\006\070\150\145\145\047\213\231\166\122\315\211\334"
	"\353\004\145\010\063\314\163\347\155\372\375\175\317\223\131\114"
	"\245\211\166\056\153\073\277\204\312\016\146\035\204\303\177\004"
	"\311\342\127\275\121\155\366\310\047\317\277\064\326\342\240\064"
	"\132\140\373\045\214\335\273\016\256\060\350\073\234\013\041\150"
	"\244\232\236\335\115\057\102\057\317\125\317\232\221\127\012\010"
	"\362\355\072\006\126\162\004\206\026\216\270\070\157\275\126\335"
	"\140\053\343\201\272\014\247\265\072\003\232\136\046\077\342\335"
	"\214\065\207\364\150\057\353\214\123\312\140\257\172\112\332\241"
	"\140\132\043\240\373\044\365\363\247\317\107\164\361\302\214\177"
	"\025\022\337\004\110\131\063\354\323\321\056\120\327\173\106\062"
	"\043\142\024\257\112\063\102\361\267\375\241\374\273\335\062\257"
	"\210\245\277\046\227\301\261\306\003\002\201\006\210\100\272\367"
	"\231\356\062\301\054\212\327\037\212\301\243\303\155\043\165\205"
	"\266\077\304\161\063\212\110\243\315\061\003\360\077\325\140\244"
	"\237\227\227\352\003\254\355\275\246\123\013\100\312\277\234\102"
	"\355\356\003\375\165\350\016\171\334\072\014\025\370\320\216\021"
	"\155\343\216\001\102\017\331\061\365\207\236\043\313\324\024\023"
	"\147\364\167\067\267\227\061\073\120\224\301\371\302\301\341\070"
	"\061\105\212\104\130\272\254\243\261\140\051\223\126\260\032\254"
	"\056\260\132\347\216\246\011\216\254\151\071\172\223\253\162\131"
	"\127\063\267\141\031\303\140\352\042\273\257\172\125\312\140\164"
	"\103\114\315\051\256\151\153\115\364\027\031\133\321\251\221\051"
	"\306\112\243\276\173\361\216\107\011\357\210\057\377\364\312\332"
	"\177\372\037\306\145\302\377\223\014\140\305\065\203\103\104\242"
	"\350\321\166\001\136\120\025\051\136\172\167\021\142\041\017\251"
	"\073\134\127\024\113\255\133\167\152\073\235\263\265\203\334\225"
	"\347\262\170\270\343\114\146\367\125\153\146\006\164\375\103\336"
	"\234\010\316\017\246\221\067\032\005\172\112\174\125\037\024\303"
	"\120\014\171\046\066\012\145\375\004\353\201\101\061\311\322\114"
	"\155\061\342\261\353\004\057\301\370\141\226\317\060\003\201\352"
	"\203\074\375\257\260\042\132\050\324\252\245\043\056\025\207\305"
	"\107\304\315\351\012\175\051\106\120\132\174\335\014\002\007\230"
	"\220\364\153\143\070\355\320\017\221\332\221\072\012\146\244\070"
	"\056\132\067\030\322\002\135\254\340\036\233\167\315\061\075\011"
	"\005\113\200\340\030\032\166\371\033\323\107\021\244\076\335\304"
	"\057\120\342\235\353\131\044\065\117\241\072\143\244\053\054\100"
	"\103\343\164\144\004\036\105\364\001\353\217\061\023\272\355\101"
	"\053\363\141\146\026\325\015\054\040\077\313\374\004\335\350\042"
	"\260\017\377\132\004\370\114\210\340\152\123\005\270\150\254\371"
	"\176\051\071\236\303\334\362\356\210\057\176\013\224\137\371\131"
	"\143\214\067\301\360\147\033\051\341\031\210\270\244\377\021\051"
	"\137\015\203\252\110\131\155\231\362\061\077\040\375\236\040\023"
	"\017\256\036\145\004\170\053\112\064\042\253\172\373\310\244\351"
	"\334\061\067\047\157\226\312\174\022\304\357\151\247\245\100\260"
	"\140\170\220\130\134\265\040\035\034\055\136\054\151\210\173\340"
	"\346\152\275\374\040\036\231\175\312\046\306\324\366\122\265\121"
	"\344\103\364\041\234\137\310\300\105\346\066\204\045\113\206\010"
	"\254\336\370\213\323\005\046\270\051\234\253\336\240\362\000\346"
	"\026\206\271\323\263\011\025\266\352\370\303\347\316\007\122\271"
	"\222\375\311\037\131\205\120\247\354\043\237\226\336\021\214\032"
	"\363\325\201\355\011\106\200\020\156\027\335\330\324\056\234\046"
	"\254\214\111\032\336\023\357\212\302\013\155\167\373\223\023\266"
	"\251\000\365\306\370\363\130\323\143\350\245\121\331\302\000\206"
	"\377\032\351\361\035\103\306\262\145\372\251\061\013\124\237\320"
	"\203\277\102\207\106\344\262\357\135\235\065\163\321\027\160\215"
	"\075\277\136\324\024\227\126\313\100\274\262\140\050\040\051\137"
	"\346\330\072\270\156\244\067\227\137\376\245\354\204\344\001\044"
	"\120\140\371\302\220\041\156\224\024\252\165\020\313\340\061\143"
	"\023\236\364\160\230\124\301\012\170\012\230\031\152\151\224\116"
	"\046\206\123\007\165\201\024\254\273\273\164\010\152\230\101\231"
	"\025\140\363\141\233\273\050\144\345\132\027\101\161\147\112\220"
	"\237\257\041\014\321\331\326\314\117\027\212\305\302\107\367\145"
	"\023\015\221\002\364\343\071\053\024\121\154\206\270\267\026\127"
	"\146\070\144\067\021\072\004\141\122\216\046\024\326\036\171\352"
	"\053\013\355\037\357\046\113\003\167\270\211\060\157\237\207\326"
	"\330\353\016\352\046\022\113\170\241\162\215\170\221\007\142\274"
	"\022\117\334\001\166\047\004\356\337\215\036\117\055\246\046\005"
	"\222\064\357\270\107\073\061\350\256\277\141\077\306\304\373\330"
	"\023\330\332\212\000\336\171\337\154\230\057\231\076\125\237\321"
	"\211\217\211\320\313\273\271\171\172\033\271\100\337\264\031\363"
	"\215\363\175\215\321\367\155\076\217\234\330\316\362\167\237\174"
	"\007\051\115\322\344\007\114\137\042\005\240\001\272\271\364\107"
	"\254\162\325\176\152\102\275\371\337\225\310\321\015\150\115\024"
	"\221\232\347\166\241\064\326\303\072\166\305\364\057\272\074\334"
	"\054\022\133\227\124\030\220\063\255\131\004\272\301\122\317\123"
	"\355\267\312\216\353\240\122\045\027\030\032\107\322\127\043\377"
	"\151\177\226\276\227\047\361\105\200\366\000\102\110\320\226\065"
	"\207\140\304\162\001\027\230\030\057\263\137\001\012\203\000\164"
	"\002\226\062\232\275\044\337\076\032\340\200\143\260\026\231\067"
	"\167\135\252\170\164\103\221\243\366\360\245\001\163\245\165\166"
	"\074\250\020\372\314\360\070\346\320\271\112\200\320\343\270\107"
	"\100\143\300\265\246\121\131\234\102\376\236\266\243\023\054\340"
	"\274\074\332\210\054\023\157\374\314\271\175\235\234\065\345\335"
	"\230\245\223\077\367\354\333\071\352\172\357\215\215\034\155\111"
	"\130\110\322\205\133\101\202\050\373\000\305\230\066\252\165\317"
	"\120\010\016\107\365\352\201\337\144\160\154\362\215\332\073\346"
	"\043\016\153\176\117\356\246\112\356\154\343\044\026\131\363\146"
	"\142\002\256\127\354\057\066\120\240\243\103\055\176\176\023\241"
	"\214\176\040\334\155\307\047\133\063\012\200\112\143\163\261\305"
	"\165\137\034\142\216\123\263\056\366\366\134\164\165\157\025\002"
	"\356\065\336\133\374\006\267\060\021\067\172\165\252\053\072\040"
	"\213\127\203\031\252\066\110\240\054\244\025\242\024\052\244\002"
	"\140\203\136\135\211\025\215\232\114\010\020\367\063\112\030\277"
	"\242\233\330\115\321\041\356\376\306\003\240\333\056\105\335\217"
	"\310\073\354\122\120\172\355\235\202\375\224\266\110\254\165\352"
	"\107\116\067\031\160\046\030\066\051\271\021\130\376\357\347\306"
	"\053\324\030\174\116\006\031\320\003\256\207\113\132\374\065\242"
	"\112\155\274\272\224\324\361\275\215\003\026\213\363\375\122\036"
	"\321\153\233\037\161\264\360\164\142\167\300\275\164\366\140\276"
	"\143\034\171\370\360\153\265\176\157\314\012\142\311\134\201\233"
	"\310\034\273\072\321\254\257\063\043\157\361\227\145\121\126\311"
	"\155\320\301\136\074\167\334\253\103\346"
#define      tst2_z	19
#define      tst2	((&data[4794]))
	"\153\070\057\202\141\052\136\306\303\270\154\206\370\031\056\065"
	"\062\215\364\217"/* End of data[] */;
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
#if !defined(TRACEABLE)
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
