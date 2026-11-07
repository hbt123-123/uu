// rea decompile_all
// name: FUN_10005e52c
// address: 0x10005e52c
// body: available
// range: 0x10005e52c-0x10005e5bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005e52c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = 0;
  __sSqMa(0,uVar2);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar5 = uVar5 + 0x68 & (uVar5 ^ 0xffffffffffffffff);
  puVar1 = (undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar5 + 7 & 0xfffffffffffffff8));
  FUN_10005cc8c(param_1,param_2,param_3,unaff_x20 + 0x20,unaff_x20 + uVar5,*puVar1,puVar1[1],
                *(undefined1 *)(puVar1 + 2),uVar2,uVar3);
  return;
}

