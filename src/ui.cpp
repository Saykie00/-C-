#include "ui.h"
#include <datarw.h>
#include <draw_menu.h>
#include <iostream>
#include <packageinput.h>
#include <datalist.h>
#include <datasearch.h>
#include <datarewriting.h>
#include <datadelete.h>




void ui_init() {
    while (true) {
        draw_menu();
        int choice;
        std::cin >> choice;
        if (!(choice >= 1 && choice <= 6)) {
            continue;
        }
        switch (choice) {
            case 1:
                packageinput();
                break;
            case 2:
                datalist();
                break;
            case 3:
                datasearch();
                break;
            case 4:
                data_rewriting();
                break;
            case 5:
                datadelete();
                break;
            case 6:
                return;
        }
    }
}
