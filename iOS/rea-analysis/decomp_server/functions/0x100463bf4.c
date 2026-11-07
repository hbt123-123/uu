// rea decompile_all
// name: FUN_100463bf4
// address: 0x100463bf4
// body: available
// range: 0x100463bf4-0x100463ed3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100463bf4(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  param_1[1] = param_2[1];
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[3];
  uVar7 = param_2[4];
  FUN_100008184(uVar2,uVar7);
  uVar6 = param_1[3];
  uVar8 = param_1[4];
  param_1[3] = uVar2;
  param_1[4] = uVar7;
  FUN_100006cdc(uVar6,uVar8);
  pcVar3 = (char *)(param_1 + 5);
  pbVar5 = (byte *)(param_2 + 5);
  bVar1 = *pbVar5;
  if (*pcVar3 == '\x02') {
    if (bVar1 == 2) {
      uVar6 = param_2[6];
      uVar2 = *(undefined8 *)pbVar5;
      uVar8 = param_2[8];
      uVar7 = param_2[7];
      param_1[9] = param_2[9];
      param_1[6] = uVar6;
      *(undefined8 *)pcVar3 = uVar2;
      param_1[8] = uVar8;
      param_1[7] = uVar7;
    }
    else {
      *(byte *)(param_1 + 5) = bVar1;
      uVar2 = param_2[6];
      *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
      param_1[6] = uVar2;
      *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
      uVar2 = param_2[8];
      uVar6 = param_2[9];
      FUN_100008184(uVar2,uVar6);
      param_1[8] = uVar2;
      param_1[9] = uVar6;
    }
  }
  else if (bVar1 == 2) {
    FUN_10045eb24(pcVar3);
    uVar2 = param_2[9];
    uVar8 = *(undefined8 *)pbVar5;
    uVar7 = param_2[8];
    uVar6 = param_2[7];
    param_1[6] = param_2[6];
    *(undefined8 *)pcVar3 = uVar8;
    param_1[8] = uVar7;
    param_1[7] = uVar6;
    param_1[9] = uVar2;
  }
  else {
    *(byte *)(param_1 + 5) = bVar1 & 1;
    uVar2 = param_2[6];
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
    param_1[6] = uVar2;
    *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
    uVar2 = param_2[8];
    uVar7 = param_2[9];
    FUN_100008184(uVar2,uVar7);
    uVar6 = param_1[8];
    uVar8 = param_1[9];
    param_1[8] = uVar2;
    param_1[9] = uVar7;
    FUN_100006cdc(uVar6,uVar8);
  }
  lVar4 = param_1[0xc];
  if (lVar4 == 0) {
    if (param_2[0xc] == 0) {
      uVar6 = param_2[0xb];
      uVar2 = param_2[10];
      uVar7 = param_2[0xc];
      uVar9 = param_2[0xf];
      uVar8 = param_2[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar7;
      param_1[0xf] = uVar9;
      param_1[0xe] = uVar8;
      param_1[0xb] = uVar6;
      param_1[10] = uVar2;
      uVar6 = param_2[0x11];
      uVar2 = param_2[0x10];
      uVar8 = param_2[0x13];
      uVar7 = param_2[0x12];
      uVar9 = param_2[0x14];
      uVar11 = param_2[0x17];
      uVar10 = param_2[0x16];
      param_1[0x15] = param_2[0x15];
      param_1[0x14] = uVar9;
      param_1[0x17] = uVar11;
      param_1[0x16] = uVar10;
      param_1[0x11] = uVar6;
      param_1[0x10] = uVar2;
      param_1[0x13] = uVar8;
      param_1[0x12] = uVar7;
    }
    else {
      *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
      *(undefined1 *)((long)param_1 + 0x51) = *(undefined1 *)((long)param_2 + 0x51);
      *(undefined1 *)((long)param_1 + 0x52) = *(undefined1 *)((long)param_2 + 0x52);
      *(undefined1 *)((long)param_1 + 0x53) = *(undefined1 *)((long)param_2 + 0x53);
      param_1[0xb] = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
      uVar2 = param_2[0xe];
      *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
      param_1[0xe] = uVar2;
      uVar2 = param_2[0x10];
      *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
      param_1[0x10] = uVar2;
      uVar2 = param_2[0x12];
      *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
      param_1[0x12] = uVar2;
      uVar2 = param_2[0x14];
      *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
      param_1[0x14] = uVar2;
      uVar2 = param_2[0x16];
      uVar6 = param_2[0x17];
      _swift_bridgeObjectRetain();
      FUN_100008184(uVar2,uVar6);
      param_1[0x16] = uVar2;
      param_1[0x17] = uVar6;
    }
  }
  else if (param_2[0xc] == 0) {
    FUN_10045ec08(param_1 + 10);
    uVar8 = param_2[0xd];
    uVar7 = param_2[0xc];
    uVar6 = param_2[0xf];
    uVar2 = param_2[0xe];
    uVar9 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar9;
    param_1[0xd] = uVar8;
    param_1[0xc] = uVar7;
    param_1[0xf] = uVar6;
    param_1[0xe] = uVar2;
    uVar2 = param_2[0x14];
    uVar7 = param_2[0x17];
    uVar6 = param_2[0x16];
    uVar11 = param_2[0x11];
    uVar10 = param_2[0x10];
    uVar9 = param_2[0x13];
    uVar8 = param_2[0x12];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar2;
    param_1[0x17] = uVar7;
    param_1[0x16] = uVar6;
    param_1[0x11] = uVar11;
    param_1[0x10] = uVar10;
    param_1[0x13] = uVar9;
    param_1[0x12] = uVar8;
  }
  else {
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
    *(undefined1 *)((long)param_1 + 0x51) = *(undefined1 *)((long)param_2 + 0x51);
    *(undefined1 *)((long)param_1 + 0x52) = *(undefined1 *)((long)param_2 + 0x52);
    *(undefined1 *)((long)param_1 + 0x53) = *(undefined1 *)((long)param_2 + 0x53);
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar4);
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    uVar2 = param_2[0xe];
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
    param_1[0xe] = uVar2;
    uVar2 = param_2[0x10];
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
    param_1[0x10] = uVar2;
    uVar2 = param_2[0x12];
    *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
    param_1[0x12] = uVar2;
    uVar2 = param_2[0x14];
    *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
    param_1[0x14] = uVar2;
    uVar2 = param_2[0x16];
    uVar7 = param_2[0x17];
    FUN_100008184(uVar2,uVar7);
    uVar6 = param_1[0x16];
    uVar8 = param_1[0x17];
    param_1[0x16] = uVar2;
    param_1[0x17] = uVar7;
    FUN_100006cdc(uVar6,uVar8);
  }
  return param_1;
}

