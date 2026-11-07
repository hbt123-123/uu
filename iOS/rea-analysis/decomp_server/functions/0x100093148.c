// rea decompile_all
// name: FUN_100093148
// address: 0x100093148
// body: available
// range: 0x100093148-0x1000931f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100093148(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff);
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar5 + 3 & 0xfffffffffffffffc;
  uVar6 = uVar4 + 0xb & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar6 + 0x18);
  puVar2 = (undefined8 *)(unaff_x20 + uVar6 + 0x28);
  FUN_10008bd84(param_1,*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + uVar5,
                *(undefined4 *)(unaff_x20 + uVar4),*(undefined8 *)(unaff_x20 + uVar6),
                *(undefined8 *)(unaff_x20 + uVar6 + 8),*(undefined8 *)(unaff_x20 + uVar6 + 0x10),
                *puVar1,puVar1[1],*puVar2,puVar2[1]);
  return;
}

