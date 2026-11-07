// rea decompile_all
// name: FUN_10024f61c
// address: 0x10024f61c
// body: available
// range: 0x10024f61c-0x10024f6c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10024f61c(long param_1,undefined1 *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 == 0) {
    return 0xffffff9a;
  }
  uVar3 = *(ulong *)(param_1 + 0x88);
  if (param_3 <= *(ulong *)(param_1 + 0x88)) {
    uVar3 = param_3;
  }
  lVar1 = param_1;
  FUN_10024e8ac(param_1,*(undefined8 *)(param_1 + 0x70),*(long *)(param_1 + 0xb0) + 0x16,0);
  if (lVar1 == 0) {
    if (uVar3 == 0) {
      if (param_2 == (undefined1 *)0x0) {
        return 0;
      }
    }
    else {
      *param_2 = 0;
      uVar2 = *(ulong *)(param_1 + 0x40);
      (**(code **)(param_1 + 0x10))(uVar2,*(undefined8 *)(param_1 + 0x70),param_2,uVar3);
      if (uVar2 != uVar3) goto LAB_10024f660;
    }
    if (*(ulong *)(param_1 + 0x88) < param_3) {
      param_2[*(ulong *)(param_1 + 0x88)] = 0;
    }
  }
  else {
LAB_10024f660:
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

