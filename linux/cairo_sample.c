/* cairo_sample.c generated by valac 0.56.0, the Vala compiler
 * generated from cairo_sample.vala, do not modify */

#include <gtk/gtk.h>
#include <glib-object.h>
#include <glib.h>
#include <cairo-gobject.h>
#include <float.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define CAIRO_SAMPLE_SIZE 30
#if !defined(VALA_EXTERN)
#if defined(_MSC_VER)
#define VALA_EXTERN __declspec(dllexport) extern
#elif __GNUC__ >= 4
#define VALA_EXTERN __attribute__((visibility("default"))) extern
#else
#define VALA_EXTERN extern
#endif
#endif

#define TYPE_CAIRO_SAMPLE (cairo_sample_get_type ())
#define CAIRO_SAMPLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_CAIRO_SAMPLE, CairoSample))
#define CAIRO_SAMPLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_CAIRO_SAMPLE, CairoSampleClass))
#define IS_CAIRO_SAMPLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_CAIRO_SAMPLE))
#define IS_CAIRO_SAMPLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_CAIRO_SAMPLE))
#define CAIRO_SAMPLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_CAIRO_SAMPLE, CairoSampleClass))

typedef struct _CairoSample CairoSample;
typedef struct _CairoSampleClass CairoSampleClass;
typedef struct _CairoSamplePrivate CairoSamplePrivate;
enum  {
	CAIRO_SAMPLE_0_PROPERTY,
	CAIRO_SAMPLE_NUM_PROPERTIES
};
static GParamSpec* cairo_sample_properties[CAIRO_SAMPLE_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef void (*CairoSampleDrawMethod) (gpointer user_data);

struct _CairoSample {
	GtkWindow parent_instance;
	CairoSamplePrivate * priv;
};

struct _CairoSampleClass {
	GtkWindowClass parent_class;
};

static gpointer cairo_sample_parent_class = NULL;

VALA_EXTERN GType cairo_sample_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (CairoSample, g_object_unref)
VALA_EXTERN CairoSample* cairo_sample_new (void);
VALA_EXTERN CairoSample* cairo_sample_construct (GType object_type);
static void _gtk_main_quit_gtk_widget_destroy (GtkWidget* _sender,
                                        gpointer self);
static void cairo_sample_create_widgets (CairoSample* self);
static gboolean cairo_sample_on_draw (CairoSample* self,
                               GtkWidget* da,
                               cairo_t* ctx);
static gboolean _cairo_sample_on_draw_gtk_widget_draw (GtkWidget* _sender,
                                                cairo_t* cr,
                                                gpointer self);
static void cairo_sample_stroke_shapes (CairoSample* self,
                                 cairo_t* ctx,
                                 gint x,
                                 gint y);
static void cairo_sample_fill_shapes (CairoSample* self,
                               cairo_t* ctx,
                               gint x,
                               gint y);
static void cairo_sample_draw_shapes (CairoSample* self,
                               cairo_t* ctx,
                               gint x,
                               gint y,
                               CairoSampleDrawMethod draw_method,
                               gpointer draw_method_target);
static void _cairo_stroke_cairo_sample_draw_method (gpointer self);
static void _cairo_fill_cairo_sample_draw_method (gpointer self);
static void cairo_sample_bowtie (CairoSample* self,
                          cairo_t* ctx);
static void cairo_sample_square (CairoSample* self,
                          cairo_t* ctx);
static void cairo_sample_triangle (CairoSample* self,
                            cairo_t* ctx);
static void cairo_sample_inf (CairoSample* self,
                       cairo_t* ctx);
static gint cairo_sample_main (gchar** args,
                        gint args_length1);
static GType cairo_sample_get_type_once (void);

static void
_gtk_main_quit_gtk_widget_destroy (GtkWidget* _sender,
                                   gpointer self)
{
	gtk_main_quit ();
}

CairoSample*
cairo_sample_construct (GType object_type)
{
	CairoSample * self = NULL;
	self = (CairoSample*) g_object_new (object_type, NULL);
	gtk_window_set_title ((GtkWindow*) self, "Cairo Vala Demo");
	g_signal_connect ((GtkWidget*) self, "destroy", (GCallback) _gtk_main_quit_gtk_widget_destroy, NULL);
	gtk_window_set_default_size ((GtkWindow*) self, 450, 550);
	cairo_sample_create_widgets (self);
	return self;
}

CairoSample*
cairo_sample_new (void)
{
	return cairo_sample_construct (TYPE_CAIRO_SAMPLE);
}

static gboolean
_cairo_sample_on_draw_gtk_widget_draw (GtkWidget* _sender,
                                       cairo_t* cr,
                                       gpointer self)
{
	gboolean result;
	result = cairo_sample_on_draw ((CairoSample*) self, _sender, cr);
	return result;
}

static void
cairo_sample_create_widgets (CairoSample* self)
{
	GtkDrawingArea* drawing_area = NULL;
	GtkDrawingArea* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = (GtkDrawingArea*) gtk_drawing_area_new ();
	g_object_ref_sink (_tmp0_);
	drawing_area = _tmp0_;
	g_signal_connect_object ((GtkWidget*) drawing_area, "draw", (GCallback) _cairo_sample_on_draw_gtk_widget_draw, self, 0);
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) drawing_area);
	_g_object_unref0 (drawing_area);
}

static gboolean
cairo_sample_on_draw (CairoSample* self,
                      GtkWidget* da,
                      cairo_t* ctx)
{
	gdouble* _tmp0_;
	gdouble* _tmp1_;
	gint _tmp1__length1;
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (da != NULL, FALSE);
	g_return_val_if_fail (ctx != NULL, FALSE);
	cairo_set_source_rgb (ctx, (gdouble) 0, (gdouble) 0, (gdouble) 0);
	cairo_set_line_width (ctx, (gdouble) (CAIRO_SAMPLE_SIZE / 4));
	cairo_set_tolerance (ctx, 0.1);
	cairo_set_line_join (ctx, CAIRO_LINE_JOIN_ROUND);
	_tmp0_ = g_new0 (gdouble, 2);
	_tmp0_[0] = CAIRO_SAMPLE_SIZE / 4.0;
	_tmp0_[1] = CAIRO_SAMPLE_SIZE / 4.0;
	_tmp1_ = _tmp0_;
	_tmp1__length1 = 2;
	cairo_set_dash (ctx, _tmp1_, (gint) 2, (gdouble) 0);
	_tmp1_ = (g_free (_tmp1_), NULL);
	cairo_sample_stroke_shapes (self, ctx, 0, 0);
	cairo_set_dash (ctx, NULL, (gint) 0, (gdouble) 0);
	cairo_sample_stroke_shapes (self, ctx, 0, 3 * CAIRO_SAMPLE_SIZE);
	cairo_set_line_join (ctx, CAIRO_LINE_JOIN_BEVEL);
	cairo_sample_stroke_shapes (self, ctx, 0, 6 * CAIRO_SAMPLE_SIZE);
	cairo_set_line_join (ctx, CAIRO_LINE_JOIN_MITER);
	cairo_sample_stroke_shapes (self, ctx, 0, 9 * CAIRO_SAMPLE_SIZE);
	cairo_sample_fill_shapes (self, ctx, 0, 12 * CAIRO_SAMPLE_SIZE);
	cairo_set_line_join (ctx, CAIRO_LINE_JOIN_BEVEL);
	cairo_sample_fill_shapes (self, ctx, 0, 15 * CAIRO_SAMPLE_SIZE);
	cairo_set_source_rgb (ctx, (gdouble) 1, (gdouble) 0, (gdouble) 0);
	cairo_sample_stroke_shapes (self, ctx, 0, 15 * CAIRO_SAMPLE_SIZE);
	result = TRUE;
	return result;
}

static void
_cairo_stroke_cairo_sample_draw_method (gpointer self)
{
	cairo_stroke ((cairo_t*) self);
}

static void
cairo_sample_stroke_shapes (CairoSample* self,
                            cairo_t* ctx,
                            gint x,
                            gint y)
{
	g_return_if_fail (self != NULL);
	g_return_if_fail (ctx != NULL);
	cairo_sample_draw_shapes (self, ctx, x, y, _cairo_stroke_cairo_sample_draw_method, ctx);
}

static void
_cairo_fill_cairo_sample_draw_method (gpointer self)
{
	cairo_fill ((cairo_t*) self);
}

static void
cairo_sample_fill_shapes (CairoSample* self,
                          cairo_t* ctx,
                          gint x,
                          gint y)
{
	g_return_if_fail (self != NULL);
	g_return_if_fail (ctx != NULL);
	cairo_sample_draw_shapes (self, ctx, x, y, _cairo_fill_cairo_sample_draw_method, ctx);
}

static void
cairo_sample_draw_shapes (CairoSample* self,
                          cairo_t* ctx,
                          gint x,
                          gint y,
                          CairoSampleDrawMethod draw_method,
                          gpointer draw_method_target)
{
	g_return_if_fail (self != NULL);
	g_return_if_fail (ctx != NULL);
	cairo_save (ctx);
	cairo_new_path (ctx);
	cairo_translate (ctx, (gdouble) (x + CAIRO_SAMPLE_SIZE), (gdouble) (y + CAIRO_SAMPLE_SIZE));
	cairo_sample_bowtie (self, ctx);
	draw_method (draw_method_target);
	cairo_new_path (ctx);
	cairo_translate (ctx, (gdouble) (3 * CAIRO_SAMPLE_SIZE), (gdouble) 0);
	cairo_sample_square (self, ctx);
	draw_method (draw_method_target);
	cairo_new_path (ctx);
	cairo_translate (ctx, (gdouble) (3 * CAIRO_SAMPLE_SIZE), (gdouble) 0);
	cairo_sample_triangle (self, ctx);
	draw_method (draw_method_target);
	cairo_new_path (ctx);
	cairo_translate (ctx, (gdouble) (3 * CAIRO_SAMPLE_SIZE), (gdouble) 0);
	cairo_sample_inf (self, ctx);
	draw_method (draw_method_target);
	cairo_restore (ctx);
}

static void
cairo_sample_triangle (CairoSample* self,
                       cairo_t* ctx)
{
	g_return_if_fail (self != NULL);
	g_return_if_fail (ctx != NULL);
	cairo_move_to (ctx, (gdouble) CAIRO_SAMPLE_SIZE, (gdouble) 0);
	cairo_rel_line_to (ctx, (gdouble) CAIRO_SAMPLE_SIZE, (gdouble) (2 * CAIRO_SAMPLE_SIZE));
	cairo_rel_line_to (ctx, (gdouble) (-2 * CAIRO_SAMPLE_SIZE), (gdouble) 0);
	cairo_close_path (ctx);
}

static void
cairo_sample_square (CairoSample* self,
                     cairo_t* ctx)
{
	g_return_if_fail (self != NULL);
	g_return_if_fail (ctx != NULL);
	cairo_move_to (ctx, (gdouble) 0, (gdouble) 0);
	cairo_rel_line_to (ctx, (gdouble) (2 * CAIRO_SAMPLE_SIZE), (gdouble) 0);
	cairo_rel_line_to (ctx, (gdouble) 0, (gdouble) (2 * CAIRO_SAMPLE_SIZE));
	cairo_rel_line_to (ctx, (gdouble) (-2 * CAIRO_SAMPLE_SIZE), (gdouble) 0);
	cairo_close_path (ctx);
}

static void
cairo_sample_bowtie (CairoSample* self,
                     cairo_t* ctx)
{
	g_return_if_fail (self != NULL);
	g_return_if_fail (ctx != NULL);
	cairo_move_to (ctx, (gdouble) 0, (gdouble) 0);
	cairo_rel_line_to (ctx, (gdouble) (2 * CAIRO_SAMPLE_SIZE), (gdouble) (2 * CAIRO_SAMPLE_SIZE));
	cairo_rel_line_to (ctx, (gdouble) (-2 * CAIRO_SAMPLE_SIZE), (gdouble) 0);
	cairo_rel_line_to (ctx, (gdouble) (2 * CAIRO_SAMPLE_SIZE), (gdouble) (-2 * CAIRO_SAMPLE_SIZE));
	cairo_close_path (ctx);
}

static void
cairo_sample_inf (CairoSample* self,
                  cairo_t* ctx)
{
	g_return_if_fail (self != NULL);
	g_return_if_fail (ctx != NULL);
	cairo_move_to (ctx, (gdouble) 0, (gdouble) CAIRO_SAMPLE_SIZE);
	cairo_rel_curve_to (ctx, (gdouble) 0, (gdouble) CAIRO_SAMPLE_SIZE, (gdouble) CAIRO_SAMPLE_SIZE, (gdouble) CAIRO_SAMPLE_SIZE, (gdouble) (2 * CAIRO_SAMPLE_SIZE), (gdouble) 0);
	cairo_rel_curve_to (ctx, (gdouble) CAIRO_SAMPLE_SIZE, (gdouble) (-CAIRO_SAMPLE_SIZE), (gdouble) (2 * CAIRO_SAMPLE_SIZE), (gdouble) (-CAIRO_SAMPLE_SIZE), (gdouble) (2 * CAIRO_SAMPLE_SIZE), (gdouble) 0);
	cairo_rel_curve_to (ctx, (gdouble) 0, (gdouble) CAIRO_SAMPLE_SIZE, (gdouble) (-CAIRO_SAMPLE_SIZE), (gdouble) CAIRO_SAMPLE_SIZE, (gdouble) (-2 * CAIRO_SAMPLE_SIZE), (gdouble) 0);
	cairo_rel_curve_to (ctx, (gdouble) (-CAIRO_SAMPLE_SIZE), (gdouble) (-CAIRO_SAMPLE_SIZE), (gdouble) (-2 * CAIRO_SAMPLE_SIZE), (gdouble) (-CAIRO_SAMPLE_SIZE), (gdouble) (-2 * CAIRO_SAMPLE_SIZE), (gdouble) 0);
	cairo_close_path (ctx);
}

static gint
cairo_sample_main (gchar** args,
                   gint args_length1)
{
	CairoSample* cairo_sample = NULL;
	CairoSample* _tmp0_;
	gint result;
	gtk_init ((gint*) (&args_length1), &args);
	_tmp0_ = cairo_sample_new ();
	g_object_ref_sink (_tmp0_);
	cairo_sample = _tmp0_;
	gtk_widget_show_all ((GtkWidget*) cairo_sample);
	gtk_main ();
	result = 0;
	_g_object_unref0 (cairo_sample);
	return result;
}

int
main (int argc,
      char ** argv)
{
	return cairo_sample_main (argv, argc);
}

static void
cairo_sample_class_init (CairoSampleClass * klass,
                         gpointer klass_data)
{
	cairo_sample_parent_class = g_type_class_peek_parent (klass);
}

static void
cairo_sample_instance_init (CairoSample * self,
                            gpointer klass)
{
}

static GType
cairo_sample_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (CairoSampleClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) cairo_sample_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (CairoSample), 0, (GInstanceInitFunc) cairo_sample_instance_init, NULL };
	GType cairo_sample_type_id;
	cairo_sample_type_id = g_type_register_static (gtk_window_get_type (), "CairoSample", &g_define_type_info, 0);
	return cairo_sample_type_id;
}

GType
cairo_sample_get_type (void)
{
	static volatile gsize cairo_sample_type_id__once = 0;
	if (g_once_init_enter (&cairo_sample_type_id__once)) {
		GType cairo_sample_type_id;
		cairo_sample_type_id = cairo_sample_get_type_once ();
		g_once_init_leave (&cairo_sample_type_id__once, cairo_sample_type_id);
	}
	return cairo_sample_type_id__once;
}

