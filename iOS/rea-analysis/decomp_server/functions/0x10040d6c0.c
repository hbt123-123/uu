// rea decompile_all
// name: FUN_10040d6c0
// address: 0x10040d6c0
// body: available
// range: 0x10040d6c0-0x10040d86b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10040d6c0(byte param_1,byte param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = (undefined1 *)0x656c62616e65;
  if (param_1 < 2) {
    puVar2 = puVar3;
    if (param_1 != 0) {
      puVar2 = &DAT_d000000000000013;
    }
    lVar4 = -0x1a00000000000000;
    if (param_1 != 0) {
      lVar4 = -0x7ffffffeff750330;
    }
  }
  else if (param_1 == 2) {
    puVar2 = (undefined1 *)0xd000000000000014;
    lVar4 = -0x7ffffffeff750310;
  }
  else if (param_1 == 3) {
    puVar2 = (undefined1 *)0xd000000000000019;
    lVar4 = -0x7ffffffeff7502f0;
  }
  else {
    puVar2 = (undefined1 *)0x6c5f656c706d6173;
    lVar4 = -0x109999969ba09891;
  }
  if (param_2 < 2) {
    if (param_2 != 0) {
      puVar3 = &DAT_d000000000000013;
    }
    lVar5 = -0x1a00000000000000;
    if (param_2 != 0) {
      lVar5 = -0x7ffffffeff750330;
    }
    if (puVar2 == puVar3) goto LAB_10040d824;
  }
  else if (param_2 == 2) {
    lVar5 = -0x7ffffffeff750310;
    puVar3 = (undefined1 *)0xd000000000000014;
    if (puVar2 == (undefined1 *)0xd000000000000014) goto LAB_10040d824;
  }
  else if (param_2 == 3) {
    lVar5 = -0x7ffffffeff7502f0;
    puVar3 = (undefined1 *)0xd000000000000019;
    if (puVar2 == (undefined1 *)0xd000000000000019) {
LAB_10040d824:
      if (lVar4 == lVar5) {
        uVar1 = 1;
        goto LAB_10040d848;
      }
    }
  }
  else {
    puVar3 = (undefined1 *)0x6c5f656c706d6173;
    lVar5 = -0x109999969ba09891;
    if (puVar2 == (undefined1 *)0x6c5f656c706d6173) goto LAB_10040d824;
  }
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (puVar2,lVar4,puVar3,lVar5,0);
  uVar1 = (uint)puVar2;
LAB_10040d848:
  _swift_bridgeObjectRelease(lVar4);
  _swift_bridgeObjectRelease(lVar5);
  return uVar1 & 1;
}

