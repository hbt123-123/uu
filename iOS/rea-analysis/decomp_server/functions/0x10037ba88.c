// rea decompile_all
// name: FUN_10037ba88
// address: 0x10037ba88
// body: available
// range: 0x10037ba88-0x10037bb8b inclusive
// range: 0x10037bb98-0x10037bb9f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

_func_11423 * FUN_10037ba88(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  _func_11423 *p_Var2;
  _Unwind_Exception *exception_object;
  _func_11423 *p_Var3;
  ulong uVar4;
  _func_11423 *p_Var5;
  _func_11423 *p_Var6;
  _func_11423 *p_Var7;
  uintptr_t uVar8;
  ulong uVar9;
  _func_11423 *p_Var10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  _Unwind_Exception *local_58;
  uint32_t *puStack_50;
  undefined8 *local_48;
  uint32_t *puStack_40;
  _Unwind_Exception *local_38;
  
  exception_object = (_Unwind_Exception *)(param_1 + 2);
  puVar12 = (undefined8 *)param_1[1];
  if (puVar12 < (undefined8 *)exception_object->exception_class) {
    uVar11 = *param_3;
    *puVar12 = *param_2;
    puVar12[1] = uVar11;
    puVar12 = puVar12 + 2;
    param_1[1] = (long)puVar12;
  }
  else {
    lVar13 = (long)puVar12 - *param_1 >> 4;
    uVar1 = lVar13 + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10037bc4c();
      param_1[1] = lVar13;
      __Unwind_Resume(exception_object);
      p_Var3 = (_func_11423 *)exception_object->exception_class;
      p_Var2 = exception_object->exception_cleanup;
      p_Var7 = p_Var3 + (param_2[1] - (long)p_Var2);
      p_Var5 = p_Var3;
      p_Var10 = p_Var7;
      if (p_Var2 != p_Var3) {
        do {
          uVar11 = *(undefined8 *)(p_Var5 + 8);
          *(undefined8 *)p_Var10 = *(undefined8 *)p_Var5;
          p_Var6 = p_Var5 + 0x10;
          *(undefined8 *)p_Var5 = 0;
          *(undefined8 *)(p_Var10 + 8) = uVar11;
          p_Var5 = p_Var6;
          p_Var10 = p_Var10 + 0x10;
        } while (p_Var6 != p_Var2);
        do {
          FUN_10037b708();
          p_Var3 = p_Var3 + 0x10;
        } while (p_Var3 != p_Var2);
        p_Var3 = (_func_11423 *)exception_object->exception_class;
      }
      param_2[1] = p_Var7;
      exception_object->exception_class = (uint64_t)p_Var7;
      exception_object->exception_cleanup = p_Var3;
      param_2[1] = p_Var3;
      p_Var7 = exception_object->exception_cleanup;
      exception_object->exception_cleanup = (_func_11423 *)param_2[2];
      param_2[2] = p_Var7;
      uVar8 = exception_object->private_1;
      exception_object->private_1 = param_2[3];
      param_2[3] = uVar8;
      *param_2 = param_2[1];
      return p_Var3;
    }
    uVar4 = (long)exception_object->exception_class - *param_1;
    uVar9 = (long)uVar4 >> 3;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar9 = 0xfffffffffffffff;
    }
    local_38 = exception_object;
    if (uVar9 == 0) {
      local_58 = (_Unwind_Exception *)0x0;
    }
    else {
      FUN_10037bc60();
      local_58 = exception_object;
    }
    puStack_50 = local_58->reserved + lVar13 * 4 + -8;
    puStack_40 = local_58->reserved + uVar9 * 4 + -8;
    uVar11 = *param_3;
    *(undefined8 *)puStack_50 = *param_2;
    *(undefined8 *)(puStack_50 + 2) = uVar11;
    local_48 = (undefined8 *)(puStack_50 + 4);
    FUN_10037bba0(param_1,&local_58);
    puVar12 = (undefined8 *)param_1[1];
    FUN_10037bc94(&local_58);
  }
  param_1[1] = (long)puVar12;
  return (_func_11423 *)(puVar12 + -2);
}

