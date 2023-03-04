#include <iostream>
#include <vector>
#include <cmath>
#include <time.h>
using namespace std;

class Solution {
public:
    int countTriplets(vector<int>& nums) {
        int ans = 0;
        for(auto i : nums){
            for(auto j : nums){
                for(auto k : nums){
                    if((i & j & k) == 0){
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};


int main(){
    vector<int> v1{1002,27482,49623,20452,48825,50289,15671,63437,1827,56597,33596,10051,16934,38896,18248,54946,14387,25169,33214,22267,54011,17293,5831,10144,41087,36933,4148,65080,31420,20934,47786,1591,28458,43543,63054,49914,58009,7792,28165,2083,17825,25185,22532,24493,52630,12421,54034,35515,22200,36191,10579,32470,1438,56555,21730,22547,65218,40203,27371,51816,4434,37388,34124,56441,38417,31802,34093,51242,22762,36555,46359,65244,45461,63037,26151,39897,48843,22833,17640,63755,22841,65529,55854,14160,54278,64462,18141,43545,50435,5457,53695,20208,46293,62268,2300,40089,19163,7514,46652,64162,33600,22698,29431,27172,34858,26815,5267,64187,65320,11412,15796,28636,45792,2054,54755,41840,17648,57073,43333,20769,35903,64175,3174,46429,55667,45371,9176,39134,51508,27433,38170,16611,20496,52990,32079,29413,8053,24541,34125,15139,52948,25146,15629,20204,54032,59253,62934,995,49407,34438,8163,16156,18460,26490,30849,61393,3824,46476,55974,23416,16332,14503,19715,9522,36154,16410,1785,15245,53780,27352,57903,61840,15948,36698,57741,38103,11010,16249,64724,19620,56865,52101,48626,47313,51772,55535,4087,10997,33130,13925,34944,32321,8308,5633,763,54069,5357,63017,64476,48869,29516,18074,27030,22629,25971,47591,58492,10336,15903,13755,2971,55980,33506,4393,29245,29531,50984,49898,8813,41082,33402,884,9682,43702,24053,63156,32882,45107,8756,31421,48111,54623,13081,26011,31033,28860,31158,19392,53000,59839,22872,41802,24949,37929,45582,32867,44209,49620,55266,12373,14181,33709,33400,52935,33907,58985,50960,33181,54154,31185,22394,28404,29898,42633,3418,47809,63454,30069,4507,13189,6764,16800,52029,68,57250,61574,12124,11376,63292,23617,53200,590,64932,1080,39817,60846,54477,20342,53875,25758,32755,23807,23246,38146,51253,45841,50336,935,34845,23120,13671,60348,12898,12089,11718,43128,40090,33137,38456,61641,56440,59371,3549,58812,2054,42443,61003,32929,27480,21741,60039,60684,40575,46820,22225,9055,64159,43058,17982,64034,39909,21665,58708,5105,52701,10458,7056,16970,46846,39846,27608,10423,60539,50219,44975,53274,50740,7367,50682,54966,48939,31606,44986,6554,50092,17185,51454,41633,33362,35128,4897,2680,971,50825,9076,8052,25235,64074,58059,20531,53726,5575,25692,37958,64634,3192,27028,60267,1809,39261,26174,36717,46094,26653,58461,62633,64556,3589,54842,57565,9529,61697,8330,13586,62622,54446,37784,18861,16561,26420,589,41704,3378,50715,4598,672,18655,50639,54567,33246,61492,7504,21772,48519,21189,9526,37903,4100,24446,16637,21745,31796,35107,5528,20678,25145,26430,31459,27909,4851,14373,42223,54313,33517,9711,4618,10216,25168,37041,43532,34364,37046,23083,43620,47635,26353,53406,48754,59293,30588,22624,50934,2463,25157,64041,22430,33575,16368,5042,7271,28521,40566,35766,33992,7317,2638,23507,61766,11784,17646,31663,59913,62060,85,42460,15476,42892,48683,58139,44788,55522,51411,10532,2863,48416,34466,65396,10806,25249,18860,57586,31699,59876,46346,65457,39307,63973,11364,28945,37905,64113,37216,56706,41189,33580,25653,24158,19347,13852,63083,35157,56745,57996,61754,15608,22133,41493,21106,9432,49798,36070,35161,46561,7519,60418,31445,45339,39342,39664,46524,5819,32553,13781,25538,33537,23196,26654,47898,2839,62691,39578,10718,36517,5304,32864,45130,27510,20590,44152,61294,57254,25255,56583,7538,3848,64434,49997,40303,36620,20242,58922,55885,31569,14443,44328,47591,65241,51798,5979,64876,56001,38176,21687,48033,39100,6276,36930,1323,51688,53974,47848,5995,38541,25650,8414,58464,61754,60442,34813,56651,12965,19364,59553,38690,14812,8526,14962,32506,19889,48131,17780,5140,58865,43505,63836,11927,57041,1126,35246,31440,8270,53419,17750,58879,45836,55860,56785,51890,48266,266,9399,13574,37845,221,8333,31782,2691,20889,14417,11429,20749,57751,15167,42543,48103,44255,12369,22924,17836,35300,63506,14278,36200,4291,24613,62532,59537,6239,55871,46904,60157,30200,27692,58730,35137,49896,11641,4484,28868,21433,33546,22565,56530,48208,25162,8248,46520,35460,9957,2279,40416,33832,37713,27253,30717,25652,5749,35081,7969,44137,49113,11005,13206,15775,39223,26639,58165,35911,34448,14319,5954,60601,6529,8534,12799,37802,41879,28287,25880,42010,17176,52458,41946,39509,1892,22634,50387,13494,42237,63879,28871,33944,13896,459,15505,30922,39601,54783,19006,21564,47228,43534,46826,57493,5811,8158,32528,40147,42865,15079,8919,60387,15733,1168,18540,33895,41507,48444,9541,33284,20984,47492,23559,53159,12557,65188,34173,27777,47556,24828,2325,28893,18860,43333,34518,54401,32065,10180,9738,37527,17358,13867,61720,9128,60035,35142,61401,54986,19587,30814,5589,24030,60733,6619,16098,2800,56415,44799,38623,30517,17042,38393,46053,51970,10647,40979,44487,38087,47694,33933,62563,42610,41159,862,9407,39391,50260,9454,41735,10115,50017,53818,40672,4450,18313,17664,30659,51122,37900,65008,46415,9264,64168,3841,21814,41762,25590,1453,19430,15850,50865,38833,9436,57187,13959,20950,57325,50149,27579,34030,64170,46583,46906,42977,64765,60555,19545,29173,41660,15525,42420,59196,20072,24112,29487,25317,42160,3405,50904,18700,40763,27778,40061,37286,33918,10506,493,7010,25224,16849,31771,30856,33776,8697,32598,62291,11271,1018,22209,46432,56410,7160,2044,20325,40765,60319,21654,51076,8356,42006,16381,49884,59777,28928,45037,23202,55644,26878,38278,64648,36545,29676,6295,62234,34399,45927,42898,15561,41751,6332,3754,55110,39372,19750,34526,36562,44418,8,9466,6105,49354,29644,13002,24542,43873,30226,35773,61442,26235,6766,7021,47495,20478,7539,50998,58249,6708,40403,48528,16111,54831,44827,29135,10860,16897,54360,10997,46178,37417,36747,1070,8041,20303,41309,24997,16809,25155,30350,38966,36683,24118,27883,52837,38601,63601,39483,18565,33627,30992,55897,48332,57710,47043,16598,17879,10735,57608,58987,21205,1521,31081,51667,46068,44276,1377,6679,47789,53644,11941,53502,62343,39428,36157,2157,27128,30605,62485,28892,780,37165,4464,65012,43233,47126,45448,61669,26538,18280,5158,1495};
    Solution s1;
    clock_t start,end;
    start = clock();
    cout << s1.countTriplets(v1);
    end = clock();
    cout<<"运行时间"<<(double)(end-start)/CLOCKS_PER_SEC<<endl;
//     cout << (1 << 16) << endl;
//     cout << pow(2, 16) << endl;
}