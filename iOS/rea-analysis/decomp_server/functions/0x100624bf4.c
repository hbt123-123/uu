// rea decompile_all
// name: thunk_FUN_100624bf8
// address: 0x100624bf4
// body: available
// range: 0x100624bf4-0x100624bf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 thunk_FUN_100624bf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  
  puVar1 = &DAT_100aaffc0;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  puVar7 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = param_1;
  FUN_10061fc98(param_1,param_2);
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar7,1,1,lVar3);
  puVar1 = &DAT_1009e08b8;
  _swift_allocObject(&DAT_1009e08b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  puVar4 = &DAT_1009e08e0;
  _swift_allocObject(&DAT_1009e08e0,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = param_2;
  *(code **)(puVar4 + 0x18) = FUN_100626e5c;
  *(undefined **)(puVar4 + 0x20) = puVar1;
  uVar5 = 0;
  __sSaMa(0,param_2);
  _swift_bridgeObjectRetain(param_1);
  uVar6 = 0;
  FUN_1006119f0(0,puVar7,FUN_100626e88,puVar4,uVar5);
  _swift_release(uVar2);
  _swift_release(puVar4);
  FUN_1006070b4(puVar7);
  return uVar6;
}

