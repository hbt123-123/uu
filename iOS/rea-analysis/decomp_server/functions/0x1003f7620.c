// rea decompile_all
// name: FUN_1003f7620
// address: 0x1003f7620
// body: available
// range: 0x1003f7620-0x1003f772f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1003f7620(char *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  
  cVar5 = *param_1;
  cVar6 = *param_2;
  lVar2 = -0x7ffffffeff750430;
  puVar7 = &DAT_d000000000000010;
  if (cVar5 != '\x01') {
    lVar2 = -0x12ffff9190968c8e;
    puVar7 = (undefined1 *)0x65765f6c616e6966;
  }
  puVar8 = (undefined1 *)0x65727574616566;
  if (cVar5 != '\0') {
    puVar8 = puVar7;
  }
  lVar1 = -0x1900000000000000;
  if (cVar5 != '\0') {
    lVar1 = lVar2;
  }
  lVar2 = -0x7ffffffeff750430;
  puVar7 = &DAT_d000000000000010;
  if (cVar6 != '\x01') {
    lVar2 = -0x12ffff9190968c8e;
    puVar7 = (undefined1 *)0x65765f6c616e6966;
  }
  puVar3 = (undefined1 *)0x65727574616566;
  if (cVar6 != '\0') {
    puVar3 = puVar7;
  }
  lVar4 = -0x1900000000000000;
  if (cVar6 != '\0') {
    lVar4 = lVar2;
  }
  if ((puVar8 == puVar3) && (lVar1 == lVar4)) {
    uVar9 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (puVar8,lVar1,puVar3,lVar4,0);
    uVar9 = (uint)puVar8;
  }
  _swift_bridgeObjectRelease(lVar1);
  _swift_bridgeObjectRelease(lVar4);
  return uVar9 & 1;
}

