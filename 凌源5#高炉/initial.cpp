#include"paichan.h"

void paichan::getprice(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (bricks[i].type[4] == 'R' && bricks[i].left_number <= 0)
        {
            bricks[i + 1].flag = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        bricks[i].price = bricks[i].left_number * bricks[i].flag;
    }
}
//void paichan::changenum(int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        bricks[i].everytime_num_max = 2;
//    }
//}
void paichan::clear(int n)
{
    for (int i = 0; i < n; i++)
    {
        bricks[i].chosen_time = 0;
    }
}

void paichan::initialize()
{

    // 索引 0：ZD00（对应Excel第2行数据）
    bricks[0].type = "ZD00";
    //bricks[0].left_number = 2;
    //bricks[0].weight = 662;
    //bricks[0].everytime_num_max = 1;

    // 索引 1：ZD01（对应Excel第3行数据）
    bricks[1].type = "ZD01";
    //bricks[1].left_number = 10;
    //bricks[1].weight = 293;
    //bricks[0].everytime_num_max = 1;

    // 索引 2：ZD02（对应Excel第4行数据）
    bricks[2].type = "ZD02";
    //bricks[2].left_number = 14;
    //bricks[2].weight = 329;

    // 索引 3：ZD03（对应Excel第5行数据）
    bricks[3].type = "ZD03";
    //bricks[3].left_number = 18;
    //bricks[3].weight = 349;

    // 索引 4：ZD04（对应Excel第6行数据）
    bricks[4].type = "ZD04";
    //bricks[4].left_number = 22;
    //bricks[4].weight = 362;

    // 索引 5：ZD05（对应Excel第7行数据）
    bricks[5].type = "ZD05";
    //bricks[5].left_number = 26;
    //bricks[5].weight = 371;

    // 索引 6：ZD06（对应Excel第8行数据）
    bricks[6].type = "ZD06";
    //bricks[6].left_number = 30;
    //bricks[6].weight = 437;

    // 索引 7：ZD07（对应Excel第9行数据）
    bricks[7].type = "ZD07";
    //bricks[7].left_number = 34;
    //bricks[7].weight = 505;

    // 索引 8：ZD08（对应Excel第10行数据）
    bricks[8].type = "ZD08";
    bricks[8].left_number = 38;
    bricks[8].weight = 510;

    // 索引 9：ZD09（对应Excel第11行数据）
    bricks[9].type = "ZD09";
    bricks[9].left_number = 42;
    bricks[9].weight = 515;

    // 索引 10：ZB01（对应Excel第12行数据）
    bricks[10].type = "ZD10";
    bricks[10].left_number = 45;
    bricks[10].weight = 300;
    //bricks[10].everytime_num_max = 1;
    // 索引 11：ZB02（对应Excel第13行数据）
    bricks[11].type = "ZD11";
    bricks[11].left_number = 45;
    bricks[11].weight = 456;
    //bricks[11].everytime_num_max = 1;
    // 索引 12：ZB03R（对应Excel第14行数据）
    bricks[12].type = "ZB01";
    bricks[12].left_number = 60;
    bricks[12].weight = 473;
    //bricks[12].everytime_num_max = 1;
    // 索引 13：ZB03L（对应Excel第15行数据）
    bricks[13].type = "ZB02";
    bricks[13].left_number = 60;
    bricks[13].weight = 426;
    //bricks[13].everytime_num_max = 1;
    // 索引 14：ZB04R（对应Excel第16行数据）
    bricks[14].type = "ZB03";
    bricks[14].left_number = 3;
    bricks[14].weight = 945;

    // 索引 15：ZB04L（对应Excel第17行数据）
    bricks[15].type = "ZB04";
    bricks[15].left_number = 6;
    bricks[15].weight = 1035;
    //bricks[15].everytime_num_max = 1;
    // 索引 16：ZB05（对应Excel第18行数据）
    bricks[16].type = "ZB05R";
    bricks[16].left_number = 3;
    bricks[16].weight = 925;
    //bricks[16].everytime_num_max = 1;

    // 索引 17：ZB06（对应Excel第19行数据）
    bricks[17].type = "ZB05L";
    bricks[17].left_number = 3;
    bricks[17].weight = 925;
    //bricks[17].everytime_num_max = 1;

    // 索引 18：ZB07（对应Excel第20行数据）
    bricks[18].type = "ZB06R";
    bricks[18].left_number = 3;
    bricks[18].weight = 917;
    //bricks[18].everytime_num_max = 1;
    // 索引 19：ZB08（对应Excel第21行数据）
    bricks[19].type = "ZB06L";
    bricks[19].left_number = 3;
    bricks[19].weight = 917;
    //bricks[18].everytime_num_max = 1;
    // 索引 20：ZB09R（对应Excel第22行数据）
    bricks[20].type = "ZB07";
    bricks[20].left_number = 21;
    bricks[20].weight = 785;

    // 索引 21：ZB09L（对应Excel第23行数据）
    bricks[21].type = "ZB08";
    bricks[21].left_number = 18;
    bricks[21].weight = 838;

    // 索引 22：ZB10R（对应Excel第24行数据）
    bricks[22].type = "ZB09";
    bricks[22].left_number = 3;
    bricks[22].weight = 735;

    // 索引 23：ZB10L（对应Excel第25行数据）
    bricks[23].type = "ZB10";
    bricks[23].left_number = 6;
    bricks[23].weight = 977;

    // 索引 24：ZB11（对应Excel第26行数据）
    bricks[24].type = "ZB11R";
    bricks[24].left_number = 3;
    bricks[24].weight = 673;
    //bricks[24].everytime_num_max = 4;

    // 索引 25：ZB12（对应Excel第27行数据）
    bricks[25].type = "ZB11L";
    bricks[25].left_number = 3;
    bricks[25].weight = 673;
    //bricks[25].everytime_num_max = 1;
    // 索引 26：ZB13（对应Excel第28行数据）
    bricks[26].type = "ZB12R";
    bricks[26].left_number = 3;
    bricks[26].weight = 735;
    //bricks[26].everytime_num_max = 1;
    // 索引 27：ZB14（对应Excel第29行数据）
    bricks[27].type = "ZB12L";
    bricks[27].left_number = 3;
    bricks[27].weight = 735;
    //bricks[27].everytime_num_max = 1;
    // 索引 28：ZB15R（对应Excel第30行数据）
    bricks[28].type = "ZB13";
    bricks[28].left_number = 39;
    bricks[28].weight = 496;

    // 索引 29：ZB15L（对应Excel第31行数据）
    bricks[29].type = "ZB14";
    bricks[29].left_number = 3;
    bricks[29].weight = 702;

    // 索引 30：ZB16R（对应Excel第32行数据）
    bricks[30].type = "ZB15";
    bricks[30].left_number = 12;
    bricks[30].weight = 365;

    // 索引 31：ZB16L（对应Excel第33行数据）
    bricks[31].type = "ZB16R";
    bricks[31].left_number = 3;
    bricks[31].weight = 687;

    // 索引 32：ZB17（对应Excel第34行数据）
    bricks[32].type = "ZB16L";
    bricks[32].left_number = 3;
    bricks[32].weight = 687;

    // 索引 33：ZB18（对应Excel第35行数据）
    bricks[33].type = "ZB17";
    bricks[33].left_number = 21;
    bricks[33].weight = 537;

    // 索引 34：ZB19（对应Excel第36行数据）
    bricks[34].type = "ZB18";
    bricks[34].left_number = 18;
    bricks[34].weight = 483;

    // 索引 35：ZB20（对应Excel第37行数据）
    bricks[35].type = "ZB19";
    bricks[35].left_number = 30;
    bricks[35].weight = 433;

    // 索引 36：ZB21（对应Excel第38行数据）
    bricks[36].type = "ZB20";
    bricks[36].left_number = 30;
    bricks[36].weight = 482;

    // 索引 37：ZB22（对应Excel第39行数据）
    bricks[37].type = "ZB21";
    bricks[37].left_number = 30;
    bricks[37].weight = 411;

    // 索引 38：ZF01（对应Excel第40行数据）
    bricks[38].type = "ZB22";
    bricks[38].left_number = 30;
    bricks[38].weight = 367;
    //bricks[38].everytime_num_max = 4;
    // 索引 39：ZF02（对应Excel第41行数据）
    bricks[39].type = "ZF01";
    bricks[39].left_number = 60;
    bricks[39].weight = 545;
    //bricks[39].everytime_num_max = 4;
    // 索引 40：ZF03（对应Excel第42行数据）
    bricks[40].type = "ZF02";
    bricks[40].left_number = 60;
    bricks[40].weight = 538;

    // 索引 41：ZF04（对应Excel第43行数据）
    bricks[41].type = "ZF03";
    bricks[41].left_number = 30;
    bricks[41].weight = 908;

    // 索引 42：ZF05（对应Excel第44行数据）
    bricks[42].type = "ZF04";
    bricks[42].left_number = 30;
    bricks[42].weight = 452;

    // 索引 43：ZF06（对应Excel第45行数据）
    bricks[43].type = "ZF05";
    bricks[43].left_number = 30;
    bricks[43].weight = 660;
    //bricks[43].everytime_num_max = 4;
    // 索引 44：ZF07（对应Excel第46行数据）
    bricks[44].type = "ZF06";
    bricks[44].left_number = 60;
    bricks[44].weight = 347;
    //bricks[4].everytime_num_max = 4;
    
    bricks[45].type = "ZF07";
    bricks[45].left_number = 60;
    bricks[45].weight = 396;
    //input();
    for (int i = 0; i < 45; i++)
    {
        if (bricks[i].type[4] == 'L')
        {
            bricks[i].flag = 0;
        }
    }
}