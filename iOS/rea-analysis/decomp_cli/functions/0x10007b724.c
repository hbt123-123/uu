// rea decompile_all
// name: FUN_10007b724
// address: 0x10007b724
// body: available
// range: 0x10007b724-0x10007b82f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007b724(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  long unaff_x20;
  long lVar1;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar1 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar1);
    FUN_10008109c(param_2,param_3,param_4);
    if ((param_3 & 1) != 0) {
      FUN_100083828(*(long *)(lVar1 + 0x38) + param_2 * 0x48,&local_c8);
      _swift_bridgeObjectRelease(lVar1);
      uStack_78 = uStack_c0;
      local_80 = local_c8;
      uStack_68 = uStack_b0;
      uStack_70 = local_b8;
      uStack_58 = uStack_a0;
      local_60 = local_a8;
      local_50 = local_98;
      _swift_beginAccess(unaff_x20 + 0x38,&local_c8,0x21,0);
      _swift_bridgeObjectRetain(uStack_90);
      FUN_100080a28();
      _swift_endAccess(&local_c8);
      param_1[1] = uStack_78;
      *param_1 = local_80;
      param_1[3] = uStack_68;
      param_1[2] = uStack_70;
      param_1[5] = uStack_58;
      param_1[4] = local_60;
      param_1[6] = local_50;
      param_1[7] = uStack_90;
      *(undefined1 *)(param_1 + 8) = local_88;
      return;
    }
    _swift_bridgeObjectRelease(lVar1);
  }
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}

