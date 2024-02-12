#ifndef GRAPHIC_VIEW_H
#define GRAPHIC_VIEW_H

#include "document.h"

/*!
\file
\brief


*/

class graphic_view
{
public:
    graphic_view();
    void set_document(document* doc);
    void clear();
private:
    void draw_document();

    document* _doc;
};

#endif // GRAPHIC_VIEW_H
