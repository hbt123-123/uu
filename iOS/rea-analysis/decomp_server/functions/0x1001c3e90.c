// rea decompile_all
// name: FUN_1001c3e90
// address: 0x1001c3e90
// body: available
// range: 0x1001c3e90-0x1001c4077 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001c3e90(undefined8 *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined8 uVar5;
  undefined1 auStack_50 [16];
  undefined1 local_40;
  
  puVar4 = param_1;
  if (DAT_100a73b60 != -1) {
    puVar4 = &DAT_100a73b60;
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  FUN_100122344();
  if (((ulong)puVar4 & 0xff) == 0) {
    uVar5 = 0xe700000000000000;
    uVar1 = 0x6e776f6e6b6e75;
  }
  else {
    if (((uint)puVar4 & 0xff) == 1) {
      _swift_bridgeObjectRelease(0xe400000000000000);
      goto LAB_1001c3f28;
    }
    uVar5 = 0xe500000000000000;
    uVar1 = 0x7473657567;
  }
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (uVar1,uVar5,0x72657375,0xe400000000000000,0);
  _swift_bridgeObjectRelease(uVar5);
  if ((uVar1 & 1) == 0) {
    uVar5 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar5);
    local_40 = SUB81(puVar4,0);
    FUN_1003fb48c(FUN_1001c45d8,auStack_50,0xd0000000000000a0,0x800000010089cf20,0xd00000000000001a,
                  0x800000010089d040,0xba,0);
    return;
  }
LAB_1001c3f28:
  puVar2 = &DAT_100a76918;
  FUN_100004bb4(&DAT_100a76918,&DAT_10080d640);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __sScPMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(&stack0xffffffffffffffd0 + -extraout_x8,1,1,lVar3);
  puVar2 = &DAT_1009a2bc0;
  _swift_allocObject(&DAT_1009a2bc0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 **)(puVar2 + 0x20) = param_1;
  _swift_retain(param_1);
  FUN_1000f96dc(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&DAT_100811a60,puVar2);
  _swift_release();
  return;
}

