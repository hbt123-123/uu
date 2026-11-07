// rea decompile_all
// name: FUN_10000aa3c
// address: 0x10000aa3c
// body: available
// range: 0x10000aa3c-0x10000ab4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000aa3c(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  uVar6 = 0x80000001008761e0;
  puVar3 = &DAT_d000000000000018;
  if (param_2 != 4) {
    uVar6 = 0xea00000000007475;
    puVar3 = (undefined1 *)0x706e695f74786574;
  }
  uVar2 = 0x80000001008761c0;
  puVar4 = (undefined1 *)0xd000000000000016;
  if (param_2 != 3) {
    uVar2 = uVar6;
    puVar4 = puVar3;
  }
  uVar6 = 0xeb00000000657361;
  puVar3 = (undefined1 *)0x656c65725f64626b;
  if (param_2 != 1) {
    uVar6 = 0xe90000000000006b;
    puVar3 = (undefined1 *)0x63696c635f64626b;
  }
  uVar1 = 0xe900000000000073;
  puVar5 = (undefined1 *)0x736572705f64626b;
  if (param_2 != 0) {
    uVar1 = uVar6;
    puVar5 = puVar3;
  }
  if (param_2 < 3) {
    uVar2 = uVar1;
    puVar4 = puVar5;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,puVar4,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}

