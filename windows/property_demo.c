/* property_demo.c generated by valac 0.56.0, the Vala compiler
 * generated from property_demo.vala, do not modify */

#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <stdio.h>

#if !defined(VALA_EXTERN)
#if defined(_MSC_VER)
#define VALA_EXTERN __declspec(dllexport) extern
#elif __GNUC__ >= 4
#define VALA_EXTERN __attribute__((visibility("default"))) extern
#else
#define VALA_EXTERN extern
#endif
#endif

#define TYPE_PROPERTY_DEMO (property_demo_get_type ())
#define PROPERTY_DEMO(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PROPERTY_DEMO, PropertyDemo))
#define PROPERTY_DEMO_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PROPERTY_DEMO, PropertyDemoClass))
#define IS_PROPERTY_DEMO(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PROPERTY_DEMO))
#define IS_PROPERTY_DEMO_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PROPERTY_DEMO))
#define PROPERTY_DEMO_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PROPERTY_DEMO, PropertyDemoClass))

typedef struct _PropertyDemo PropertyDemo;
typedef struct _PropertyDemoClass PropertyDemoClass;
typedef struct _PropertyDemoPrivate PropertyDemoPrivate;
enum  {
	PROPERTY_DEMO_0_PROPERTY,
	PROPERTY_DEMO_AUTOMATIC_PROPERTY,
	PROPERTY_DEMO_NAME_PROPERTY,
	PROPERTY_DEMO_READ_ONLY_PROPERTY,
	PROPERTY_DEMO_NUM_PROPERTIES
};
static GParamSpec* property_demo_properties[PROPERTY_DEMO_NUM_PROPERTIES];
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _PropertyDemo {
	GObject parent_instance;
	PropertyDemoPrivate * priv;
};

struct _PropertyDemoClass {
	GObjectClass parent_class;
};

struct _PropertyDemoPrivate {
	gchar* _name;
	gchar* _read_only;
	gchar* _automatic;
};

static gint PropertyDemo_private_offset;
static gpointer property_demo_parent_class = NULL;

VALA_EXTERN GType property_demo_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PropertyDemo, g_object_unref)
VALA_EXTERN PropertyDemo* property_demo_new (const gchar* name);
VALA_EXTERN PropertyDemo* property_demo_construct (GType object_type,
                                       const gchar* name);
VALA_EXTERN void property_demo_set_automatic (PropertyDemo* self,
                                  const gchar* value);
VALA_EXTERN const gchar* property_demo_get_automatic (PropertyDemo* self);
VALA_EXTERN const gchar* property_demo_get_name (PropertyDemo* self);
VALA_EXTERN void property_demo_set_name (PropertyDemo* self,
                             const gchar* value);
VALA_EXTERN const gchar* property_demo_get_read_only (PropertyDemo* self);
static void property_demo_finalize (GObject * obj);
static GType property_demo_get_type_once (void);
static void _vala_property_demo_get_property (GObject * object,
                                       guint property_id,
                                       GValue * value,
                                       GParamSpec * pspec);
static void _vala_property_demo_set_property (GObject * object,
                                       guint property_id,
                                       const GValue * value,
                                       GParamSpec * pspec);
static void _vala_main (void);
static void __lambda4_ (GObject* s,
                 GParamSpec* p);
static void ___lambda4__g_object_notify (GObject* _sender,
                                  GParamSpec* pspec,
                                  gpointer self);

static inline gpointer
property_demo_get_instance_private (PropertyDemo* self)
{
	return G_STRUCT_MEMBER_P (self, PropertyDemo_private_offset);
}

PropertyDemo*
property_demo_construct (GType object_type,
                         const gchar* name)
{
	PropertyDemo * self = NULL;
	gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_val_if_fail (name != NULL, NULL);
	self = (PropertyDemo*) g_object_new (object_type, NULL);
	property_demo_set_automatic (self, "InitialAutomatic");
	_tmp0_ = g_strdup (name);
	_g_free0 (self->priv->_name);
	self->priv->_name = _tmp0_;
	_tmp1_ = g_strdup ("InitialReadOnly");
	_g_free0 (self->priv->_read_only);
	self->priv->_read_only = _tmp1_;
	return self;
}

PropertyDemo*
property_demo_new (const gchar* name)
{
	return property_demo_construct (TYPE_PROPERTY_DEMO, name);
}

const gchar*
property_demo_get_automatic (PropertyDemo* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_automatic;
	result = _tmp0_;
	return result;
}

void
property_demo_set_automatic (PropertyDemo* self,
                             const gchar* value)
{
	gchar* old_value;
	g_return_if_fail (self != NULL);
	old_value = property_demo_get_automatic (self);
	if (g_strcmp0 (value, old_value) != 0) {
		gchar* _tmp0_;
		_tmp0_ = g_strdup (value);
		_g_free0 (self->priv->_automatic);
		self->priv->_automatic = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, property_demo_properties[PROPERTY_DEMO_AUTOMATIC_PROPERTY]);
	}
}

const gchar*
property_demo_get_name (PropertyDemo* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_name;
	result = _tmp0_;
	return result;
}

void
property_demo_set_name (PropertyDemo* self,
                        const gchar* value)
{
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_name);
	self->priv->_name = _tmp0_;
	g_object_notify_by_pspec ((GObject *) self, property_demo_properties[PROPERTY_DEMO_NAME_PROPERTY]);
}

const gchar*
property_demo_get_read_only (PropertyDemo* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_read_only;
	result = _tmp0_;
	return result;
}

static void
property_demo_class_init (PropertyDemoClass * klass,
                          gpointer klass_data)
{
	property_demo_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &PropertyDemo_private_offset);
	G_OBJECT_CLASS (klass)->get_property = _vala_property_demo_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_property_demo_set_property;
	G_OBJECT_CLASS (klass)->finalize = property_demo_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), PROPERTY_DEMO_AUTOMATIC_PROPERTY, property_demo_properties[PROPERTY_DEMO_AUTOMATIC_PROPERTY] = g_param_spec_string ("automatic", "automatic", "automatic", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), PROPERTY_DEMO_NAME_PROPERTY, property_demo_properties[PROPERTY_DEMO_NAME_PROPERTY] = g_param_spec_string ("name", "name", "name", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), PROPERTY_DEMO_READ_ONLY_PROPERTY, property_demo_properties[PROPERTY_DEMO_READ_ONLY_PROPERTY] = g_param_spec_string ("read-only", "read-only", "read-only", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}

static void
property_demo_instance_init (PropertyDemo * self,
                             gpointer klass)
{
	self->priv = property_demo_get_instance_private (self);
}

static void
property_demo_finalize (GObject * obj)
{
	PropertyDemo * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_PROPERTY_DEMO, PropertyDemo);
	_g_free0 (self->priv->_name);
	_g_free0 (self->priv->_read_only);
	_g_free0 (self->priv->_automatic);
	G_OBJECT_CLASS (property_demo_parent_class)->finalize (obj);
}

static GType
property_demo_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (PropertyDemoClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) property_demo_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (PropertyDemo), 0, (GInstanceInitFunc) property_demo_instance_init, NULL };
	GType property_demo_type_id;
	property_demo_type_id = g_type_register_static (G_TYPE_OBJECT, "PropertyDemo", &g_define_type_info, 0);
	PropertyDemo_private_offset = g_type_add_instance_private (property_demo_type_id, sizeof (PropertyDemoPrivate));
	return property_demo_type_id;
}

GType
property_demo_get_type (void)
{
	static volatile gsize property_demo_type_id__once = 0;
	if (g_once_init_enter (&property_demo_type_id__once)) {
		GType property_demo_type_id;
		property_demo_type_id = property_demo_get_type_once ();
		g_once_init_leave (&property_demo_type_id__once, property_demo_type_id);
	}
	return property_demo_type_id__once;
}

static void
_vala_property_demo_get_property (GObject * object,
                                  guint property_id,
                                  GValue * value,
                                  GParamSpec * pspec)
{
	PropertyDemo * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_PROPERTY_DEMO, PropertyDemo);
	switch (property_id) {
		case PROPERTY_DEMO_AUTOMATIC_PROPERTY:
		g_value_set_string (value, property_demo_get_automatic (self));
		break;
		case PROPERTY_DEMO_NAME_PROPERTY:
		g_value_set_string (value, property_demo_get_name (self));
		break;
		case PROPERTY_DEMO_READ_ONLY_PROPERTY:
		g_value_set_string (value, property_demo_get_read_only (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_property_demo_set_property (GObject * object,
                                  guint property_id,
                                  const GValue * value,
                                  GParamSpec * pspec)
{
	PropertyDemo * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_PROPERTY_DEMO, PropertyDemo);
	switch (property_id) {
		case PROPERTY_DEMO_AUTOMATIC_PROPERTY:
		property_demo_set_automatic (self, g_value_get_string (value));
		break;
		case PROPERTY_DEMO_NAME_PROPERTY:
		property_demo_set_name (self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
__lambda4_ (GObject* s,
            GParamSpec* p)
{
	FILE* _tmp0_;
	const gchar* _tmp1_;
	g_return_if_fail (s != NULL);
	g_return_if_fail (p != NULL);
	_tmp0_ = stdout;
	_tmp1_ = p->name;
	fprintf (_tmp0_, "property '%s' has changed!\n", _tmp1_);
}

static void
___lambda4__g_object_notify (GObject* _sender,
                             GParamSpec* pspec,
                             gpointer self)
{
	__lambda4_ (_sender, pspec);
}

static void
_vala_main (void)
{
	PropertyDemo* demo = NULL;
	PropertyDemo* _tmp0_;
	FILE* _tmp1_;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
	FILE* _tmp4_;
	const gchar* _tmp5_;
	const gchar* _tmp6_;
	FILE* _tmp7_;
	const gchar* _tmp8_;
	const gchar* _tmp9_;
	_tmp0_ = property_demo_new ("InitialName");
	demo = _tmp0_;
	g_signal_connect ((GObject*) demo, "notify", (GCallback) ___lambda4__g_object_notify, NULL);
	property_demo_set_automatic (demo, "TheNewAutomatic");
	property_demo_set_name (demo, "TheNewName");
	_tmp1_ = stdout;
	_tmp2_ = property_demo_get_automatic (demo);
	_tmp3_ = _tmp2_;
	fprintf (_tmp1_, "automatic: %s\n", _tmp3_);
	_tmp4_ = stdout;
	_tmp5_ = property_demo_get_name (demo);
	_tmp6_ = _tmp5_;
	fprintf (_tmp4_, "name: %s\n", _tmp6_);
	_tmp7_ = stdout;
	_tmp8_ = property_demo_get_read_only (demo);
	_tmp9_ = _tmp8_;
	fprintf (_tmp7_, "read_only: %s\n", _tmp9_);
	_g_object_unref0 (demo);
}

int
main (int argc,
      char ** argv)
{
	_vala_main ();
	return 0;
}

