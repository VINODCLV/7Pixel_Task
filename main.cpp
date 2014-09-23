/* 
 * File:   main.cpp
 * Author: Project
 *
 * Created on 23 September, 2014, 6:44 PM
 */


#include "7Pixel.hpp"
#include <iomanip>


void Price(purchase *,float);
float CalTax(purchase *);


int main(int argc, char** argv) 
{
    purchase input1,input2,input3;
    float sales_tax;
    
    
    /* UNIT TESTS - HARD CODED INPUT */
    
    /* For Input 1 */
    
    input1.books.price.push_back(12.49);
    input1.music.price.push_back(14.99);
    input1.choc.price.push_back(0.85);
    
    /* For input 2 */
    
    input2.choc_imp.price.push_back(10.00);
    input2.perf_imp.price.push_back(47.50);
    
    /* For input 3 */
    
    input3.perf_imp.price.push_back(27.99);
    input3.perf.price.push_back(18.99);
    input3.pills.price.push_back(9.75);
    input3.choc_imp.price.push_back(11.25);
    
    for(unsigned int i=1;i<=3;i++)
    {
        cout<<"Output "<<i<<" : "; 
        if(i==1)
        {
        sales_tax = CalTax(&input1);
        Price(&input1,sales_tax);
        }
        else if(i==2)
        {
        sales_tax = CalTax(&input2);
        Price(&input2,sales_tax);
        }
        
        else if(i==3)
        {
        sales_tax = CalTax(&input3);
        Price(&input3,sales_tax);
        }

        
    }
    
    
 return 0;   
}



float CalTax(purchase *input)
{
   
    float tax=0,comp_tax;
    
    /*  10% sales tax for Music Cd */
    for(unsigned int i =0;i<input->music.price.size();i++)
    {
        comp_tax= (input->music.price[i] * 0.1) ;
        tax= tax + comp_tax;
        input->music.price[i] = input->music.price[i] + comp_tax;
        
        
    }
    
     /*  5% sales tax for Imported Chocolates */
    for(unsigned int i =0;i<input->choc_imp.price.size();i++)
    {
        comp_tax= (input->choc_imp.price[i] * 0.05) ;
        tax= tax + comp_tax;
        input->choc_imp.price[i] = input->choc_imp.price[i] + comp_tax;
    }
    
     
    
      
     /*  15% sales tax for Imported Perfume */
    for(unsigned int i =0;i<input->perf_imp.price.size();i++)
    {
        comp_tax= (input->perf_imp.price[i] * 0.15) ;
        tax= tax + comp_tax;
        input->perf_imp.price[i] = input->perf_imp.price[i] + comp_tax;
    }
    
    
      /*  10% sales tax for Perfume */
    for(unsigned int i =0;i<input->perf.price.size();i++)
    {
        comp_tax= (input->perf.price[i] * 0.1) ;
        tax= tax + comp_tax;
        input->perf.price[i] = input->perf.price[i] + comp_tax;
    }
    
    return tax;
    
}



void Price(purchase * input,float tax)
{
     int tot_b,tot_m,tot_c,tot_c1,tot_per,tot_per1,tot_pil,flag;
     float sum=0;
     tot_b = input->books.price.size();
     tot_m = input->music.price.size();
     tot_c = input->choc.price.size();
     tot_c1 = input->choc_imp.price.size();
     tot_per = input->perf.price.size();
     tot_per1 = input->perf_imp.price.size();
     tot_pil = input->pills.price.size();
     
     
 
     
     /* Rounding off */
     for(unsigned int i=0;i<tot_b;i++)
         input->books.price[i] = round(input->books.price[i] * 100.0)/100.0;
     
     for(unsigned int i=0;i<tot_m;i++)
          input->music.price[i] = round(input->music.price[i] * 100.0)/100.0;
         
     
     for(unsigned int i=0;i<tot_c;i++)
          input->choc.price[i] = round(input->choc.price[i] * 100.0)/100.0;
         
     
     for(unsigned int i=0;i<tot_c1;i++)
         input->choc_imp.price[i] = round(input->choc_imp.price[i] * 100.0)/100.0;
         
     
     for(unsigned int i=0;i<tot_per;i++)
         input->perf.price[i] = round(input->perf.price[i] * 100.0)/100.0;
         
     
     for(unsigned int i=0;i<tot_per1;i++)
         input->perf_imp.price[i] = round(input->perf_imp.price[i] * 100.0)/100.0;
         
     
     for(unsigned int i=0;i<tot_pil;i++)
         input->pills.price[i] = round(input->pills.price[i] * 100.0)/100.0;
        
     
     /* Final Display */
     flag=tot_b;
     if(tot_b > 0)
      {flag=flag-1;
        std::cout<<" "<<tot_b<<" book :" ;
        for(unsigned int i=0;i<tot_b;i++)
        {
        //printf("%.2f",ceil(input->books.price[i] *20)/20);
            std::cout<<input->books.price[i];
            sum=sum+ input->books.price[i];
        if(flag>0)
        std::cout<<": ";
        }
      }
     
     
     flag=tot_m;
     if(tot_m > 0)
      {
         flag=flag-1;
        std::cout<<" "<<tot_m<<" music CD :" ;
        for(unsigned int i=0;i<tot_m;i++)
        {
        //printf("%.2f",ceil(input->music.price[i] *20)/20);
        std::cout<<input->music.price[i];
        sum=sum+ input->music.price[i];
        if(flag>0)
        std::cout<<": ";
        }
      }
     
     flag=tot_c;
     if(tot_c > 0)
      {
         flag=flag-1;
        std::cout<<" "<<tot_c<<" Chocolate Bar :" ;
        for(unsigned int i=0;i<tot_c;i++)
        {
        //printf("%.2f",ceil(input->choc.price[i] *20)/20);
        std::cout<<input->choc.price[i];
        sum=sum+ input->choc.price[i];
        if(flag>0)
        std::cout<<": ";
        }
      }
     
     
     flag=tot_c1;
     if(tot_c1 > 0)
      {
         flag=flag-1;
        std::cout<<" "<<tot_c1<<" Imported Box of Chocolates :" ;
        for(unsigned int i=0;i<tot_c1;i++)
        {
       // printf("%.2f",ceil(input->choc_imp.price[i] *20)/20);
        std::cout<<input->choc_imp.price[i];
        sum=sum+ input->choc_imp.price[i];
        if(flag>0)
        std::cout<<": ";
        }
      }
     
     
     flag=tot_per;
     if(tot_per > 0)
      {
         flag=flag-1;
        std::cout<<" "<<tot_per<<" bottle of perfume :" ;
        for(unsigned int i=0;i<tot_per;i++)
        {
       // printf("%.2f",ceil(input->perf.price[i] *20)/20);
        std::cout<<input->perf.price[i];
        sum=sum+ input->perf.price[i];
        if(flag>0)
        std::cout<<": ";
        }
     }
     
     
     flag=tot_per1;
     if(tot_per1 > 0)
      {
         flag=flag-1;
        std::cout<<" "<<tot_per1<<" Imported bottle of perfume :" ;
        for(unsigned int i=0;i<tot_per1;i++)
        {
       // printf("%.2f",ceil(input->perf_imp.price[i] *20)/20);
        std::cout<<input->perf_imp.price[i];
         sum=sum+ input->perf_imp.price[i];
        if(flag>0)
        std::cout<<": ";
        }
     }
    
     flag=tot_pil;
     if(tot_pil > 0)
      {
         flag=flag-1;
        std::cout<<" " <<tot_pil<<" packet of headache pills :" ;
        for(unsigned int i=0;i<tot_pil;i++)
        {
       // printf("%.2f",ceil(input->pills.price[i] *20)/20);
        std::cout<<input->pills.price[i];
        sum=sum+ input->pills.price[i];
        if(flag>0)
        std::cout<<": ";
        }
     }
     std::cout<<" Sales Taxes:";
    printf("%.2f",ceil(tax *20)/20);
    
    std::cout<<" Total:"<<sum<<endl;
         
     
}