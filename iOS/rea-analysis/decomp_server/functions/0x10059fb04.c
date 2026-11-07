// rea decompile_all
// name: FUN_10059fb04
// address: 0x10059fb04
// body: available
// range: 0x10059fb04-0x10059fbbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10059fb04(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  __ss6HasherV5_seedABSi_tcfC(&local_70,0);
  uStack_98 = uStack_48;
  local_a0 = local_50;
  uStack_88 = uStack_38;
  uStack_90 = uStack_40;
  local_80 = local_30;
  uStack_b8 = uStack_68;
  local_c0 = local_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uVar1 = (uint)(param_2 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_1;
      lVar4 = param_1 >> 0x20;
      goto LAB_10059fb74;
    }
    if ((param_2 & 0xff000000000000) == 0) goto LAB_10059fb8c;
  }
  else {
    if (uVar2 != 2) goto LAB_10059fb8c;
    lVar3 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(param_1 + 0x18);
LAB_10059fb74:
    if (lVar3 == lVar4) goto LAB_10059fb8c;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_c0,param_1,param_2);
LAB_10059fb8c:
  uStack_48 = uStack_98;
  local_50 = local_a0;
  uStack_38 = uStack_88;
  uStack_40 = uStack_90;
  local_30 = local_80;
  uStack_68 = uStack_b8;
  local_70 = local_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  __ss6HasherV9_finalizeSiyF();
  return;
}

