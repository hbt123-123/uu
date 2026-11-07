// rea decompile_all
// name: FUN_100300a90
// address: 0x100300a90
// body: available
// range: 0x100300a90-0x100300b33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100300a90(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar1 = *(uint *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x50);
  uVar2 = *(uint *)(*(long *)(*(long *)(param_3 + 0x18) + -8) + 0x50);
  lVar6 = 0;
  __s10Foundation10URLRequestVMa();
  uVar3 = *(uint *)(*(long *)(lVar6 + -8) + 0x50);
  lVar6 = 0;
  __s10Foundation3URLVMa();
  uVar4 = *(uint *)(*(long *)(lVar6 + -8) + 0x50);
  lVar6 = 0;
  __sSS10FoundationE8EncodingVMa();
  uVar5 = *(uint *)(*(long *)(lVar6 + -8) + 0x50);
  lVar6 = *param_2;
  *param_1 = lVar6;
  uVar7 = (ulong)((uVar2 | uVar1 | uVar3 | uVar4 | uVar5) & 0xf8 | 7);
  _swift_retain();
  return lVar6 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff));
}

