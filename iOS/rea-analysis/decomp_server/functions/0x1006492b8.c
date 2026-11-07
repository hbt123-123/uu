// rea decompile_all
// name: FUN_1006492b8
// address: 0x1006492b8
// body: available
// range: 0x1006492b8-0x10064939b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1006492b8(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x18);
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 8);
  lVar2 = lVar5;
  __sSl5countSivgTj(lVar5,lVar6);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(lVar6 + 8),lVar5,PTR___sSTTL_100995860,PTR___s7ElementSTTl_1009956f8)
  ;
  __ss17FixedWidthIntegerP03bitB0SivgZTj();
  lVar5 = lVar2 * lVar3;
  if (SUB168(SEXT816(lVar2) * SEXT816(lVar3),8) != lVar5 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10064938c);
    (*pcVar1)();
  }
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = lVar3;
  __ss17FixedWidthIntegerP03bitB0SivgZTj(lVar3,uVar4);
  if (SCARRY8(lVar5,lVar2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100649390);
    (*pcVar1)();
  }
  lVar6 = lVar5 + lVar2 + -1;
  if (SBORROW8(lVar5 + lVar2,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100649394);
    (*pcVar1)();
  }
  __ss17FixedWidthIntegerP03bitB0SivgZTj(lVar3,uVar4);
  if (lVar3 != 0) {
    if (lVar6 != -0x8000000000000000 || lVar3 != -1) {
      lVar2 = 0;
      if (lVar3 != 0) {
        lVar2 = lVar6 / lVar3;
      }
      return lVar2;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10064939c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100649398);
  (*pcVar1)();
}

