#pragma once

#include <mbgl/style/filter.hpp>
#include <mbgl/util/noncopyable.hpp>

#include <jni/jni.hpp>

namespace mbgl {
namespace android {

class Filter : private mbgl::util::noncopyable {
public:

    static constexpr auto Name() { return "com/mapbox/mapboxsdk/style/layers/Filter"; };

    static jni::Object<Filter::Statement> fromFilter(jni::JNIEnv&, const mbgl::style::Filter&);

    static jni::Class<Filter> javaClass;

    static void registerNative(jni::JNIEnv&);

    class Statement : private mbgl::util::noncopyable {
    public:
        static constexpr auto Name() { return "com/mapbox/mapboxsdk/style/layers/Filter$Statement"; };

        static jni::Class<Filter::Statement> javaClass;
    };
};

} // namespace android
} // namespace mbgl