/*******************************************************************

Part of the Fritzing project - http://fritzing.org
Copyright (c) 2007-2009 Fachhochschule Potsdam - http://fh-potsdam.de

Fritzing is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Fritzing is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Fritzing.  If not, see <http://www.gnu.org/licenses/>.

********************************************************************

$Revision: 3849 $:
$Author: cohen@irascible.com $:
$Date: 2009-12-10 03:50:56 -0800 (Thu, 10 Dec 2009) $

********************************************************************/

#ifndef RESIZABLERECTITEM_H_
#define RESIZABLERECTITEM_H_

#include <QGraphicsRectItem>

class ConnectorRectangle;

class ResizableRectItem {
friend class ConnectorRectangle;
public:
	ResizableRectItem();
	virtual ~ResizableRectItem() {}

	virtual qreal minWidth() = 0;
	virtual qreal minHeight() = 0;
	virtual void resizeRect(qreal x, qreal y, qreal width, qreal height) = 0;
	virtual void doPrepareGeometryChange() = 0;

	void setResizable(bool resizable);
	bool isResizable();

protected:
	ConnectorRectangle *m_handlers;
	bool m_resizable;
};

#endif /* RESIZABLERECTITEM_H_ */
