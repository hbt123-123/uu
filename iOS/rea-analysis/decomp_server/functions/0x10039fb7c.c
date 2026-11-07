// rea decompile_all
// name: FUN_10039fb7c
// address: 0x10039fb7c
// body: available
// range: 0x10039fb7c-0x10039fc37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_10039fb7c(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar1 = *(long *)(lVar2 + -8);
  uVar3 = (ulong)*(uint *)(lVar1 + 0x50) & 0xff;
  if (((uint)uVar3 < 8 && (*(uint *)(lVar1 + 0x50) & 0x100000) == 0) &&
      0xffffffffffffffe6 < (-uVar3 - 9 | uVar3) - *(long *)(lVar1 + 0x40)) {
    *param_1 = *param_2;
    pcVar4 = *(code **)(lVar1 + 0x10);
    _swift_retain();
    (*pcVar4)((long)param_1 + uVar3 + 8 & (uVar3 ^ 0xffffffffffffffff),
              (long)param_2 + uVar3 + 8 & (uVar3 ^ 0xffffffffffffffff),lVar2);
  }
  else {
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + ((ulong)((uint)uVar3 & 0xf8 ^ 0x1f8) & uVar3 + 0x10));
    _swift_retain();
  }
  return param_1;
}

