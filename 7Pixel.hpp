/* 
 * File:   7Pixel.hpp
 * Author: Project
 *
 * Created on 23 September, 2014, 7:07 PM
 */



#include <cstdlib>
#include<math.h>
#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;


/* Declaration for books */
struct books_t
{
    
    std::vector<float>price;
};
typedef books_t books_t;



/*Declaration for Music CD */
struct music_t
{
    std::vector<float>price;
};
typedef music_t music_t;



/*Declaration for Chocolates-normal */
struct chocolates_native_t
{
    std::vector<float>price;
};
typedef chocolates_native_t chocolates_native_t;



/*Declaration for Chocolates-imported */
struct chocolates_imported_t
{
    std::vector<float>price;
};
typedef chocolates_imported_t chocolates_imported_t;



/*Declaration for Perfume-normal*/
struct perfume_t
{
    std::vector<float>price;
};
typedef perfume_t perfume_t;




/*Declaration for Perfume-imported*/
struct perfume_imported_t
{
    std::vector<float>price;
};
typedef perfume_imported_t perfume_imported_t;


/*Declaration for Perfume-imported*/
struct pills_t
{
    std::vector<float>price;
};
typedef pills_t pills_t;




/*Declaration for Inputs*/
struct purchase_t
{
    books_t books;
    music_t music;
    chocolates_native_t choc;
    chocolates_imported_t choc_imp;
    perfume_t perf;
    perfume_imported_t perf_imp;
    pills_t pills;
};
typedef purchase_t purchase;




