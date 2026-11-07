// rea decompile_all
// name: FUN_10010c3c0
// address: 0x10010c3c0
// body: available
// range: 0x10010c3c0-0x10010c66b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10010c3c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  ulong uVar15;
  ulong local_160;
  long lStack_158;
  undefined *local_148;
  
  puVar8 = &local_160;
  puVar9 = &local_160;
  puVar10 = &local_160;
  if ((*(byte *)(unaff_x20 + 0x71) & 1) == 0) {
    if ((*(byte *)(unaff_x20 + 0x70) & 1) == 0) {
      if (*(ulong *)(unaff_x20 + 0x68) == 2) goto LAB_10010c418;
      goto LAB_10010c3e8;
    }
    if (*(ulong *)(unaff_x20 + 0x68) < 2) goto LAB_10010c3e8;
LAB_10010c418:
    uVar12 = 0xeb00000000736973;
    uVar15 = 0x615f73726568746f;
  }
  else {
LAB_10010c3e8:
    uVar12 = 0xe400000000000000;
    uVar15 = 0x666c6573;
  }
  FUN_1003a1aa8();
  uVar1 = *param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar6 = &DAT_100a75980;
  FUN_100004bb4(&DAT_100a75980,&DAT_100809a40);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 8;
  *(undefined8 *)(puVar6 + 0x10) = 4;
  puVar7 = puVar2;
  _swift_bridgeObjectRetain();
  FUN_1003a0e84();
  puVar5 = PTR___sSSN_1009957f8;
  uVar11 = *puVar7;
  uVar13 = puVar7[1];
  local_148 = PTR___sSSN_1009957f8;
  local_160 = uVar15;
  lStack_158 = uVar12;
  FUN_10003e8bc(&local_160,puVar6 + 0x30);
  *(undefined8 *)(puVar6 + 0x20) = uVar11;
  *(undefined8 *)(puVar6 + 0x28) = uVar13;
  _swift_bridgeObjectRetain(uVar13);
  FUN_10003f094();
  FUN_1003a1304();
  uVar12 = *puVar8;
  uVar11 = puVar8[1];
  local_160 = 4;
  if (*(char *)(unaff_x20 + 0x49) == '\0') {
    local_160 = *(ulong *)(unaff_x20 + 0x40);
  }
  local_148 = PTR___sSiN_100995968;
  FUN_10003e8bc(&local_160,puVar6 + 0x60);
  *(undefined8 *)(puVar6 + 0x50) = uVar12;
  *(undefined8 *)(puVar6 + 0x58) = uVar11;
  _swift_bridgeObjectRetain(uVar11);
  FUN_10003f094();
  FUN_1003a12dc();
  uVar12 = *puVar9;
  uVar11 = puVar9[1];
  lVar3 = *(long *)(unaff_x20 + 0x38);
  local_148 = puVar5;
  local_160 = 0;
  if (lVar3 != 0) {
    local_160 = *(ulong *)(unaff_x20 + 0x30);
  }
  lStack_158 = -0x2000000000000000;
  if (lVar3 != 0) {
    lStack_158 = lVar3;
  }
  FUN_10003e8bc(&local_160,puVar6 + 0x90);
  *(undefined8 *)(puVar6 + 0x80) = uVar12;
  *(undefined8 *)(puVar6 + 0x88) = uVar11;
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(lVar3);
  FUN_10003f094();
  FUN_1003a1400();
  lVar3 = DAT_100a73b60;
  uVar12 = *puVar10;
  puVar4 = (undefined8 *)puVar10[1];
  puVar7 = puVar4;
  _swift_bridgeObjectRetain();
  if (lVar3 != -1) {
    puVar7 = &DAT_100a73b60;
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  FUN_100122344();
  if (((ulong)puVar7 & 0xff) == 0) {
    uVar13 = 0xe700000000000000;
    uVar11 = 0x6e776f6e6b6e75;
  }
  else {
    if (((uint)puVar7 & 0xff) == 1) {
      uVar14 = 1;
      uVar13 = 0xe400000000000000;
      goto LAB_10010c5cc;
    }
    uVar13 = 0xe500000000000000;
    uVar11 = 0x7473657567;
  }
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (uVar11,uVar13,0x72657375,0xe400000000000000,0);
  uVar14 = (undefined1)uVar11;
LAB_10010c5cc:
  _swift_bridgeObjectRelease(uVar13);
  local_148 = PTR___sSbN_1009958c8;
  local_160 = CONCAT71(local_160._1_7_,uVar14) & 0xffffffffffffff01;
  FUN_10003e8bc(&local_160,puVar6 + 0xc0);
  *(undefined8 *)(puVar6 + 0xb0) = uVar12;
  *(undefined8 **)(puVar6 + 0xb8) = puVar4;
  FUN_10003f094(&local_160);
  FUN_1000f62a0(uVar1,puVar2,puVar6);
  _swift_bridgeObjectRelease(puVar2);
  _swift_setDeallocating(puVar6);
  _swift_arrayDestroy(puVar6 + 0x20,4,&DAT_1009b7a40);
  return;
}

