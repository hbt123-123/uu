// rea decompile_all
// name: FUN_100573d68
// address: 0x100573d68
// body: available
// range: 0x100573d68-0x100573e6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100573d68(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  long *unaff_x20;
  long lVar3;
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
  
  uStack_68 = param_1[5];
  local_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  local_50 = param_1[8];
  uStack_88 = param_1[1];
  local_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  lVar3 = unaff_x20[4];
  if (lVar3 != 0) {
    lVar4 = unaff_x20[3];
    __ss6HasherV8_combineyySuF(2);
    __sSS4hash4intoys6HasherVz_tF(&local_90,lVar4,lVar3);
  }
  lVar3 = unaff_x20[2];
  if ((long)(char)lVar3 != 0xc) {
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(&DAT_10083cc80 + (long)(char)lVar3 * 8));
  }
  lVar3 = *unaff_x20;
  uVar1 = (uint)((ulong)unaff_x20[1] >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar4 = (long)(int)lVar3;
      lVar3 = lVar3 >> 0x20;
      goto LAB_100573e2c;
    }
    if ((unaff_x20[1] & 0xff000000000000U) == 0) goto LAB_100573e3c;
  }
  else {
    if (uVar2 != 2) goto LAB_100573e3c;
    lVar4 = *(long *)(lVar3 + 0x10);
    lVar3 = *(long *)(lVar3 + 0x18);
LAB_100573e2c:
    if (lVar4 == lVar3) goto LAB_100573e3c;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_90);
LAB_100573e3c:
  param_1[5] = uStack_68;
  param_1[4] = local_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = local_50;
  param_1[1] = uStack_88;
  *param_1 = local_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}

