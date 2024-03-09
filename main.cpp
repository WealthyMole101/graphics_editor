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
#include "factory.h"

#include "version.h"

int version() {
    return PROJECT_VERSION_PATCH;
}


/**
   \class
 * \collaborationgraph
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

    //\property
    graphic_view* _view;
    //\property
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
        Factory factory;

        switch (type) {
            case graphic_primitive::Type::CICLE: {
                //TODO: получаем параметры из figure_settings
                _doc.get()->add_figure(factory.CreateCircle(x, y));
            }
            break;
            case graphic_primitive::Type::RECTANGLE: {
                //TODO: получаем параметры из figure_settings
                _doc.get()->add_figure(factory.CreateRectangle(x, y));
            }
            break;
            case graphic_primitive::Type::SQUARE: {
                //TODO: получаем параметры из figure_settings
                _doc.get()->add_figure(factory.CreateSquare(x, y));
            }
            break;
            case graphic_primitive::Type::TRIANGLE: {
                //TODO: получаем параметры из figure_settings
                _doc.get()->add_figure(factory.CreateTriangle(x, y));
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
