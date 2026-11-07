// rea decompile_all
// name: FUN_1005bfd50
// address: 0x1005bfd50
// body: available
// range: 0x1005bfd50-0x1005bfeaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005bfd50(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  uVar9 = param_1[2];
  bVar3 = *(byte *)(param_1 + 3);
  uVar8 = (uint)bVar3;
  if (((((uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (uVar8 == 0xff)) ||
     (uVar4 = (uint)(uVar9 >> 0x20), (uVar4 >> 0x1c & 3 | (uVar8 & 1) << 2) != 4)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1005bfeb0);
    (*pcVar5)();
  }
  __ss6HasherV8_combineyySuF(5);
  uStack_78 = param_2[5];
  local_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  local_60 = param_2[8];
  uStack_98 = param_2[1];
  local_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  if (*(long *)(lVar1 + 0x10) == 0) {
    FUN_10051feb8(lVar1,lVar2,uVar9,uVar8 & 1);
  }
  else {
    __ss6HasherV8_combineyySuF(1);
    FUN_10051feb8(lVar1,lVar2,uVar9,uVar8 & 1);
    FUN_1005c3e1c(&local_a0,lVar1);
  }
  if (uVar4 >> 0x1e < 2) {
    if (uVar4 >> 0x1e != 0) {
      lVar6 = (long)(int)lVar2;
      lVar7 = lVar2 >> 0x20;
      goto LAB_1005bfe48;
    }
    if ((uVar9 & 0xff000000000000) == 0) goto LAB_1005bfe60;
  }
  else {
    if (uVar4 >> 0x1e != 2) goto LAB_1005bfe60;
    lVar6 = *(long *)(lVar2 + 0x10);
    lVar7 = *(long *)(lVar2 + 0x18);
LAB_1005bfe48:
    if (lVar6 == lVar7) goto LAB_1005bfe60;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_a0,lVar2,uVar9);
LAB_1005bfe60:
  FUN_10051ff3c(lVar1,lVar2,uVar9,bVar3);
  param_2[5] = uStack_78;
  param_2[4] = local_80;
  param_2[7] = uStack_68;
  param_2[6] = uStack_70;
  param_2[8] = local_60;
  param_2[1] = uStack_98;
  *param_2 = local_a0;
  param_2[3] = uStack_88;
  param_2[2] = uStack_90;
  return;
}

