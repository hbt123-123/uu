// rea decompile_all
// name: FUN_1006653c0
// address: 0x1006653c0
// body: available
// range: 0x1006653c0-0x100665457 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1006653c0(undefined *param_1,ulong param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  if ((param_2 >> 0x3c & 1) == 0) {
    puVar4 = (undefined *)((ulong)param_1 & 0xffffffffffff);
    puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
    if ((param_2 & 0x2000000000000000) != 0) {
      puVar4 = (undefined *)(param_2 >> 0x38 & 0xf);
    }
  }
  else {
    puVar4 = param_1;
    __sSS8UTF8ViewV13_foreignCountSiyF(param_1,param_2);
    puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  PTR___swiftEmptyArrayStorage_100995ea0 = puVar2;
  if (puVar4 != (undefined *)0x0) {
    puVar2 = puVar4;
    FUN_100630840(puVar4,0);
    puVar3 = puVar2 + 0x20;
    puVar5 = puVar4;
    __ss11_StringGutsV8copyUTF84intoSiSgSrys5UInt8VG_tF(puVar3,puVar4,param_1,param_2);
    if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100665458);
      (*pcVar1)();
    }
    if (puVar3 != puVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100665424);
      (*pcVar1)();
    }
  }
  return puVar2;
}

