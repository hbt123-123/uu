// rea decompile_all
// name: FUN_10023784c
// address: 0x10023784c
// body: available
// range: 0x10023784c-0x1002379a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10023784c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_a8 [104];
  
  puVar2 = &DAT_100a7f178;
  FUN_100004bb4(&DAT_100a7f178,&DAT_100814010);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined8 *)(puVar2 + 0x20) = 0x6d616e5f65676170;
  *(undefined **)(puVar2 + 0x48) = PTR___sSSN_1009957f8;
  *(undefined8 *)(puVar2 + 0x28) = 0xe900000000000065;
  *(undefined8 *)(puVar2 + 0x30) = param_1;
  *(undefined8 *)(puVar2 + 0x38) = param_2;
  _swift_bridgeObjectRetain(param_2);
  puVar3 = puVar2;
  FUN_100234418(puVar2);
  _swift_setDeallocating(puVar2);
  FUN_100040bb4(puVar2 + 0x20,&DAT_100a7f180,&DAT_100813c98);
  uVar4 = 0;
  FUN_100232e2c(0);
  _objc_allocWithZone();
  lVar5 = -0x2fffffffffffffef;
  FUN_100233c5c(0xd000000000000011,0x80000001008a6040,puVar3,uVar4);
  lVar1 = FCountEvent::params;
  _swift_beginAccess(lVar5 + FCountEvent::params,auStack_a8,1,0);
  uVar4 = *(undefined8 *)(lVar5 + lVar1);
  *(undefined8 *)(lVar5 + lVar1) = param_3;
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRelease(uVar4);
  FUN_100237814(0);
  FUN_100234814(lVar5);
  return 0;
}

