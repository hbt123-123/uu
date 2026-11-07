// rea decompile_all
// name: thunk_FUN_100686e14
// address: 0x100686e10
// body: available
// range: 0x100686e10-0x100686e13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] thunk_FUN_100686e14(void)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar4 = &stack0xffffffffffffffc0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar4);
  lVar3 = 1;
  puVar2 = puVar4;
  FUN_100686430(puVar4);
  (**(code **)(lVar5 + 8))(puVar4,lVar1);
  puVar4 = (undefined1 *)0x6e776f6e6b6e75;
  if (lVar3 != 0) {
    puVar4 = puVar2;
  }
  lVar1 = -0x1900000000000000;
  if (lVar3 != 0) {
    lVar1 = lVar3;
  }
  auVar6._8_8_ = lVar1;
  auVar6._0_8_ = puVar4;
  return auVar6;
}

