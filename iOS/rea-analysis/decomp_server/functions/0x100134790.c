// rea decompile_all
// name: FUN_100134790
// address: 0x100134790
// body: available
// range: 0x100134790-0x10013494f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100134790(undefined8 *param_1,double param_2)

{
  code *pcVar1;
  undefined *puVar2;
  
  __ss11_StringGutsV4growyySiF(0x52);
  __sSS6appendyySSF(0x100000000000002d,0x800000010088fd40);
  puVar2 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt64VN_100995e10,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x6972577473616c2d,0xef3a656d69546574);
  if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100134948);
    (*pcVar1)();
  }
  if (-1.0 < param_2) {
    if (param_2 < 1.8446744073709552e+19) {
      puVar2 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___ss6UInt64VN_100995e10,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40
                );
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar2);
      __sSS6appendyySSF(&DAT_d000000000000010,0x800000010088fd70);
      puVar2 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar2);
      param_1[3] = PTR___sSSN_1009957f8;
      *param_1 = 0;
      param_1[1] = 0xe000000000000000;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100134950);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10013494c);
  (*pcVar1)();
}

