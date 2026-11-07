// rea decompile_all
// name: FUN_10032f79c
// address: 0x10032f79c
// body: available
// range: 0x10032f79c-0x10032f82f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10032f79c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  ulong uVar6;
  
  lVar2 = 0;
  __s10Foundation10URLRequestVMa();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar6 = uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff);
  lVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  (**(code **)(lVar2 + 0x90))
            (uVar5,unaff_x20 + uVar6,
             unaff_x20 + (lVar3 + uVar4 + uVar6 & (uVar4 ^ 0xffffffffffffffff)),uVar1,lVar2);
  return;
}

