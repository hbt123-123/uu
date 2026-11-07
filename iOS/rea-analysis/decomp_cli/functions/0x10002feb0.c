// rea decompile_all
// name: FUN_10002feb0
// address: 0x10002feb0
// body: available
// range: 0x10002feb0-0x100030077 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10002feb0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  char cVar10;
  
  uVar2 = *param_1;
  uVar6 = param_1[1];
  uVar3 = param_1[2];
  uVar7 = param_1[3];
  uVar4 = param_1[4];
  lVar8 = param_1[5];
  uVar5 = param_1[6];
  lVar9 = param_1[7];
  cVar10 = *(char *)(param_1 + 8);
  _swift_bridgeObjectRetain(lVar8);
  __ss11_StringGutsV4growyySiF(0x39);
  __sSS6appendyySSF(0x203a644972657375,0xe800000000000000);
  __sSS6appendyySSF(uVar2,uVar6);
  __sSS6appendyySSF(0x6d616e726573750a,0xeb00000000203a65);
  __sSS6appendyySSF(uVar3,uVar7);
  __sSS6appendyySSF(0x6d616e6b63696e0a,0xeb00000000203a65);
  uVar2 = 0x6c6c756e;
  if (lVar8 != 0) {
    uVar2 = uVar4;
  }
  lVar1 = -0x1c00000000000000;
  if (lVar8 != 0) {
    lVar1 = lVar8;
  }
  __sSS6appendyySSF(uVar2,lVar1);
  _swift_bridgeObjectRelease(lVar1);
  __sSS6appendyySSF(0x3a7261746176610a,0xe900000000000020);
  uVar2 = 0x6c6c756e;
  if (lVar9 != 0) {
    uVar2 = uVar5;
  }
  lVar8 = -0x1c00000000000000;
  if (lVar9 != 0) {
    lVar8 = lVar9;
  }
  _swift_bridgeObjectRetain(lVar9);
  __sSS6appendyySSF(uVar2,lVar8);
  _swift_bridgeObjectRelease(lVar8);
  __sSS6appendyySSF(0x203a70695673690a,0xe800000000000000);
  uVar2 = 0x65757274;
  if (cVar10 == '\0') {
    uVar2 = 0x65736c6166;
  }
  uVar3 = 0xe400000000000000;
  if (cVar10 == '\0') {
    uVar3 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  return ZEXT816(0xe000000000000000) << 0x40;
}

