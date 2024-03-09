#include <algorithm>
#include "document.h"

document::document()
{

}

void document::import_doc()
{
    //TODO: открываем и парсим файл, заполняем _primitives.
}

void document::export_doc()
{
    //TODO: создаём или перезаписываем файл. _primitives конвертируем в формат, сохраняем.
}

void document::add_figure(std::shared_ptr<graphic_primitive> gp)
{
    _figures.push_back(gp);
}

void document::delete_figure(graphic_primitive *gp)
{
    auto it = std::find_if(_figures.begin(), _figures.end(),
                           [&](std::shared_ptr<graphic_primitive> ptr){return ptr.get() == gp;});
    if (it != _figures.end()) {
        delete it->get();
    }
}

std::list<std::shared_ptr<graphic_primitive>> document::get_figures()
{
    return _figures;
}
