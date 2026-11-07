// rea decompile_all
// name: FUN_10004b9a4
// address: 0x10004b9a4
// body: available
// range: 0x10004b9a4-0x10004ba67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004b9a4(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  long *unaff_x20;
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
  undefined5 uStack_48;
  undefined3 uStack_43;
  undefined5 uStack_40;
  undefined8 uStack_3b;
  
  thunk_FUN_1001a2e54();
  if ((param_3 & 1) == 0) {
    FUN_10007ec64(&local_b0);
    param_1[9] = lStack_68;
    param_1[8] = local_70;
    param_1[0xb] = lStack_58;
    param_1[10] = lStack_60;
    param_1[0xd] = CONCAT35(uStack_43,uStack_48);
    param_1[0xc] = local_50;
    *(undefined8 *)((long)param_1 + 0x75) = uStack_3b;
    *(ulong *)((long)param_1 + 0x6d) = CONCAT53(uStack_40,uStack_43);
    param_1[1] = lStack_a8;
    *param_1 = local_b0;
    param_1[3] = lStack_98;
    param_1[2] = lStack_a0;
    param_1[5] = lStack_88;
    param_1[4] = local_90;
    param_1[7] = lStack_78;
    param_1[6] = lStack_80;
  }
  else {
    iVar2 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    local_b0 = *unaff_x20;
    if (iVar2 == 0) {
      FUN_1000631c8();
    }
    lVar1 = local_b0;
    _memmove(param_1,(void *)(*(long *)(local_b0 + 0x38) + param_2 * 0x80),0x7d);
    FUN_10006c2d0(param_2,lVar1);
    *unaff_x20 = lVar1;
    FUN_100008290(param_1);
  }
  return;
}

