// rea decompile_all
// name: FUN_100007268
// address: 0x100007268
// body: available
// range: 0x100007268-0x100007303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100007268(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  if (param_4 != 0) {
    uVar1 = param_3 & 0xffffffffffff;
    if ((param_4 & 0x2000000000000000) != 0) {
      uVar1 = param_4 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      _swift_bridgeObjectRetain(param_4);
      __sSS6appendyySSF(0x2820,0xe200000000000000);
      __sSS6appendyySSF(param_1,param_2);
      __sSS6appendyySSF(0x29,0xe100000000000000);
      param_2 = param_4;
      param_1 = param_3;
      goto LAB_1000072e8;
    }
  }
  _swift_bridgeObjectRetain(param_2);
LAB_1000072e8:
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}

