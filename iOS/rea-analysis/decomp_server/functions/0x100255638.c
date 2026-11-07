// rea decompile_all
// name: FUN_100255638
// address: 0x100255638
// body: available
// range: 0x100255638-0x10025577b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100255638(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar2 = &DAT_1009a8208;
  _swift_allocObject(&DAT_1009a8208,0x28,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  puVar3 = &DAT_1009a8230;
  _swift_allocObject(&DAT_1009a8230,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_100255eb0;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  local_60 = FUN_100102840;
  local_80 = PTR___NSConcreteStackBlock_100995490;
  local_78 = 0x42000000;
  local_70 = FUN_1000fcdcc;
  puStack_68 = &DAT_1009a8248;
  local_58 = puVar3;
  aBlock = __Block_copy(&local_80);
  puVar4 = local_58;
  _swift_retain();
  _swift_unknownObjectRetain(param_1);
  _swift_retain(puVar3);
  _swift_release(puVar4);
  _dispatch_sync(uVar5,aBlock);
  __Block_release(aBlock);
  puVar4 = puVar3;
  _swift_isEscapingClosureAtFileLocation(puVar3,"",0xbb,0x2b,0x18,1);
  _swift_release(puVar2);
  _swift_release(puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10025577c);
  (*pcVar1)();
}

