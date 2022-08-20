// This file is generated by TypeBuilder_h.template.

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef blink_protocol_LayerTree_h
#define blink_protocol_LayerTree_h

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/inspector/protocol/protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.
#include "third_party/blink/renderer/core/inspector/protocol/dom.h"

namespace blink {
namespace protocol {
namespace LayerTree {
using LayerId = String;
using SnapshotId = String;
class ScrollRect;
class StickyPositionConstraint;
class PictureTile;
class Layer;

// ------------- Forward and enum declarations.

// ------------- Type and builder declarations.

class CORE_EXPORT ScrollRect : public ::crdtp::ProtocolObject<ScrollRect> {
public:
    ~ScrollRect() override { }

    protocol::DOM::Rect* getRect() { return m_rect.get(); }
    void setRect(std::unique_ptr<protocol::DOM::Rect> value) { m_rect = std::move(value); }

    struct CORE_EXPORT TypeEnum {
        static const char* RepaintsOnScroll;
        static const char* TouchEventHandler;
        static const char* WheelEventHandler;
    }; // TypeEnum

    String getType() { return m_type; }
    void setType(const String& value) { m_type = value; }

    template<int STATE>
    class ScrollRectBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            RectSet = 1 << 1,
            TypeSet = 1 << 2,
            AllFieldsSet = (RectSet | TypeSet | 0)};


        ScrollRectBuilder<STATE | RectSet>& setRect(std::unique_ptr<protocol::DOM::Rect> value)
        {
            static_assert(!(STATE & RectSet), "property rect should not be set yet");
            m_result->setRect(std::move(value));
            return castState<RectSet>();
        }

        ScrollRectBuilder<STATE | TypeSet>& setType(const String& value)
        {
            static_assert(!(STATE & TypeSet), "property type should not be set yet");
            m_result->setType(value);
            return castState<TypeSet>();
        }

        std::unique_ptr<ScrollRect> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ScrollRect;
        ScrollRectBuilder() : m_result(new ScrollRect()) { }

        template<int STEP> ScrollRectBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ScrollRectBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::LayerTree::ScrollRect> m_result;
    };

    static ScrollRectBuilder<0> create()
    {
        return ScrollRectBuilder<0>();
    }

private:
    DECLARE_SERIALIZATION_SUPPORT();

    ScrollRect()
    {
    }

    std::unique_ptr<protocol::DOM::Rect> m_rect;
    String m_type;
};


class CORE_EXPORT StickyPositionConstraint : public ::crdtp::ProtocolObject<StickyPositionConstraint> {
public:
    ~StickyPositionConstraint() override { }

    protocol::DOM::Rect* getStickyBoxRect() { return m_stickyBoxRect.get(); }
    void setStickyBoxRect(std::unique_ptr<protocol::DOM::Rect> value) { m_stickyBoxRect = std::move(value); }

    protocol::DOM::Rect* getContainingBlockRect() { return m_containingBlockRect.get(); }
    void setContainingBlockRect(std::unique_ptr<protocol::DOM::Rect> value) { m_containingBlockRect = std::move(value); }

    bool hasNearestLayerShiftingStickyBox() { return m_nearestLayerShiftingStickyBox.isJust(); }
    String getNearestLayerShiftingStickyBox(const String& defaultValue) { return m_nearestLayerShiftingStickyBox.isJust() ? m_nearestLayerShiftingStickyBox.fromJust() : defaultValue; }
    void setNearestLayerShiftingStickyBox(const String& value) { m_nearestLayerShiftingStickyBox = value; }

    bool hasNearestLayerShiftingContainingBlock() { return m_nearestLayerShiftingContainingBlock.isJust(); }
    String getNearestLayerShiftingContainingBlock(const String& defaultValue) { return m_nearestLayerShiftingContainingBlock.isJust() ? m_nearestLayerShiftingContainingBlock.fromJust() : defaultValue; }
    void setNearestLayerShiftingContainingBlock(const String& value) { m_nearestLayerShiftingContainingBlock = value; }

    template<int STATE>
    class StickyPositionConstraintBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            StickyBoxRectSet = 1 << 1,
            ContainingBlockRectSet = 1 << 2,
            AllFieldsSet = (StickyBoxRectSet | ContainingBlockRectSet | 0)};


        StickyPositionConstraintBuilder<STATE | StickyBoxRectSet>& setStickyBoxRect(std::unique_ptr<protocol::DOM::Rect> value)
        {
            static_assert(!(STATE & StickyBoxRectSet), "property stickyBoxRect should not be set yet");
            m_result->setStickyBoxRect(std::move(value));
            return castState<StickyBoxRectSet>();
        }

        StickyPositionConstraintBuilder<STATE | ContainingBlockRectSet>& setContainingBlockRect(std::unique_ptr<protocol::DOM::Rect> value)
        {
            static_assert(!(STATE & ContainingBlockRectSet), "property containingBlockRect should not be set yet");
            m_result->setContainingBlockRect(std::move(value));
            return castState<ContainingBlockRectSet>();
        }

        StickyPositionConstraintBuilder<STATE>& setNearestLayerShiftingStickyBox(const String& value)
        {
            m_result->setNearestLayerShiftingStickyBox(value);
            return *this;
        }

        StickyPositionConstraintBuilder<STATE>& setNearestLayerShiftingContainingBlock(const String& value)
        {
            m_result->setNearestLayerShiftingContainingBlock(value);
            return *this;
        }

        std::unique_ptr<StickyPositionConstraint> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class StickyPositionConstraint;
        StickyPositionConstraintBuilder() : m_result(new StickyPositionConstraint()) { }

        template<int STEP> StickyPositionConstraintBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<StickyPositionConstraintBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::LayerTree::StickyPositionConstraint> m_result;
    };

    static StickyPositionConstraintBuilder<0> create()
    {
        return StickyPositionConstraintBuilder<0>();
    }

private:
    DECLARE_SERIALIZATION_SUPPORT();

    StickyPositionConstraint()
    {
    }

    std::unique_ptr<protocol::DOM::Rect> m_stickyBoxRect;
    std::unique_ptr<protocol::DOM::Rect> m_containingBlockRect;
    Maybe<String> m_nearestLayerShiftingStickyBox;
    Maybe<String> m_nearestLayerShiftingContainingBlock;
};


class CORE_EXPORT PictureTile : public ::crdtp::ProtocolObject<PictureTile> {
public:
    ~PictureTile() override { }

    double getX() { return m_x; }
    void setX(double value) { m_x = value; }

    double getY() { return m_y; }
    void setY(double value) { m_y = value; }

    Binary getPicture() { return m_picture; }
    void setPicture(const Binary& value) { m_picture = value; }

    template<int STATE>
    class PictureTileBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            XSet = 1 << 1,
            YSet = 1 << 2,
            PictureSet = 1 << 3,
            AllFieldsSet = (XSet | YSet | PictureSet | 0)};


        PictureTileBuilder<STATE | XSet>& setX(double value)
        {
            static_assert(!(STATE & XSet), "property x should not be set yet");
            m_result->setX(value);
            return castState<XSet>();
        }

        PictureTileBuilder<STATE | YSet>& setY(double value)
        {
            static_assert(!(STATE & YSet), "property y should not be set yet");
            m_result->setY(value);
            return castState<YSet>();
        }

        PictureTileBuilder<STATE | PictureSet>& setPicture(const Binary& value)
        {
            static_assert(!(STATE & PictureSet), "property picture should not be set yet");
            m_result->setPicture(value);
            return castState<PictureSet>();
        }

        std::unique_ptr<PictureTile> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class PictureTile;
        PictureTileBuilder() : m_result(new PictureTile()) { }

        template<int STEP> PictureTileBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<PictureTileBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::LayerTree::PictureTile> m_result;
    };

    static PictureTileBuilder<0> create()
    {
        return PictureTileBuilder<0>();
    }

private:
    DECLARE_SERIALIZATION_SUPPORT();

    PictureTile()
    {
          m_x = 0;
          m_y = 0;
    }

    double m_x;
    double m_y;
    Binary m_picture;
};


class CORE_EXPORT Layer : public ::crdtp::ProtocolObject<Layer> {
public:
    ~Layer() override { }

    String getLayerId() { return m_layerId; }
    void setLayerId(const String& value) { m_layerId = value; }

    bool hasParentLayerId() { return m_parentLayerId.isJust(); }
    String getParentLayerId(const String& defaultValue) { return m_parentLayerId.isJust() ? m_parentLayerId.fromJust() : defaultValue; }
    void setParentLayerId(const String& value) { m_parentLayerId = value; }

    bool hasBackendNodeId() { return m_backendNodeId.isJust(); }
    int getBackendNodeId(int defaultValue) { return m_backendNodeId.isJust() ? m_backendNodeId.fromJust() : defaultValue; }
    void setBackendNodeId(int value) { m_backendNodeId = value; }

    double getOffsetX() { return m_offsetX; }
    void setOffsetX(double value) { m_offsetX = value; }

    double getOffsetY() { return m_offsetY; }
    void setOffsetY(double value) { m_offsetY = value; }

    double getWidth() { return m_width; }
    void setWidth(double value) { m_width = value; }

    double getHeight() { return m_height; }
    void setHeight(double value) { m_height = value; }

    bool hasTransform() { return m_transform.isJust(); }
    protocol::Array<double>* getTransform(protocol::Array<double>* defaultValue) { return m_transform.isJust() ? m_transform.fromJust() : defaultValue; }
    void setTransform(std::unique_ptr<protocol::Array<double>> value) { m_transform = std::move(value); }

    bool hasAnchorX() { return m_anchorX.isJust(); }
    double getAnchorX(double defaultValue) { return m_anchorX.isJust() ? m_anchorX.fromJust() : defaultValue; }
    void setAnchorX(double value) { m_anchorX = value; }

    bool hasAnchorY() { return m_anchorY.isJust(); }
    double getAnchorY(double defaultValue) { return m_anchorY.isJust() ? m_anchorY.fromJust() : defaultValue; }
    void setAnchorY(double value) { m_anchorY = value; }

    bool hasAnchorZ() { return m_anchorZ.isJust(); }
    double getAnchorZ(double defaultValue) { return m_anchorZ.isJust() ? m_anchorZ.fromJust() : defaultValue; }
    void setAnchorZ(double value) { m_anchorZ = value; }

    int getPaintCount() { return m_paintCount; }
    void setPaintCount(int value) { m_paintCount = value; }

    bool getDrawsContent() { return m_drawsContent; }
    void setDrawsContent(bool value) { m_drawsContent = value; }

    bool hasInvisible() { return m_invisible.isJust(); }
    bool getInvisible(bool defaultValue) { return m_invisible.isJust() ? m_invisible.fromJust() : defaultValue; }
    void setInvisible(bool value) { m_invisible = value; }

    bool hasScrollRects() { return m_scrollRects.isJust(); }
    protocol::Array<protocol::LayerTree::ScrollRect>* getScrollRects(protocol::Array<protocol::LayerTree::ScrollRect>* defaultValue) { return m_scrollRects.isJust() ? m_scrollRects.fromJust() : defaultValue; }
    void setScrollRects(std::unique_ptr<protocol::Array<protocol::LayerTree::ScrollRect>> value) { m_scrollRects = std::move(value); }

    bool hasStickyPositionConstraint() { return m_stickyPositionConstraint.isJust(); }
    protocol::LayerTree::StickyPositionConstraint* getStickyPositionConstraint(protocol::LayerTree::StickyPositionConstraint* defaultValue) { return m_stickyPositionConstraint.isJust() ? m_stickyPositionConstraint.fromJust() : defaultValue; }
    void setStickyPositionConstraint(std::unique_ptr<protocol::LayerTree::StickyPositionConstraint> value) { m_stickyPositionConstraint = std::move(value); }

    template<int STATE>
    class LayerBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            LayerIdSet = 1 << 1,
            OffsetXSet = 1 << 2,
            OffsetYSet = 1 << 3,
            WidthSet = 1 << 4,
            HeightSet = 1 << 5,
            PaintCountSet = 1 << 6,
            DrawsContentSet = 1 << 7,
            AllFieldsSet = (LayerIdSet | OffsetXSet | OffsetYSet | WidthSet | HeightSet | PaintCountSet | DrawsContentSet | 0)};


        LayerBuilder<STATE | LayerIdSet>& setLayerId(const String& value)
        {
            static_assert(!(STATE & LayerIdSet), "property layerId should not be set yet");
            m_result->setLayerId(value);
            return castState<LayerIdSet>();
        }

        LayerBuilder<STATE>& setParentLayerId(const String& value)
        {
            m_result->setParentLayerId(value);
            return *this;
        }

        LayerBuilder<STATE>& setBackendNodeId(int value)
        {
            m_result->setBackendNodeId(value);
            return *this;
        }

        LayerBuilder<STATE | OffsetXSet>& setOffsetX(double value)
        {
            static_assert(!(STATE & OffsetXSet), "property offsetX should not be set yet");
            m_result->setOffsetX(value);
            return castState<OffsetXSet>();
        }

        LayerBuilder<STATE | OffsetYSet>& setOffsetY(double value)
        {
            static_assert(!(STATE & OffsetYSet), "property offsetY should not be set yet");
            m_result->setOffsetY(value);
            return castState<OffsetYSet>();
        }

        LayerBuilder<STATE | WidthSet>& setWidth(double value)
        {
            static_assert(!(STATE & WidthSet), "property width should not be set yet");
            m_result->setWidth(value);
            return castState<WidthSet>();
        }

        LayerBuilder<STATE | HeightSet>& setHeight(double value)
        {
            static_assert(!(STATE & HeightSet), "property height should not be set yet");
            m_result->setHeight(value);
            return castState<HeightSet>();
        }

        LayerBuilder<STATE>& setTransform(std::unique_ptr<protocol::Array<double>> value)
        {
            m_result->setTransform(std::move(value));
            return *this;
        }

        LayerBuilder<STATE>& setAnchorX(double value)
        {
            m_result->setAnchorX(value);
            return *this;
        }

        LayerBuilder<STATE>& setAnchorY(double value)
        {
            m_result->setAnchorY(value);
            return *this;
        }

        LayerBuilder<STATE>& setAnchorZ(double value)
        {
            m_result->setAnchorZ(value);
            return *this;
        }

        LayerBuilder<STATE | PaintCountSet>& setPaintCount(int value)
        {
            static_assert(!(STATE & PaintCountSet), "property paintCount should not be set yet");
            m_result->setPaintCount(value);
            return castState<PaintCountSet>();
        }

        LayerBuilder<STATE | DrawsContentSet>& setDrawsContent(bool value)
        {
            static_assert(!(STATE & DrawsContentSet), "property drawsContent should not be set yet");
            m_result->setDrawsContent(value);
            return castState<DrawsContentSet>();
        }

        LayerBuilder<STATE>& setInvisible(bool value)
        {
            m_result->setInvisible(value);
            return *this;
        }

        LayerBuilder<STATE>& setScrollRects(std::unique_ptr<protocol::Array<protocol::LayerTree::ScrollRect>> value)
        {
            m_result->setScrollRects(std::move(value));
            return *this;
        }

        LayerBuilder<STATE>& setStickyPositionConstraint(std::unique_ptr<protocol::LayerTree::StickyPositionConstraint> value)
        {
            m_result->setStickyPositionConstraint(std::move(value));
            return *this;
        }

        std::unique_ptr<Layer> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class Layer;
        LayerBuilder() : m_result(new Layer()) { }

        template<int STEP> LayerBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<LayerBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::LayerTree::Layer> m_result;
    };

    static LayerBuilder<0> create()
    {
        return LayerBuilder<0>();
    }

private:
    DECLARE_SERIALIZATION_SUPPORT();

    Layer()
    {
          m_offsetX = 0;
          m_offsetY = 0;
          m_width = 0;
          m_height = 0;
          m_paintCount = 0;
          m_drawsContent = false;
    }

    String m_layerId;
    Maybe<String> m_parentLayerId;
    Maybe<int> m_backendNodeId;
    double m_offsetX;
    double m_offsetY;
    double m_width;
    double m_height;
    Maybe<protocol::Array<double>> m_transform;
    Maybe<double> m_anchorX;
    Maybe<double> m_anchorY;
    Maybe<double> m_anchorZ;
    int m_paintCount;
    bool m_drawsContent;
    Maybe<bool> m_invisible;
    Maybe<protocol::Array<protocol::LayerTree::ScrollRect>> m_scrollRects;
    Maybe<protocol::LayerTree::StickyPositionConstraint> m_stickyPositionConstraint;
};


// ------------- Backend interface.

class CORE_EXPORT Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse compositingReasons(const String& in_layerId, std::unique_ptr<protocol::Array<String>>* out_compositingReasons, std::unique_ptr<protocol::Array<String>>* out_compositingReasonIds) = 0;
    virtual DispatchResponse disable() = 0;
    virtual DispatchResponse enable() = 0;
    virtual DispatchResponse loadSnapshot(std::unique_ptr<protocol::Array<protocol::LayerTree::PictureTile>> in_tiles, String* out_snapshotId) = 0;
    virtual DispatchResponse makeSnapshot(const String& in_layerId, String* out_snapshotId) = 0;
    virtual DispatchResponse profileSnapshot(const String& in_snapshotId, Maybe<int> in_minRepeatCount, Maybe<double> in_minDuration, Maybe<protocol::DOM::Rect> in_clipRect, std::unique_ptr<protocol::Array<protocol::Array<double>>>* out_timings) = 0;
    virtual DispatchResponse releaseSnapshot(const String& in_snapshotId) = 0;
    virtual DispatchResponse replaySnapshot(const String& in_snapshotId, Maybe<int> in_fromStep, Maybe<int> in_toStep, Maybe<double> in_scale, String* out_dataURL) = 0;
    virtual DispatchResponse snapshotCommandLog(const String& in_snapshotId, std::unique_ptr<protocol::Array<protocol::DictionaryValue>>* out_commandLog) = 0;

};

// ------------- Frontend interface.

class CORE_EXPORT Frontend {
public:
  explicit Frontend(FrontendChannel* frontend_channel) : frontend_channel_(frontend_channel) {}
    void layerPainted(const String& layerId, std::unique_ptr<protocol::DOM::Rect> clip);
    void layerTreeDidChange(Maybe<protocol::Array<protocol::LayerTree::Layer>> layers = Maybe<protocol::Array<protocol::LayerTree::Layer>>());

  void flush();
  void sendRawNotification(std::unique_ptr<Serializable>);
 private:
  FrontendChannel* frontend_channel_;
};

// ------------- Dispatcher.

class CORE_EXPORT Dispatcher {
public:
    static void wire(UberDispatcher*, Backend*);

private:
    Dispatcher() { }
};

// ------------- Metainfo.

class CORE_EXPORT Metainfo {
public:
    using BackendClass = Backend;
    using FrontendClass = Frontend;
    using DispatcherClass = Dispatcher;
    static const char domainName[];
    static const char commandPrefix[];
    static const char version[];
};

} // namespace LayerTree
} // namespace blink
} // namespace protocol

#endif // !defined(blink_protocol_LayerTree_h)
