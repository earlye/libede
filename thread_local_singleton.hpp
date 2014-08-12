#ifndef hF9DAD5B3_3D75_425F_B922_95DE3012C581
#define hF9DAD5B3_3D75_425F_B922_95DE3012C581

namespace libede
{

  template< typename OBJECT_TYPE , typename TAG_TYPE >
  class thread_local_singleton
  {
  public:
    typedef OBJECT_TYPE object_type;
    typedef TAG_TYPE tag_type;

    static object_type& instance()
    {
      thread_local object_type result;
      return result;
    }

  };

}

#endif
