// rea decompile_all
// name: FUN_10040d86c
// address: 0x10040d86c
// body: available
// range: 0x10040d86c-0x10040db3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10040d86c(byte param_1,byte param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar3;
  
  puVar4 = (undefined1 *)0x64695f70706164;
  if (param_1 < 4) {
    lVar5 = -0x15ffffffffff9b97;
    puVar3 = (undefined1 *)0x5f7070615f637063;
    if (param_1 != 2) {
      lVar5 = -0x1800000000000000;
      puVar3 = (undefined1 *)0x657079745f707061;
    }
    puVar1 = puVar4;
    if (param_1 != 0) {
      puVar1 = (undefined1 *)0x64695f707061;
    }
    lVar6 = -0x1900000000000000;
    if (param_1 != 0) {
      lVar6 = -0x1a00000000000000;
    }
    if (param_1 < 2) {
      puVar3 = puVar1;
      lVar5 = lVar6;
    }
  }
  else {
    lVar6 = -0x7ffffffeff7506f0;
    puVar1 = &DAT_d000000000000010;
    if (param_1 != 7) {
      lVar6 = -0x15ffffffffff8c8b;
      puVar1 = (undefined1 *)0x746174735f707061;
    }
    lVar5 = -0x14ffffffff978b9f;
    puVar3 = (undefined1 *)0x705f746567726174;
    if (param_1 != 6) {
      lVar5 = lVar6;
      puVar3 = puVar1;
    }
    puVar1 = (undefined1 *)0x656d616e;
    if (param_1 != 4) {
      puVar1 = (undefined1 *)0x6c72755f6e6f6369;
    }
    lVar6 = -0x1c00000000000000;
    if (param_1 != 4) {
      lVar6 = -0x1800000000000000;
    }
    if (param_1 < 6) {
      puVar3 = puVar1;
      lVar5 = lVar6;
    }
  }
  if (param_2 < 4) {
    if (param_2 < 2) {
      if (param_2 == 0) {
        lVar6 = -0x1900000000000000;
        if (puVar3 == (undefined1 *)0x64695f70706164) goto LAB_10040daf8;
      }
      else {
        lVar6 = -0x1a00000000000000;
        puVar4 = (undefined1 *)0x64695f707061;
        if (puVar3 == (undefined1 *)0x64695f707061) goto LAB_10040daf8;
      }
    }
    else if (param_2 == 2) {
      puVar4 = (undefined1 *)0x5f7070615f637063;
      lVar6 = -0x15ffffffffff9b97;
      if (puVar3 == (undefined1 *)0x5f7070615f637063) goto LAB_10040daf8;
    }
    else {
      lVar6 = -0x1800000000000000;
      puVar4 = (undefined1 *)0x657079745f707061;
      if (puVar3 == (undefined1 *)0x657079745f707061) goto LAB_10040daf8;
    }
  }
  else if (param_2 < 6) {
    if (param_2 == 4) {
      lVar6 = -0x1c00000000000000;
      puVar4 = (undefined1 *)0x656d616e;
      if (puVar3 == (undefined1 *)0x656d616e) {
LAB_10040daf8:
        if (lVar5 == lVar6) {
          uVar2 = 1;
          goto LAB_10040db1c;
        }
      }
    }
    else {
      lVar6 = -0x1800000000000000;
      puVar4 = (undefined1 *)0x6c72755f6e6f6369;
      if (puVar3 == (undefined1 *)0x6c72755f6e6f6369) goto LAB_10040daf8;
    }
  }
  else if (param_2 == 6) {
    puVar4 = (undefined1 *)0x705f746567726174;
    lVar6 = -0x14ffffffff978b9f;
    if (puVar3 == (undefined1 *)0x705f746567726174) goto LAB_10040daf8;
  }
  else if (param_2 == 7) {
    puVar4 = &DAT_d000000000000010;
    lVar6 = -0x7ffffffeff7506f0;
    if (puVar3 == &DAT_d000000000000010) goto LAB_10040daf8;
  }
  else {
    puVar4 = (undefined1 *)0x746174735f707061;
    lVar6 = -0x15ffffffffff8c8b;
    if (puVar3 == (undefined1 *)0x746174735f707061) goto LAB_10040daf8;
  }
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (puVar3,lVar5,puVar4,lVar6,0);
  uVar2 = (uint)puVar3;
LAB_10040db1c:
  _swift_bridgeObjectRelease(lVar5);
  _swift_bridgeObjectRelease(lVar6);
  return uVar2 & 1;
}

