/**
 * @file FieldList.h
 * @brief
 * @details
 * @date Created on 07.02.2017
 * @copyright 2017 DDwarf LLC, <dev@ddwarf.org>
 * @author Gilmanov Ildar <dev@ddwarf.org>
 */

#ifndef DDWARF_MONITORING_FIELD_H
#define DDWARF_MONITORING_FIELD_H

#include <QObject>

namespace DDwarf {
namespace Monitoring {

class Field;

class FieldList : public QObject
{
    Q_OBJECT

public:
    FieldList(QObject *parent = 0);

public slots:

signals:

private:

};

} // namespace Monitoring
} // namespace DDwarf

#endif // DDWARF_MONITORING_FIELD_H
