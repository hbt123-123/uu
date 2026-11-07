// rea decompile_all
// name: FUN_100144494
// address: 0x100144494
// body: available
// range: 0x100144494-0x100144633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100144494(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  __ss11_StringGutsV4growyySiF(0x74);
  __sSS6appendyySSF(0x1000000000000036,0x80000001008908b0);
  __sSS6appendyySSF(param_2,param_3);
  __sSS6appendyySSF(0xe8b6bbe48796e62d,0xae003a84bee5afb7);
  __sSS6appendyySSF(param_4,param_5);
  __sSS6appendyySSF(0x1000000000000011,0x80000001008908f0);
  uVar1 = 0;
  __s10Foundation3URLVMa(0);
  puVar2 = &DAT_100a79f48;
  FUN_100144654(&DAT_100a79f48,PTR___s10Foundation3URLVs23CustomStringConvertibleAAMc_1009961b8);
  puVar3 = puVar2;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(uVar1,puVar2);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x1000000000000017,0x8000000100890910);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(uVar1,puVar2);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

