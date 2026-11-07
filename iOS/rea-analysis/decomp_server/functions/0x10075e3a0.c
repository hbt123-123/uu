// rea decompile_all
// name: SentryBinaryImageCache::indexOfImage:
// address: 0x10075e3a0
// body: available
// range: 0x10075e3a0-0x10075e47f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

long_long SentryBinaryImageCache::indexOfImage_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long_long lVar5;
  long lVar6;
  long lVar7;
  
  if (*(ID *)(param_1 + 8) != 0) {
    IVar2 = objc_stub::count(*(ID *)(param_1 + 8));
    lVar6 = IVar2 - 1;
    if (-1 < lVar6) {
      lVar7 = 0;
      do {
        lVar1 = lVar7 + lVar6;
        if (lVar1 < 0) {
          lVar1 = lVar1 + 1;
        }
        lVar5 = lVar1 >> 1;
        IVar2 = objc_stub::objectAtIndexedSubscript_(*(ID *)(param_1 + 8),lVar5);
        IVar3 = objc_stub::address(IVar2);
        if (IVar3 <= param_3) {
          IVar3 = objc_stub::address(IVar2);
          IVar4 = objc_stub::FUN_1007f5a00(IVar2);
          if (param_3 < IVar4 + IVar3) {
            return lVar5;
          }
        }
        IVar2 = objc_stub::address(IVar2);
        lVar1 = lVar5 - 1;
        if (IVar2 <= param_3) {
          lVar7 = lVar5 + 1;
          lVar1 = lVar6;
        }
        lVar6 = lVar1;
      } while (lVar7 <= lVar6);
    }
  }
  return 0xffffffffffffffff;
}

