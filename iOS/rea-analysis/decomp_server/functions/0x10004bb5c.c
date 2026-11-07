// rea decompile_all
// name: FUN_10004bb5c
// address: 0x10004bb5c
// body: available
// range: 0x10004bb5c-0x10004bc27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004bb5c(long *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  long *unaff_x20;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  param_2 = param_2 & 0xffffffff000000ff;
  FUN_1001a2d90();
  if ((param_3 & 1) == 0) {
    FUN_10008241c(&local_d0);
    param_1[0xd] = lStack_68;
    param_1[0xc] = local_70;
    param_1[0xf] = lStack_58;
    param_1[0xe] = lStack_60;
    param_1[0x11] = lStack_48;
    param_1[0x10] = local_50;
    param_1[0x13] = lStack_38;
    param_1[0x12] = lStack_40;
    param_1[5] = lStack_a8;
    param_1[4] = local_b0;
    param_1[7] = lStack_98;
    param_1[6] = lStack_a0;
    param_1[9] = lStack_88;
    param_1[8] = local_90;
    param_1[0xb] = lStack_78;
    param_1[10] = lStack_80;
    param_1[1] = lStack_c8;
    *param_1 = local_d0;
    param_1[3] = lStack_b8;
    param_1[2] = lStack_c0;
  }
  else {
    iVar2 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    local_d0 = *unaff_x20;
    if (iVar2 == 0) {
      FUN_100065a28();
    }
    lVar1 = local_d0;
    _memmove(param_1,(void *)(*(long *)(local_d0 + 0x38) + param_2 * 0xa0),0xa0);
    FUN_10006d130(param_2,lVar1);
    *unaff_x20 = lVar1;
    FUN_100008290(param_1);
  }
  return;
}

