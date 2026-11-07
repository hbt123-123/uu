// rea decompile_all
// name: FUN_1002d3150
// address: 0x1002d3150
// body: available
// range: 0x1002d3150-0x1002d31d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d3150(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  uVar1 = 0;
  __s10Foundation4UUIDVMa(0);
  puVar2 = &DAT_100a82768;
  FUN_100005c90(&DAT_100a82768,PTR___s10Foundation4UUIDVMa_100996230,
                PTR___s10Foundation4UUIDVSHAAMc_100996248);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_78,uVar1,puVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}

