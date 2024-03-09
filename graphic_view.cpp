#include <list>
#include <memory>

#include "graphic_view.h"

graphic_view::graphic_view()
{

}

void graphic_view::set_document(std::shared_ptr<document> doc)
{
    _doc = doc;
}

void graphic_view::clear()
{

}

void graphic_view::draw_document()
{
    auto primitives = _doc->get_figures();

    for (auto item: primitives) {
        auto primitive = item.get();
        //TODO: некие действия для подготовки поля рисования
        primitive->draw();
    }
}
