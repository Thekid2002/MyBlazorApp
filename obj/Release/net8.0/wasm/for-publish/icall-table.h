#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
219,
227,
228,
229,
230,
231,
232,
233,
234,
237,
238,
293,
294,
295,
319,
320,
321,
332,
333,
334,
335,
422,
423,
424,
425,
428,
460,
461,
463,
465,
467,
469,
474,
482,
483,
484,
485,
486,
487,
488,
489,
490,
535,
572,
573,
625,
631,
634,
636,
641,
642,
644,
645,
649,
650,
652,
654,
655,
658,
659,
660,
663,
666,
668,
670,
679,
736,
738,
740,
750,
751,
752,
754,
760,
761,
762,
763,
764,
772,
773,
774,
778,
779,
781,
783,
979,
1127,
1128,
6618,
6619,
6621,
6622,
6623,
6624,
6625,
6627,
6629,
6631,
6632,
6640,
6642,
6647,
6649,
6651,
6653,
6704,
6705,
6707,
6708,
6709,
6710,
6711,
6713,
6715,
7587,
7591,
7593,
7594,
7595,
7596,
7806,
7807,
7808,
7809,
7825,
7826,
7827,
7829,
7871,
7930,
7932,
7941,
7942,
7943,
7944,
8360,
8364,
8365,
8394,
8411,
8418,
8425,
8436,
8439,
8459,
8530,
8532,
8542,
8544,
8545,
8546,
8553,
8567,
8587,
8588,
8596,
8598,
8605,
8606,
8609,
8611,
8616,
8622,
8623,
8630,
8632,
8644,
8647,
8648,
8649,
8660,
8669,
8675,
8676,
8677,
8679,
8680,
8697,
8699,
8713,
8732,
8733,
8760,
8785,
8786,
9252,
9335,
9336,
9481,
9482,
9487,
9490,
9554,
9971,
9972,
10343,
10353,
10948,
10969,
10971,
10973,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_Exit (int);
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Sqrt (float);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 219,
ves_icall_System_Array_InternalCreate,
// token 227,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 228,
ves_icall_System_Array_CanChangePrimitive,
// token 229,
ves_icall_System_Array_FastCopy,
// token 230,
ves_icall_System_Array_GetLengthInternal_raw,
// token 231,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 232,
ves_icall_System_Array_GetGenericValue_icall,
// token 233,
ves_icall_System_Array_GetValueImpl_raw,
// token 234,
ves_icall_System_Array_SetGenericValue_icall,
// token 237,
ves_icall_System_Array_SetValueImpl_raw,
// token 238,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 293,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 294,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 295,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 319,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 320,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 321,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 332,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 333,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 334,
ves_icall_System_Enum_InternalGetCorElementType,
// token 335,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 422,
ves_icall_System_Environment_get_ProcessorCount,
// token 423,
ves_icall_System_Environment_get_TickCount,
// token 424,
ves_icall_System_Environment_get_TickCount64,
// token 425,
ves_icall_System_Environment_Exit,
// token 428,
ves_icall_System_Environment_FailFast_raw,
// token 460,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 461,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 463,
ves_icall_System_GC_SuppressFinalize_raw,
// token 465,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 467,
ves_icall_System_GC_GetGCMemoryInfo,
// token 469,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 474,
ves_icall_System_Object_MemberwiseClone_raw,
// token 482,
ves_icall_System_Math_Ceiling,
// token 483,
ves_icall_System_Math_Cos,
// token 484,
ves_icall_System_Math_Floor,
// token 485,
ves_icall_System_Math_Log10,
// token 486,
ves_icall_System_Math_Pow,
// token 487,
ves_icall_System_Math_Sin,
// token 488,
ves_icall_System_Math_Sqrt,
// token 489,
ves_icall_System_Math_Tan,
// token 490,
ves_icall_System_Math_ModF,
// token 535,
ves_icall_System_MathF_Sqrt,
// token 572,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 573,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 625,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 631,
ves_icall_RuntimeType_make_array_type_raw,
// token 634,
ves_icall_RuntimeType_make_byref_type_raw,
// token 636,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 641,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 642,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 644,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 645,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 649,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 650,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 652,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 654,
ves_icall_System_RuntimeType_getFullName_raw,
// token 655,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 658,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 659,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 660,
ves_icall_RuntimeType_GetFields_native_raw,
// token 663,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 666,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 668,
ves_icall_RuntimeType_GetName_raw,
// token 670,
ves_icall_RuntimeType_GetNamespace_raw,
// token 679,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 736,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 738,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 740,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 750,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 751,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 752,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 754,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 760,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 761,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 762,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 763,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 764,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 772,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 773,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 774,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 778,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 779,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 781,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 783,
ves_icall_System_String_FastAllocateString_raw,
// token 979,
ves_icall_System_Type_internal_from_handle_raw,
// token 1127,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1128,
ves_icall_System_ValueType_Equals_raw,
// token 6618,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6619,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6621,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6622,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6623,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6624,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6625,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6627,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6629,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6631,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6632,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 6640,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6642,
mono_monitor_exit_icall_raw,
// token 6647,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6649,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6651,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6653,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6704,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6705,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6707,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6708,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6709,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6710,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6711,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6713,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6715,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 7587,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 7591,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 7593,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 7594,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 7595,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 7596,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 7806,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 7807,
ves_icall_System_GCHandle_InternalFree_raw,
// token 7808,
ves_icall_System_GCHandle_InternalGet_raw,
// token 7809,
ves_icall_System_GCHandle_InternalSet_raw,
// token 7825,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 7826,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 7827,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 7829,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 7871,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 7930,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 7932,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 7941,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 7942,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 7943,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 7944,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 8360,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 8364,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 8365,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 8394,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 8411,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 8418,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 8425,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 8436,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 8439,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 8459,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 8530,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 8532,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 8542,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 8544,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 8545,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 8546,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 8553,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 8567,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 8587,
ves_icall_reflection_get_token_raw,
// token 8588,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 8596,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 8598,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 8605,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 8606,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 8609,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 8611,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 8616,
ves_icall_reflection_get_token_raw,
// token 8622,
ves_icall_get_method_info_raw,
// token 8623,
ves_icall_get_method_attributes,
// token 8630,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 8632,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 8644,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 8647,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 8648,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 8649,
ves_icall_reflection_get_token_raw,
// token 8660,
ves_icall_InternalInvoke_raw,
// token 8669,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 8675,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 8676,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 8677,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 8679,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 8680,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 8697,
ves_icall_InvokeClassConstructor_raw,
// token 8699,
ves_icall_InternalInvoke_raw,
// token 8713,
ves_icall_reflection_get_token_raw,
// token 8732,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 8733,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 8760,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 8785,
ves_icall_reflection_get_token_raw,
// token 8786,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 9252,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 9335,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 9336,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 9481,
ves_icall_ModuleBuilder_basic_init_raw,
// token 9482,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 9487,
ves_icall_ModuleBuilder_getToken_raw,
// token 9490,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 9554,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 9971,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 9972,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 10343,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 10353,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 10948,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 10969,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 10971,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 10973,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
};
