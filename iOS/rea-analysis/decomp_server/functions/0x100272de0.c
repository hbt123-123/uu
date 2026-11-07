// rea decompile_all
// name: FUN_100272de0
// address: 0x100272de0
// body: available
// range: 0x100272de0-0x100272f27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100272de0(void)

{
  long lVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  undefined *puVar5;
  uint uVar6;
  long unaff_x20;
  
  __ss11_StringGutsV4growyySiF(0x20);
  _swift_bridgeObjectRelease(0xe000000000000000);
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x4c2061746144202c,0xef203a6874676e65);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar2 = (uint)((ulong)*(undefined8 *)(unaff_x20 + 0x20) >> 0x20);
  uVar6 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if ((uVar6 != 0) && (SBORROW4((int)((ulong)lVar1 >> 0x20),(int)lVar1))) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100272f28);
      (*pcVar4)();
    }
  }
  else if ((uVar6 == 2) && (SBORROW8(*(long *)(lVar1 + 0x18),*(long *)(lVar1 + 0x10)))) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100272ecc);
    (*pcVar4)();
  }
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  auVar3._8_8_ = 0xed0000203a65646f;
  auVar3._0_8_ = 0x4320737574617453;
  return auVar3;
}

