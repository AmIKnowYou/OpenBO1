//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

public auto colgeom_visitor_t::intersect_box(const float* mn, const float* mx, int mask) -> void
{
  return Zynamic::Forward<public void (const float*, const float*, int)>(L"colgeom_visitor_t::intersect_box")(mn, mx, mask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto colgeom_visitor_t::intersect_box_brushes(struct cLeaf_s* leaf) -> void
{
  return Zynamic::Forward<public void (struct cLeaf_s*)>(L"colgeom_visitor_t::intersect_box_brushes")(leaf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto colgeom_visitor_t::intersect_box_partitions(struct cLeaf_s* leaf) -> void
{
  return Zynamic::Forward<public void (struct cLeaf_s*)>(L"colgeom_visitor_t::intersect_box_partitions")(leaf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto colgeom_visitor_t::intersect_box_brushnode(struct cLeafBrushNode_s* node) -> void
{
  return Zynamic::Forward<public void (struct cLeafBrushNode_s*)>(L"colgeom_visitor_t::intersect_box_brushnode")(node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto colgeom_visitor_t::intersect_box_partitions_r(struct CollisionAabbTree* aabbTree) -> void
{
  return Zynamic::Forward<public void (struct CollisionAabbTree*)>(L"colgeom_visitor_t::intersect_box_partitions_r")(aabbTree);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto static_colgeom_visitor_t::visit(const struct CollisionAabbTree* tree) -> void
{
  return Zynamic::Forward<public void (const struct CollisionAabbTree*)>(L"static_colgeom_visitor_t::visit")(tree);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto static_colgeom_visitor_t::visit(const struct cbrush_t* brush) -> void
{
  return Zynamic::Forward<public void (const struct cbrush_t*)>(L"static_colgeom_visitor_t::visit")(brush);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto static_colgeom_visitor_t::update(const float* _mn, const float* _mx, int mask, const float* expand_vec) -> void
{
  return Zynamic::Forward<public void (const float*, const float*, int, const float*)>(L"static_colgeom_visitor_t::update")(_mn, _mx, mask, expand_vec);
}

#endif // __UNIMPLEMENTED__
