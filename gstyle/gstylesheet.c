#include "gstylesheet.h"

G_DEFINE_TYPE (GStylesheet, g_stylesheet, G_TYPE_OBJECT)

#define GET_PRIVATE(o) \
  (G_TYPE_INSTANCE_GET_PRIVATE ((o), G_TYPE_STYLESHEET, GStylesheetPrivate))

typedef struct _GStylesheetPrivate GStylesheetPrivate;

struct _GStylesheetPrivate {
    int dummy;
};

static void
g_stylesheet_dispose (GObject *object)
{
  G_OBJECT_CLASS (g_stylesheet_parent_class)->dispose (object);
}

static void
g_stylesheet_finalize (GObject *object)
{
  G_OBJECT_CLASS (g_stylesheet_parent_class)->finalize (object);
}

static void
g_stylesheet_class_init (GStylesheetClass *klass)
{
  GObjectClass *object_class = G_OBJECT_CLASS (klass);

  g_type_class_add_private (klass, sizeof (GStylesheetPrivate));

  object_class->dispose = g_stylesheet_dispose;
  object_class->finalize = g_stylesheet_finalize;
}

static void
g_stylesheet_init (GStylesheet *self)
{
}

GStylesheet*
g_stylesheet_new (void)
{
  return g_object_new (G_TYPE_STYLESHEET, NULL);
}

