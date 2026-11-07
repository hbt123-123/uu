// rea decompile_all
// name: FUN_1005746f0
// address: 0x1005746f0
// body: available
// range: 0x1005746f0-0x1005747d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005746f0(float param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uStack_68 = param_2[5];
  local_70 = param_2[4];
  uStack_58 = param_2[7];
  uStack_60 = param_2[6];
  local_50 = param_2[8];
  uStack_88 = param_2[1];
  local_90 = *param_2;
  uStack_78 = param_2[3];
  uStack_80 = param_2[2];
  if (param_1 != 0.0) {
    __ss6HasherV8_combineyySuF(1);
    dVar1 = 0.0;
    if (param_1 != 0.0) {
      dVar1 = (double)param_1;
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar1);
  }
  uVar2 = (uint)(param_4 >> 0x20);
  uVar3 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar3 != 0) {
      lVar4 = (long)(int)param_3;
      param_3 = param_3 >> 0x20;
      goto LAB_100574798;
    }
    if ((param_4 & 0xff000000000000) == 0) goto LAB_1005747a8;
  }
  else {
    if (uVar3 != 2) goto LAB_1005747a8;
    lVar4 = *(long *)(param_3 + 0x10);
    param_3 = *(long *)(param_3 + 0x18);
LAB_100574798:
    if (lVar4 == param_3) goto LAB_1005747a8;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_90);
LAB_1005747a8:
  param_2[5] = uStack_68;
  param_2[4] = local_70;
  param_2[7] = uStack_58;
  param_2[6] = uStack_60;
  param_2[8] = local_50;
  param_2[1] = uStack_88;
  *param_2 = local_90;
  param_2[3] = uStack_78;
  param_2[2] = uStack_80;
  return;
}

