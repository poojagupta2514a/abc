/*==============================================================================

  Copyright (c) Kitware, Inc.

  See http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Julien Finet, Kitware, Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

#ifndef __qabcAppMainWindow_h
#define __qabcAppMainWindow_h

// abc includes
#include "qabcAppExport.h"
class qabcAppMainWindowPrivate;

// Slicer includes
#include "qSlicerMainWindow.h"

class Q_ABC_APP_EXPORT qabcAppMainWindow : public qSlicerMainWindow
{
  Q_OBJECT
public:
  typedef qSlicerMainWindow Superclass;

  qabcAppMainWindow(QWidget *parent=0);
  virtual ~qabcAppMainWindow();

public slots:
  void on_HelpAboutabcAppAction_triggered();

protected:
  qabcAppMainWindow(qabcAppMainWindowPrivate* pimpl, QWidget* parent);

private:
  Q_DECLARE_PRIVATE(qabcAppMainWindow);
  Q_DISABLE_COPY(qabcAppMainWindow);
};

#endif
