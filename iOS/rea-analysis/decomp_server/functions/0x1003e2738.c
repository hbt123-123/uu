// rea decompile_all
// name: FUN_1003e2738
// address: 0x1003e2738
// body: available
// range: 0x1003e2738-0x1003e289f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1003e2738(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  
  lVar6 = *unaff_x20;
  local_48 = 0;
  lVar5 = unaff_x20[3];
  puVar2 = &DAT_1009ba8d8;
  _swift_allocObject(&DAT_1009ba8d8,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  puVar3 = &DAT_1009ba900;
  _swift_allocObject(&DAT_1009ba900,0x38,7);
  uVar7 = *(undefined8 *)(lVar6 + 0x50);
  *(undefined8 *)(puVar3 + 0x18) = *(undefined8 *)(lVar6 + 0x58);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(undefined8 *)(puVar3 + 0x20) = *(undefined8 *)(lVar6 + 0x60);
  *(undefined **)(puVar3 + 0x28) = puVar2;
  *(undefined8 **)(puVar3 + 0x30) = &local_48;
  puVar2 = &DAT_1009ba928;
  _swift_allocObject(&DAT_1009ba928,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1003e2998;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  local_58 = FUN_100102840;
  local_78 = PTR___NSConcreteStackBlock_100995490;
  local_70 = 0x42000000;
  local_68 = FUN_1000fcdcc;
  puStack_60 = &DAT_1009ba940;
  local_50 = puVar2;
  aBlock = __Block_copy(&local_78);
  puVar4 = local_50;
  _swift_retain(puVar2);
  _swift_release(puVar4);
  _dispatch_sync(lVar5,aBlock);
  __Block_release(aBlock);
  puVar4 = puVar2;
  _swift_isEscapingClosureAtFileLocation(puVar2,"",0x94,0x11,0x1d,1);
  _swift_release(puVar2);
  uVar7 = local_48;
  if (((ulong)puVar4 & 1) == 0) {
    _swift_release(puVar3);
    return uVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e28a0);
  (*pcVar1)();
}

