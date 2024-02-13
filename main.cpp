#include <iostream>
#include <memory>
#include <tuple>
#include <list>
#include "graphic_view.h"
#include "document.h"
#include "graphic_primitive.h"
#include "circle.h"
#include "rectangle.h"
#include "square.h"
#include "triangle.h"

#include "version.h"

int version() {
    return PROJECT_VERSION_PATCH;
}


/*!
\file
\brief


*/

using namespace std;

class controller
{
private:
    bool check_primitive()
    {
        //Логика проверки клика на графическом примитиве
        return true;
    }

    bool check_document()
    {
        //Логика проверки валидности документа
        //Если есть выполнить действия для закрытия предыдущего - окно запроса действия, диалог сохранения и т.д.
        return true;
    }

    auto&& figure_setup()
    {
        //TODO: вызов фоормы ввода параметров фигуры
        tuple<graphic_primitive::Type, int, int> primitive_settings;
        return move(primitive_settings);
    }

    graphic_view* _view;
    std::shared_ptr<document> _doc;
    bool _is_end_process = false;

public:
    explicit controller(graphic_view* view): _view(view)
    {

    };

    void on_new_document()
    {
        if (check_document()) {
            _doc = std::shared_ptr<document>(new document);
        }
    }

    void on_import_document()
    {
        if (check_document()) {
            //TODO: настроить и показать диалог выбора документов
        }
    }

    void on_export_document()
    {
        //TODO: настроить и показать диалог сохранения документов
    }

    void on_add(int x, int y)
    {
        auto figure_settings = figure_setup();

        graphic_primitive::Type type = std::get<0>(figure_settings);
        switch (type) {
            case graphic_primitive::Type::CICLE: {
                //TODO: получаем параметры из figure_settings
                int radius = 5;
                _doc.get()->add_figure(new circle(x, y, radius));
            }
            break;
            case graphic_primitive::Type::RECTANGLE: {
                //TODO: получаем параметры из figure_settings
                int width = 5;
                int heigth = 6;
                _doc.get()->add_figure(new rectangle(x, y, width, heigth));
            }
            break;
            case graphic_primitive::Type::SQUARE: {
                //TODO: получаем параметры из figure_settings
                int side = 5;
                _doc.get()->add_figure(new square(x, y, side));
            }
            break;
            case graphic_primitive::Type::TRIANGLE: {
                //TODO: получаем параметры из figure_settings
                int base = 5;
                int a = 6;
                int b = 7;
                _doc.get()->add_figure(new triangle(x, y, base, a, b));
            }
            break;
            default:
                throw;
        }
    }

    void on_delete(int x, int y)
    {
        if (check_primitive()) {
            auto figures = _doc.get()->get_figures();
            //TODO: ищим фигуру с нужными координатами
            //TODO: заглушка
            graphic_primitive *gp = figures.begin()->get();

            _doc.get()->delete_figure(gp);
        }
    }

    void on_resize(int width, int heigth)
    {
        if (check_primitive()) {

        }
    }

    bool is_end_process()
    {
        return _is_end_process;
    }

protected:

};


int main()
{
    graphic_view view;
    controller ctnrl(&view);

    while (!ctnrl.is_end_process()) {
        //TODO: можно поспасть что-бы не грузить CPU
    }

    view.clear();

    return 0;
}
