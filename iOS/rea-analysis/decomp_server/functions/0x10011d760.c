// rea decompile_all
// name: FUN_10011d760
// address: 0x10011d760
// body: available
// range: 0x10011d760-0x10011d957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10011d760(undefined8 *param_1,undefined8 param_2,ulong param_3,byte param_4)

{
  undefined1 *puVar1;
  bool bVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = param_3;
  __ss11_StringGutsV4growyySiF(0x1f);
  _swift_bridgeObjectRelease(0xe000000000000000);
  FUN_10011da70(param_2);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  bVar2 = (param_3 & 1) == 0;
  uVar5 = 0x7075;
  if (bVar2) {
    uVar5 = 0x6e776f64;
  }
  uVar6 = 0xe200000000000000;
  if (bVar2) {
    uVar6 = 0xe400000000000000;
  }
  __sSS6appendyySSF(uVar5,uVar6);
  _swift_bridgeObjectRelease(uVar6);
  __sSS6appendyySSF(0x656372756f73202c,0xe90000000000003d);
  if (param_4 < 3) {
    uVar5 = 0xeb00000000657361;
    puVar1 = (undefined1 *)0x656c65725f64626b;
    if (param_4 != 1) {
      uVar5 = 0xe90000000000006b;
      puVar1 = (undefined1 *)0x63696c635f64626b;
    }
    puVar3 = (undefined1 *)0x736572705f64626b;
    uVar6 = 0xe900000000000073;
    if (param_4 != 0) {
      puVar3 = puVar1;
      uVar6 = uVar5;
    }
  }
  else {
    uVar5 = 0x80000001008761e0;
    puVar1 = &DAT_d000000000000018;
    if (param_4 != 4) {
      uVar5 = 0xea00000000007475;
      puVar1 = (undefined1 *)0x706e695f74786574;
    }
    puVar3 = (undefined1 *)0xd000000000000016;
    uVar6 = 0x80000001008761c0;
    if (param_4 != 3) {
      puVar3 = puVar1;
      uVar6 = uVar5;
    }
  }
  __sSS6appendyySSF(puVar3,uVar6);
  _swift_bridgeObjectRelease(uVar6);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0x8ee6a585e593bee8;
  param_1[1] = 0xaf202d20b688e5a7;
  return;
}

