// rea decompile_all
// name: FUN_100328ab4
// address: 0x100328ab4
// body: available
// range: 0x100328ab4-0x100328bcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100328ab4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)(param_2 + -8);
  lVar8 = *(long *)(lVar7 + 0x40);
  puVar5 = &stack0xffffffffffffffa0 + -(lVar8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  lVar1 = 0;
  __sScS8IteratorVMa(0,uVar4);
  lVar1 = (long)puVar5 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  __sScSMa(0,uVar4);
  __sScS17makeAsyncIteratorScS0C0Vyx_GyF(lVar1);
  (**(code **)(lVar7 + 0x10))(puVar5);
  uVar3 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar6 = uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff);
  puVar2 = &DAT_1009b17a0;
  _swift_allocObject(&DAT_1009b17a0,uVar6 + lVar8,uVar3 | 7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  (**(code **)(lVar7 + 0x20))(puVar2 + uVar6,puVar5,param_2);
  FUN_100328c30(param_1,lVar1,FUN_10032b6b4,puVar2,uVar4);
  return;
}

