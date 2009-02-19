#ifndef _G_STYLESHEET
#define _G_STYLESHEET

#include <glib-object.h>

G_BEGIN_DECLS

#define G_TYPE_STYLESHEET g_stylesheet_get_type()

#define G_STYLESHEET(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_STYLESHEET, GStylesheet))

#define G_STYLESHEET_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_CAST ((klass), G_TYPE_STYLESHEET, GStylesheetClass))

#define G_IS_STYLESHEET(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_STYLESHEET))

#define G_IS_STYLESHEET_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_TYPE ((klass), G_TYPE_STYLESHEET))

#define G_STYLESHEET_GET_CLASS(obj) \
  (G_TYPE_INSTANCE_GET_CLASS ((obj), G_TYPE_STYLESHEET, GStylesheetClass))

typedef struct {
  GObject parent;
} GStylesheet;

typedef struct {
  GObjectClass parent_class;
} GStylesheetClass;

GType g_stylesheet_get_type (void);

GStylesheet* g_stylesheet_new (void);

G_END_DECLS

#endif /* _G_STYLESHEET */

