// rea decompile_all
// name: FUN_100574a64
// address: 0x100574a64
// body: available
// range: 0x100574a64-0x100574b2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100574a64(undefined8 *param_1,ulong param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uStack_58 = param_1[5];
  local_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  local_40 = param_1[8];
  uStack_78 = param_1[1];
  local_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  if ((param_2 & 1) != 0) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyys5UInt8VF(1);
  }
  uVar1 = (uint)(param_4 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_3;
      lVar4 = param_3 >> 0x20;
      goto LAB_100574aec;
    }
    if ((param_4 & 0xff000000000000) == 0) goto LAB_100574b04;
  }
  else {
    if (uVar2 != 2) goto LAB_100574b04;
    lVar3 = *(long *)(param_3 + 0x10);
    lVar4 = *(long *)(param_3 + 0x18);
LAB_100574aec:
    if (lVar3 == lVar4) goto LAB_100574b04;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_80,param_3,param_4);
LAB_100574b04:
  param_1[5] = uStack_58;
  param_1[4] = local_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = local_40;
  param_1[1] = uStack_78;
  *param_1 = local_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}

