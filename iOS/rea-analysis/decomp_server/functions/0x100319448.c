// rea decompile_all
// name: FUN_100319448
// address: 0x100319448
// body: available
// range: 0x100319448-0x100319507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100319448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(param_5 + -8);
  uVar2 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar4 = uVar2 + 0x30 & (uVar2 ^ 0xffffffffffffffff);
  uVar5 = *(long *)(lVar3 + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  puVar1 = &DAT_1009b08b8;
  _swift_allocObject(&DAT_1009b08b8,uVar5 + 8,uVar2 | 7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(long *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  (**(code **)(lVar3 + 0x20))(puVar1 + uVar4,param_3,param_5);
  *(undefined8 *)(puVar1 + uVar5) = param_2;
  _swift_retain(param_1);
  return;
}

