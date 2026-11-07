// rea decompile_all
// name: FUN_1005c7554
// address: 0x1005c7554
// body: available
// range: 0x1005c7554-0x1005c7633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005c7554(ulong param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  __ss6HasherV5_seedABSi_tcfC(&local_80,0);
  uStack_a8 = uStack_58;
  local_b0 = local_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  local_90 = local_40;
  uStack_c8 = uStack_78;
  local_d0 = local_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  if ((param_1 & 1) != 0) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyys5UInt8VF(1);
  }
  uVar1 = (uint)(param_3 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_2;
      lVar4 = param_2 >> 0x20;
      goto LAB_1005c75e8;
    }
    if ((param_3 & 0xff000000000000) == 0) goto LAB_1005c7600;
  }
  else {
    if (uVar2 != 2) goto LAB_1005c7600;
    lVar3 = *(long *)(param_2 + 0x10);
    lVar4 = *(long *)(param_2 + 0x18);
LAB_1005c75e8:
    if (lVar3 == lVar4) goto LAB_1005c7600;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_d0,param_2,param_3);
LAB_1005c7600:
  uStack_58 = uStack_a8;
  local_60 = local_b0;
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  local_40 = local_90;
  uStack_78 = uStack_c8;
  local_80 = local_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  __ss6HasherV9_finalizeSiyF();
  return;
}

