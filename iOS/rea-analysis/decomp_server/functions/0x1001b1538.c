// rea decompile_all
// name: FUN_1001b1538
// address: 0x1001b1538
// body: available
// range: 0x1001b1538-0x1001b1657 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b1538(undefined8 *param_1,byte param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  __ss11_StringGutsV4growyySiF(0x40);
  __sSS6appendyySSF(0x100000000000003e,0x800000010089ae20);
  uVar3 = 0xee0064656d757365;
  puVar1 = (undefined1 *)0x52646e6570737573;
  if (param_2 != 2) {
    uVar3 = 0xea0000000000656b;
    puVar1 = (undefined1 *)0x61576d6574737973;
  }
  uVar4 = 0x800000010089ae60;
  puVar2 = &DAT_d000000000000010;
  if (param_2 != 0) {
    uVar4 = 0xe800000000000000;
    puVar2 = (undefined1 *)0x74736f4c6d6f6f72;
  }
  if (param_2 < 2) {
    uVar3 = uVar4;
    puVar1 = puVar2;
  }
  __sSS6appendyySSF(puVar1,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

