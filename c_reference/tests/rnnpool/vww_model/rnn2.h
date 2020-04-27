static float mean2[HIDDEN_DIMS1 * PATCH_DIM] = {0.0};
static float stdDev2[HIDDEN_DIMS1 * PATCH_DIM] = {1.0};

static float W2[HIDDEN_DIMS1 * HIDDEN_DIMS2] = { 3.328921273350715637e-02,4.839901626110076904e-02,8.630067855119705200e-02,-3.623228371143341064e-01,3.617477416992187500e-02,-1.013135910034179688e-01,-1.616892337799072266e+00,9.920979291200637817e-02,-3.237796723842620850e-01,-2.648477256298065186e-01,2.549230158329010010e-01,1.056594774127006531e-01,-5.211604386568069458e-02,-5.569029450416564941e-01,7.901080884039402008e-03,4.476135373115539551e-01,-6.069063544273376465e-01,4.720874130725860596e-01,5.098583698272705078e-01,4.149395599961280823e-02,-2.221289835870265961e-02,2.892487943172454834e-01,1.637366861104965210e-01,-4.640549048781394958e-02,3.176147341728210449e-01,-2.042243480682373047e-01,3.439170718193054199e-01,2.087370865046977997e-02,2.785135433077812195e-02,3.186852931976318359e-01,5.935984104871749878e-02,-3.889196217060089111e-01,-8.808585256338119507e-02,1.615403443574905396e-01,-4.946086406707763672e-01,-1.174109801650047302e-02,2.072153845801949501e-03,4.303685724735260010e-01,-7.063516974449157715e-02,-3.901343047618865967e-01,4.995678067207336426e-01,4.996369481086730957e-01,-8.396717905998229980e-02,-3.785453736782073975e-01,1.230286993086338043e-02,-3.816023766994476318e-01,1.118507459759712219e-01,1.944433003664016724e-01,-8.141241967678070068e-02,-5.713146924972534180e-02,6.110856309533119202e-02,2.926556952297687531e-02,-1.405209898948669434e-01,-5.008732676506042480e-01,5.522043444216251373e-03,-8.167469501495361328e-01,-5.527251958847045898e-02,-6.109619140625000000e-02,2.462622970342636108e-01,-1.656581298448145390e-04,1.710500240325927734e+00,-6.598105430603027344e-01,2.383397147059440613e-02,-5.196015834808349609e-01 };
static float U2[HIDDEN_DIMS2 * HIDDEN_DIMS2] = { 3.934212923049926758e-01,-4.295524582266807556e-02,1.002475544810295105e-01,-1.167084053158760071e-01,7.208147644996643066e-02,7.301057875156402588e-02,7.414811104536056519e-02,-1.667873002588748932e-02,2.627835571765899658e-01,2.479245215654373169e-01,-2.347197830677032471e-01,2.314671277999877930e-01,1.421915292739868164e-01,-4.386771023273468018e-01,4.338171705603599548e-02,1.125133633613586426e-01,-9.242479503154754639e-02,1.447719633579254150e-01,3.752615749835968018e-01,2.763805091381072998e-01,-7.362117618322372437e-02,-1.142739504575729370e-01,1.064843088388442993e-01,-8.647724986076354980e-03,1.917631626129150391e-01,8.766186982393264771e-02,-2.752942740917205811e-01,2.459737062454223633e-01,4.787993803620338440e-02,8.056888729333877563e-02,2.883537299931049347e-02,6.972444709390401840e-03,2.150612622499465942e-01,2.176617681980133057e-01,-9.746207296848297119e-02,3.679830208420753479e-02,2.094942629337310791e-01,-2.684409022331237793e-01,6.217004358768463135e-02,-3.187925368547439575e-02,7.392763346433639526e-02,4.104424268007278442e-03,-1.972307413816452026e-01,-2.362748086452484131e-01,3.649697601795196533e-01,3.465250432491302490e-01,7.446446269750595093e-02,5.720932036638259888e-02,-5.659309402108192444e-02,-4.538772255182266235e-02,6.283282488584518433e-02,-3.104292228817939758e-02,-1.333466079086065292e-02,-7.922663539648056030e-02,6.666561216115951538e-02,4.965405911207199097e-02,-4.473730921745300293e-02,-2.271021008491516113e-01,1.190942153334617615e-02,-6.096216291189193726e-02,2.375180423259735107e-01,-1.497552990913391113e-01,-4.494012892246246338e-01,-6.579961627721786499e-02 };

static float Bg2[HIDDEN_DIMS2] = { -1.537145614624023438e+00,-6.593755483627319336e-01,-8.165745735168457031e-01,-1.047435641288757324e+00,-1.003585577011108398e+00,-1.275580763816833496e+00,-9.717565178871154785e-01,-1.349884271621704102e+00 };
static float Bh2[HIDDEN_DIMS2] = { 1.249589323997497559e+00,2.501939237117767334e-01,3.707601428031921387e-01,1.205096021294593811e-01,6.529558449983596802e-02,-2.186506539583206177e-01,-1.120083108544349670e-01,-1.578094959259033203e+00 };

static float zeta2 = 9.999979734420776367e-01;
static float nu2 = 1.968388687600963749e-06;
