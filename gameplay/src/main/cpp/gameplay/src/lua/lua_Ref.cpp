// Autogenerated by gameplay-luagen
#include "Base.h"
#include "ScriptController.h"
#include "lua_Ref.h"
#include "AIAgent.h"
#include "AIState.h"
#include "AbsoluteLayout.h"
#include "Animation.h"
#include "AnimationClip.h"
#include "AudioBuffer.h"
#include "AudioSource.h"
#include "Base.h"
#include "Bundle.h"
#include "Button.h"
#include "Camera.h"
#include "CheckBox.h"
#include "Container.h"
#include "Control.h"
#include "Curve.h"
#include "DepthStencilTarget.h"
#include "Effect.h"
#include "FlowLayout.h"
#include "Font.h"
#include "Form.h"
#include "FrameBuffer.h"
#include "Game.h"
#include "HeightField.h"
#include "Image.h"
#include "ImageControl.h"
#include "Joint.h"
#include "JoystickControl.h"
#include "Label.h"
#include "Layout.h"
#include "Light.h"
#include "Material.h"
#include "MaterialParameter.h"
#include "Mesh.h"
#include "Model.h"
#include "Node.h"
#include "ParticleEmitter.h"
#include "Pass.h"
#include "PhysicsCollisionShape.h"
#include "RadioButton.h"
#include "Ref.h"
#include "RenderState.h"
#include "RenderTarget.h"
#include "Scene.h"
#include "Script.h"
#include "Slider.h"
#include "Sprite.h"
#include "Technique.h"
#include "Terrain.h"
#include "Text.h"
#include "TextBox.h"
#include "Texture.h"
#include "Theme.h"
#include "TileSet.h"
#include "VertexAttributeBinding.h"
#include "VerticalLayout.h"
#include "AIAgent.h"
#include "AIState.h"
#include "Animation.h"
#include "AnimationClip.h"
#include "AudioBuffer.h"
#include "AudioSource.h"
#include "Bundle.h"
#include "Camera.h"
#include "Control.h"
#include "Curve.h"
#include "DepthStencilTarget.h"
#include "Effect.h"
#include "Font.h"
#include "FrameBuffer.h"
#include "HeightField.h"
#include "Image.h"
#include "Layout.h"
#include "Light.h"
#include "MaterialParameter.h"
#include "Mesh.h"
#include "Model.h"
#include "Node.h"
#include "ParticleEmitter.h"
#include "PhysicsCollisionShape.h"
#include "RenderState.h"
#include "RenderState.h"
#include "RenderTarget.h"
#include "Scene.h"
#include "Script.h"
#include "Sprite.h"
#include "Terrain.h"
#include "Text.h"
#include "Texture.h"
#include "Texture.h"
#include "Theme.h"
#include "Theme.h"
#include "TileSet.h"
#include "VertexAttributeBinding.h"

namespace gameplay
{

extern void luaGlobal_Register_Conversion_Function(const char* className, void*(*func)(void*, const char*));

static Ref* getInstance(lua_State* state)
{
    void* userdata = luaL_checkudata(state, 1, "Ref");
    luaL_argcheck(state, userdata != NULL, 1, "'Ref' expected.");
    return (Ref*)((gameplay::ScriptUtil::LuaObject*)userdata)->instance;
}

static int lua_Ref_addRef(lua_State* state)
{
    // Get the number of parameters.
    int paramCount = lua_gettop(state);

    // Attempt to match the parameters to a valid binding.
    switch (paramCount)
    {
        case 1:
        {
            if ((lua_type(state, 1) == LUA_TUSERDATA))
            {
                Ref* instance = getInstance(state);
                instance->addRef();
                
                return 0;
            }

            lua_pushstring(state, "lua_Ref_addRef - Failed to match the given parameters to a valid function signature.");
            lua_error(state);
            break;
        }
        default:
        {
            lua_pushstring(state, "Invalid number of parameters (expected 1).");
            lua_error(state);
            break;
        }
    }
    return 0;
}

static int lua_Ref_getRefCount(lua_State* state)
{
    // Get the number of parameters.
    int paramCount = lua_gettop(state);

    // Attempt to match the parameters to a valid binding.
    switch (paramCount)
    {
        case 1:
        {
            if ((lua_type(state, 1) == LUA_TUSERDATA))
            {
                Ref* instance = getInstance(state);
                unsigned int result = instance->getRefCount();

                // Push the return value onto the stack.
                lua_pushunsigned(state, result);

                return 1;
            }

            lua_pushstring(state, "lua_Ref_getRefCount - Failed to match the given parameters to a valid function signature.");
            lua_error(state);
            break;
        }
        default:
        {
            lua_pushstring(state, "Invalid number of parameters (expected 1).");
            lua_error(state);
            break;
        }
    }
    return 0;
}

static int lua_Ref_release(lua_State* state)
{
    // Get the number of parameters.
    int paramCount = lua_gettop(state);

    // Attempt to match the parameters to a valid binding.
    switch (paramCount)
    {
        case 1:
        {
            if ((lua_type(state, 1) == LUA_TUSERDATA))
            {
                Ref* instance = getInstance(state);
                instance->release();
                
                return 0;
            }

            lua_pushstring(state, "lua_Ref_release - Failed to match the given parameters to a valid function signature.");
            lua_error(state);
            break;
        }
        default:
        {
            lua_pushstring(state, "Invalid number of parameters (expected 1).");
            lua_error(state);
            break;
        }
    }
    return 0;
}

// Provides support for conversion to all known relative types of Ref
static void* __convertTo(void* ptr, const char* typeName)
{
    Ref* ptrObject = reinterpret_cast<Ref*>(ptr);

    if (strcmp(typeName, "AIAgent") == 0)
    {
        return reinterpret_cast<void*>(static_cast<AIAgent*>(ptrObject));
    }
    else if (strcmp(typeName, "AIState") == 0)
    {
        return reinterpret_cast<void*>(static_cast<AIState*>(ptrObject));
    }
    else if (strcmp(typeName, "Animation") == 0)
    {
        return reinterpret_cast<void*>(static_cast<Animation*>(ptrObject));
    }
    else if (strcmp(typeName, "AnimationClip") == 0)
    {
        return reinterpret_cast<void*>(static_cast<AnimationClip*>(ptrObject));
    }
    else if (strcmp(typeName, "AudioBuffer") == 0)
    {
        return reinterpret_cast<void*>(static_cast<AudioBuffer*>(ptrObject));
    }
    else if (strcmp(typeName, "AudioSource") == 0)
    {
        return reinterpret_cast<void*>(static_cast<AudioSource*>(ptrObject));
    }
    else if (strcmp(typeName, "Bundle") == 0)
    {
        return reinterpret_cast<void*>(static_cast<Bundle*>(ptrObject));
    }
    else if (strcmp(typeName, "Camera") == 0)
    {
        return reinterpret_cast<void*>(static_cast<Camera*>(ptrObject));
    }
    else if (strcmp(typeName, "Control") == 0)
    {
        return reinterpret_cast<void*>(static_cast<Control*>(ptrObject));
    }
    else if (strcmp(typeName, "Curve") == 0)
    {
        return reinterpret_cast<void*>(static_cast<Curve*>(ptrObject));
    }
    else if (strcmp(typeName, "DepthStencilTarget") == 0)
    {
        return reinterpret_cast<void*>(static_cast<DepthStencilTarget*>(ptrObject));
    }
    else if (strcmp(typeName, "Effect") == 0)
    {
        return reinterpret_cast<void*>(static_cast<Effect*>(ptrObject));
    }
    else if (strcmp(typeName, "Font") == 0)
    {
        return reinterpret_cast<void*>(static_cast<Font*>(ptrObject));
    }
    else if (strcmp(typeName, "FrameBuffer") == 0)
    {
        return reinterpret_cast<void*>(static_cast<FrameBuffer*>(ptrObject));
    }
    else if (strcmp(typeName, "HeightField") == 0)
    {
        return reinterpret_cast<void*>(static_cast<HeightField*>(ptrObject));
    }
    else if (strcmp(typeName, "Image") == 0)
    {
        return reinterpret_cast<void*>(static_cast<Image*>(ptrObject));
    }
    else if (strcmp(typeName, "Layout") == 0)
    {
        return reinterpret_cast<void*>(static_cast<Layout*>(ptrObject));
    }
    else if (strcmp(typeName, "Light") == 0)
    {
        return reinterpret_cast<void*>(static_cast<Light*>(ptrObject));
    }
    else if (strcmp(typeName, "MaterialParameter") == 0)
    {
        return reinterpret_cast<void*>(static_cast<MaterialParameter*>(ptrObject));
    }
    else if (strcmp(typeName, "Mesh") == 0)
    {
        return reinterpret_cast<void*>(static_cast<Mesh*>(ptrObject));
    }
    else if (strcmp(typeName, "Model") == 0)
    {
        return reinterpret_cast<void*>(static_cast<Model*>(ptrObject));
    }
    else if (strcmp(typeName, "Node") == 0)
    {
        return reinterpret_cast<void*>(static_cast<Node*>(ptrObject));
    }
    else if (strcmp(typeName, "ParticleEmitter") == 0)
    {
        return reinterpret_cast<void*>(static_cast<ParticleEmitter*>(ptrObject));
    }
    else if (strcmp(typeName, "PhysicsCollisionShape") == 0)
    {
        return reinterpret_cast<void*>(static_cast<PhysicsCollisionShape*>(ptrObject));
    }
    else if (strcmp(typeName, "RenderState") == 0)
    {
        return reinterpret_cast<void*>(static_cast<RenderState*>(ptrObject));
    }
    else if (strcmp(typeName, "RenderState::StateBlock") == 0)
    {
        return reinterpret_cast<void*>(static_cast<RenderState::StateBlock*>(ptrObject));
    }
    else if (strcmp(typeName, "RenderTarget") == 0)
    {
        return reinterpret_cast<void*>(static_cast<RenderTarget*>(ptrObject));
    }
    else if (strcmp(typeName, "Scene") == 0)
    {
        return reinterpret_cast<void*>(static_cast<Scene*>(ptrObject));
    }
    else if (strcmp(typeName, "Script") == 0)
    {
        return reinterpret_cast<void*>(static_cast<Script*>(ptrObject));
    }
    else if (strcmp(typeName, "Sprite") == 0)
    {
        return reinterpret_cast<void*>(static_cast<Sprite*>(ptrObject));
    }
    else if (strcmp(typeName, "Terrain") == 0)
    {
        return reinterpret_cast<void*>(static_cast<Terrain*>(ptrObject));
    }
    else if (strcmp(typeName, "Text") == 0)
    {
        return reinterpret_cast<void*>(static_cast<Text*>(ptrObject));
    }
    else if (strcmp(typeName, "Texture") == 0)
    {
        return reinterpret_cast<void*>(static_cast<Texture*>(ptrObject));
    }
    else if (strcmp(typeName, "Texture::Sampler") == 0)
    {
        return reinterpret_cast<void*>(static_cast<Texture::Sampler*>(ptrObject));
    }
    else if (strcmp(typeName, "Theme") == 0)
    {
        return reinterpret_cast<void*>(static_cast<Theme*>(ptrObject));
    }
    else if (strcmp(typeName, "Theme::ThemeImage") == 0)
    {
        return reinterpret_cast<void*>(static_cast<Theme::ThemeImage*>(ptrObject));
    }
    else if (strcmp(typeName, "TileSet") == 0)
    {
        return reinterpret_cast<void*>(static_cast<TileSet*>(ptrObject));
    }
    else if (strcmp(typeName, "VertexAttributeBinding") == 0)
    {
        return reinterpret_cast<void*>(static_cast<VertexAttributeBinding*>(ptrObject));
    }

    // No conversion available for 'typeName'
    return NULL;
}

static int lua_Ref_to(lua_State* state)
{
    // There should be only a single parameter (this instance)
    if (lua_gettop(state) != 2 || lua_type(state, 1) != LUA_TUSERDATA || lua_type(state, 2) != LUA_TSTRING)
    {
        lua_pushstring(state, "lua_Ref_to - Invalid number of parameters (expected 2).");
        lua_error(state);
        return 0;
    }

    Ref* instance = getInstance(state);
    const char* typeName = gameplay::ScriptUtil::getString(2, false);
    void* result = __convertTo((void*)instance, typeName);

    if (result)
    {
        gameplay::ScriptUtil::LuaObject* object = (gameplay::ScriptUtil::LuaObject*)lua_newuserdata(state, sizeof(gameplay::ScriptUtil::LuaObject));
        object->instance = (void*)result;
        object->owns = false;
        luaL_getmetatable(state, typeName);
        lua_setmetatable(state, -2);
    }
    else
    {
        lua_pushnil(state);
    }

    return 1;
}

void luaRegister_Ref()
{
    const luaL_Reg lua_members[] = 
    {
        {"addRef", lua_Ref_addRef},
        {"getRefCount", lua_Ref_getRefCount},
        {"release", lua_Ref_release},
        {"to", lua_Ref_to},
        {NULL, NULL}
    };
    const luaL_Reg* lua_statics = NULL;
    std::vector<std::string> scopePath;

    gameplay::ScriptUtil::registerClass("Ref", lua_members, NULL, NULL, lua_statics, scopePath);

    luaGlobal_Register_Conversion_Function("Ref", __convertTo);
}

}