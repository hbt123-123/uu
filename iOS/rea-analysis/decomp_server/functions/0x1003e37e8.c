// rea decompile_all
// name: FUN_1003e37e8
// address: 0x1003e37e8
// body: available
// range: 0x1003e37e8-0x1003e39d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e37e8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x20;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar6 = *unaff_x20;
  lVar7 = *(long *)(lVar6 + 0x50);
  lVar11 = *(long *)(lVar7 + -8);
  lVar9 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = *(long *)(lVar6 + 0x58);
  (**(code **)(*(long *)(lVar10 + -8) + 0x38))(param_1,1,1,lVar10);
  local_98 = unaff_x20[3];
  puVar2 = &DAT_1009ba8d8;
  _swift_allocObject(&DAT_1009ba8d8,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  (**(code **)(lVar11 + 0x10))(auStack_a0 + -(lVar9 + 0xfU & 0xfffffffffffffff0),param_2,lVar7);
  uVar5 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar8 = uVar5 + 0x38 & (uVar5 ^ 0xffffffffffffffff);
  puVar3 = &DAT_1009baa18;
  _swift_allocObject(&DAT_1009baa18,uVar8 + lVar9,uVar5 | 7);
  *(long *)(puVar3 + 0x10) = lVar7;
  *(long *)(puVar3 + 0x18) = lVar10;
  *(undefined8 *)(puVar3 + 0x20) = *(undefined8 *)(lVar6 + 0x60);
  *(undefined8 *)(puVar3 + 0x28) = param_1;
  *(undefined **)(puVar3 + 0x30) = puVar2;
  (**(code **)(lVar11 + 0x20))
            (puVar3 + uVar8,auStack_a0 + -(lVar9 + 0xfU & 0xfffffffffffffff0),lVar7);
  puVar2 = &DAT_1009baa40;
  _swift_allocObject(&DAT_1009baa40,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1003e4140;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  local_70 = thunk_FUN_100102840;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000fcdcc;
  puStack_78 = &DAT_1009baa58;
  local_68 = puVar2;
  aBlock = __Block_copy(&local_90);
  puVar4 = local_68;
  _swift_retain(puVar2);
  _swift_release(puVar4);
  _dispatch_sync(local_98,aBlock);
  __Block_release(aBlock);
  puVar4 = puVar2;
  _swift_isEscapingClosureAtFileLocation(puVar2,"",0x94,0x46,0x21,1);
  _swift_release(puVar3);
  _swift_release(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e39d8);
  (*pcVar1)();
}

