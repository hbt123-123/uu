// rea decompile_all
// name: FUN_100403cfc
// address: 0x100403cfc
// body: available
// range: 0x100403cfc-0x100403eab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100403cfc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined8 uVar1;
  long lVar2;
  
  __ss11_StringGutsV4growyySiF(0x4a);
  __sSS6appendyySSF(0xd000000000000020,0x80000001008b62c0);
  __sSS6appendyySSF(param_2,param_3);
  __sSS6appendyySSF(0x49656c646e756220,0xea00000000003d64);
  __sSS6appendyySSF(param_4,param_5);
  __sSS6appendyySSF(0x6e6f697372657620,0xe90000000000003d);
  __sSS6appendyySSF(param_6,param_7);
  __sSS6appendyySSF(0x3d646c69756220,0xe700000000000000);
  uVar1 = 0x6e776f6e6b6e75;
  if (param_9 != 0) {
    uVar1 = param_8;
  }
  lVar2 = -0x1900000000000000;
  if (param_9 != 0) {
    lVar2 = param_9;
  }
  _swift_bridgeObjectRetain(param_9);
  __sSS6appendyySSF(uVar1,lVar2);
  _swift_bridgeObjectRelease(lVar2);
  __sSS6appendyySSF(0x3d6863726120,0xe600000000000000);
  __sSS6appendyySSF(0x34366d7261,0xe500000000000000);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

