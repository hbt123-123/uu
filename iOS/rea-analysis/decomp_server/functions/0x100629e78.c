// rea decompile_all
// name: FUN_100629e78
// address: 0x100629e78
// body: available
// range: 0x100629e78-0x100629f37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100629e78(undefined *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  if ((param_4 & 1) != 0) {
    uVar2 = 0;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar3 = param_1;
    _swift_unknownObjectRetain_n(param_1,2);
    _swift_dynamicCastClass();
    if (puVar3 == (undefined *)0x0) {
      _swift_unknownObjectRelease(param_1);
      puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    lVar4 = *(long *)(puVar3 + 0x10);
    _swift_release();
    if (SBORROW8(param_4 >> 1,param_3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100629f2c);
      (*pcVar1)();
    }
    if (lVar4 == (param_4 >> 1) - param_3) {
      puVar3 = param_1;
      _swift_dynamicCastClass(param_1,uVar2);
      if (puVar3 == (undefined *)0x0) {
        _swift_unknownObjectRelease(param_1);
      }
    }
    else {
      _swift_unknownObjectRelease(param_1);
    }
  }
  return;
}

