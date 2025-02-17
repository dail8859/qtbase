// Copyright (C) 2016 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

#ifndef NONGADGETPARENTCLASS_H
#define NONGADGETPARENTCLASS_H

#include <QtCore/qobjectdefs.h>

namespace NonGadgetParent {

struct Base {};
struct Derived : Base { Q_GADGET };

}

#endif // NONGADGETPARENTCLASS_H

