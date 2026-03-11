#include "ui.h"
#include <datarw.h>
#include <draw_menu.h>
#include <iostream>
#include <packageinput.h>
#include <datalist.h>
#include <datasearch.h>
#include <datarewriting.h>




void ui_init() {
    draw_menu();
    int choice;
    while (choice) {
        std::cin >> choice;
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
                break;
            default:
                dataread();
                ui_init();
                break;
        }
    }
}
