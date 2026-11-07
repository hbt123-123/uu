// rea decompile_all
// name: FUN_100327b00
// address: 0x100327b00
// body: available
// range: 0x100327b00-0x100327c07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100327b00(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  code *pcStack_68;
  
  lVar1 = 0;
  local_80 = param_4;
  uStack_78 = param_8;
  local_70 = param_3;
  pcStack_68 = param_2;
  __sScS12ContinuationVMa(0,param_7);
  lVar4 = *(long *)(lVar1 + -8);
  lVar5 = *(long *)(lVar4 + 0x40);
  lVar7 = (long)&local_80 - (lVar5 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))(lVar7,param_1,lVar1);
  uVar3 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar6 = uVar3 + 0x40 & (uVar3 ^ 0xffffffffffffffff);
  puVar2 = &DAT_1009b1aa8;
  _swift_allocObject(&DAT_1009b1aa8,uVar6 + lVar5,uVar3 | 7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  *(undefined8 *)(puVar2 + 0x18) = param_7;
  *(undefined8 *)(puVar2 + 0x20) = uStack_78;
  *(undefined8 *)(puVar2 + 0x28) = param_9;
  *(undefined8 *)(puVar2 + 0x30) = local_80;
  *(undefined8 *)(puVar2 + 0x38) = param_5;
  (**(code **)(lVar4 + 0x20))(puVar2 + uVar6,lVar7,lVar1);
  _swift_retain(param_5);
  (*pcStack_68)(FUN_10032c68c,puVar2);
  _swift_release(puVar2);
  return;
}

