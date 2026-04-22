//
// Created by USER on 4/15/2026.
//
coord coord :: operator +( coord &ob2)
{
    coord temp ;
    temp .x = x + ob2 .x;
    temp .y = y + ob2 .y;
    return temp ;
}