// rea decompile_all
// name: FUN_1006bbee0
// address: 0x1006bbee0
// body: available
// range: 0x1006bbee0-0x1006bc05b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1006bbee0(byte *param_1,ulong param_2,int *param_3,ulong param_4,uint param_5)

{
  char cVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  byte bVar8;
  ulong uVar9;
  
  cVar1 = 0xff < param_5;
  if (param_5 != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if ((param_5 & 0xffff0000) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if (param_3[10] != 0) {
    cVar1 = '\0';
  }
  uVar4 = param_3[1];
  bVar6 = param_3[8] != 0;
  bVar5 = (ulong)(1L << ((ulong)uVar4 & 0x3f)) < param_4;
  cVar2 = 0x100 < param_4 >> 8;
  if (0xff < param_4) {
    cVar2 = cVar2 + '\x01';
  }
  if (0xfffffffe < param_4) {
    cVar2 = cVar2 + '\x01';
  }
  cVar3 = '\0';
  if (param_3[8] != 0) {
    cVar3 = cVar2;
  }
  bVar8 = 0x20;
  if (!bVar6 || bVar5) {
    bVar8 = 0;
  }
  if (param_2 < 0x12) {
    return 0xffffffffffffffba;
  }
  bVar8 = bVar8 | cVar1 + (0 < param_3[9]) * '\x04' | cVar3 << 6;
  if (*param_3 == 0) {
    param_1[0] = 0x28;
    param_1[1] = 0xb5;
    param_1[2] = 0x2f;
    param_1[3] = 0xfd;
    uVar9 = 4;
    uVar7 = 5;
    param_1[4] = bVar8;
  }
  else {
    uVar9 = 0;
    uVar7 = 1;
    *param_1 = bVar8;
  }
  if (!bVar6 || bVar5) {
    param_1[uVar7] = (char)uVar4 * '\b' + 0xb0;
    uVar7 = uVar9 | 2;
  }
  if (cVar1 == '\x03') {
    *(uint *)(param_1 + uVar7) = param_5;
    uVar7 = uVar7 + 4;
  }
  else if (cVar1 == '\x02') {
    *(short *)(param_1 + uVar7) = (short)param_5;
    uVar7 = uVar7 + 2;
  }
  else if (cVar1 == '\x01') {
    param_1[uVar7] = (byte)param_5;
    uVar7 = uVar7 + 1;
  }
  if (cVar3 != '\x01') {
    if (cVar3 == '\x02') {
      *(int *)(param_1 + uVar7) = (int)param_4;
      return uVar7 + 4;
    }
    if (cVar3 == '\x03') {
      *(ulong *)(param_1 + uVar7) = param_4;
      uVar7 = uVar7 + 8;
    }
    else if (bVar6 && !bVar5) {
      param_1[uVar7] = (byte)param_4;
      return uVar7 + 1;
    }
    return uVar7;
  }
  *(short *)(param_1 + uVar7) = (short)param_4 + -0x100;
  return uVar7 + 2;
}

