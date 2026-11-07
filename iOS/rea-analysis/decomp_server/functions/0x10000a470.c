// rea decompile_all
// name: FUN_10000a470
// address: 0x10000a470
// body: available
// range: 0x10000a470-0x10000a5ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10000a470(byte param_1,byte param_2)

{
  uint uVar1;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar2;
  
  if (param_1 < 2) {
    lVar2 = -0x2fffffffffffffe7;
    lVar4 = -0x7ffffffeff789cb0;
    if (param_1 != 0) {
      lVar2 = 0x725f656369766564;
      lVar4 = -0x12ffff8b90909d9b;
    }
  }
  else if (param_1 == 2) {
    lVar2 = -0x2fffffffffffffee;
    lVar4 = -0x7ffffffeff789c80;
  }
  else {
    lVar2 = 0x726f70736e617274;
    lVar4 = -0x12ffff9c8f8da08c;
  }
  if (param_2 < 2) {
    lVar5 = -0x7ffffffeff789cb0;
    lVar3 = -0x2fffffffffffffe7;
    if (param_2 != 0) {
      lVar5 = -0x12ffff8b90909d9b;
      lVar3 = 0x725f656369766564;
    }
    if (lVar2 == lVar3) goto LAB_10000a5a8;
  }
  else if (param_2 == 2) {
    lVar3 = -0x2fffffffffffffee;
    lVar5 = -0x7ffffffeff789c80;
    if (lVar2 == -0x2fffffffffffffee) {
LAB_10000a5a8:
      if (lVar4 == lVar5) {
        uVar1 = 1;
        goto LAB_10000a5cc;
      }
    }
  }
  else {
    lVar3 = 0x726f70736e617274;
    lVar5 = -0x12ffff9c8f8da08c;
    if (lVar2 == 0x726f70736e617274) goto LAB_10000a5a8;
  }
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (lVar2,lVar4,lVar3,lVar5,0);
  uVar1 = (uint)lVar2;
LAB_10000a5cc:
  _swift_bridgeObjectRelease(lVar4);
  _swift_bridgeObjectRelease(lVar5);
  return uVar1 & 1;
}

