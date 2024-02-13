#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <list>
#include <memory>
#include "graphic_primitive.h"

/*!
\file
\brief


*/

class document
{
public:
    document();
    void import_doc();
    void export_doc();
    void add_figure(graphic_primitive *gp);
    void delete_figure(graphic_primitive *gp);
    std::list<std::shared_ptr<graphic_primitive>> get_figures();

private:
    std::list<std::shared_ptr<graphic_primitive>> _figures;
};

#endif // DOCUMENT_H
