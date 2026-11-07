// rea decompile_all
// name: FUN_10011d520
// address: 0x10011d520
// body: available
// range: 0x10011d520-0x10011d75f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10011d520(undefined8 *param_1,char param_2,ulong param_3,byte param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  __ss11_StringGutsV4growyySiF(0x25);
  _swift_bridgeObjectRelease(0xe000000000000000);
  if (param_2 == '\0') {
    uVar3 = 0x7466656c;
    uVar4 = 0xe400000000000000;
  }
  else {
    uVar3 = 0x656c6464696d;
    if (param_2 != '\x01') {
      uVar3 = 0x7468676972;
    }
    uVar4 = 0xe600000000000000;
    if (param_2 != '\x01') {
      uVar4 = 0xe500000000000000;
    }
  }
  __sSS6appendyySSF(uVar3,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  bVar1 = (param_3 & 1) == 0;
  uVar3 = 0x7075;
  if (bVar1) {
    uVar3 = 0x6e776f64;
  }
  uVar4 = 0xe200000000000000;
  if (bVar1) {
    uVar4 = 0xe400000000000000;
  }
  __sSS6appendyySSF(uVar3,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  __sSS6appendyySSF(0x656372756f73202c,0xe90000000000003d);
  if (param_4 < 3) {
    if (param_4 == 0) {
      uVar3 = 0xeb00000000737365;
      puVar2 = (undefined1 *)0x72705f6573756f6d;
    }
    else if (param_4 == 1) {
      uVar3 = 0xed0000657361656c;
      puVar2 = (undefined1 *)0x65725f6573756f6d;
    }
    else {
      uVar3 = 0xeb000000006b6369;
      puVar2 = (undefined1 *)0x6c635f6573756f6d;
    }
  }
  else if (param_4 == 3) {
    puVar2 = (undefined1 *)0xd000000000000016;
    uVar3 = 0x80000001008761c0;
  }
  else if (param_4 == 4) {
    uVar3 = 0x80000001008761e0;
    puVar2 = &DAT_d000000000000018;
  }
  else {
    uVar3 = 0xeb000000006c6c61;
    puVar2 = (undefined1 *)0x5f657361656c6572;
  }
  __sSS6appendyySSF(puVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0x1000000000000015;
  param_1[1] = 0x800000010088d570;
  return;
}

